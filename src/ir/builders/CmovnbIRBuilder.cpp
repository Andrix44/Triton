#include <algorithm>
#include <sstream>
#include <stdexcept>

#include <CmovnbIRBuilder.h>
#include <Registers.h>
#include <SMT2Lib.h>
#include <SymbolicExpression.h>


CmovnbIRBuilder::CmovnbIRBuilder(uint64 address, const std::string &disassembly):
  BaseIRBuilder(address, disassembly){
}


void CmovnbIRBuilder::regImm(AnalysisProcessor &ap, Inst &inst) const {
  TwoOperandsTemplate::stop(this->disas);
}


void CmovnbIRBuilder::regReg(AnalysisProcessor &ap, Inst &inst) const {
  SymbolicExpression  *se;
  std::stringstream expr, reg1e, reg2e, cf;
  uint64            reg1    = this->operands[0].getValue();
  uint64            reg2    = this->operands[1].getValue();
  uint64            size1   = this->operands[0].getSize();
  uint64            size2   = this->operands[1].getSize();

  /* Create the SMT semantic */
  cf << ap.buildSymbolicFlagOperand(ID_CF);
  reg1e << ap.buildSymbolicRegOperand(reg1, size1);
  reg2e << ap.buildSymbolicRegOperand(reg2, size2);

  expr << smt2lib::ite(
            smt2lib::equal(
              cf.str(),
              smt2lib::bvfalse()),
            reg2e.str(),
            reg1e.str());

  /* Create the symbolic expression */
  se = ap.createRegSE(inst, expr, reg1, size1);

  /* Apply the taint via the concretization */
  if (ap.getFlagValue(ID_CF) == 0)
    ap.assignmentSpreadTaintRegReg(se, reg1, reg2);

}


void CmovnbIRBuilder::regMem(AnalysisProcessor &ap, Inst &inst) const {
  SymbolicExpression  *se;
  std::stringstream expr, reg1e, mem1e, cf;
  uint32            readSize = this->operands[1].getSize();
  uint64            mem      = this->operands[1].getValue();
  uint64            reg      = this->operands[0].getValue();
  uint64            regSize  = this->operands[0].getSize();

  /* Create the SMT semantic */
  cf << ap.buildSymbolicFlagOperand(ID_CF);
  reg1e << ap.buildSymbolicRegOperand(reg, regSize);
  mem1e << ap.buildSymbolicMemOperand(mem, readSize);

  expr << smt2lib::ite(
            smt2lib::equal(
              cf.str(),
              smt2lib::bvfalse()),
            mem1e.str(),
            reg1e.str());

  /* Create the symbolic expression */
  se = ap.createRegSE(inst, expr, reg, regSize);

  /* Apply the taint via the concretization */
  if (ap.getFlagValue(ID_CF) == 0)
    ap.assignmentSpreadTaintRegMem(se, reg, mem, readSize);

}


void CmovnbIRBuilder::memImm(AnalysisProcessor &ap, Inst &inst) const {
  TwoOperandsTemplate::stop(this->disas);
}


void CmovnbIRBuilder::memReg(AnalysisProcessor &ap, Inst &inst) const {
  TwoOperandsTemplate::stop(this->disas);
}


Inst *CmovnbIRBuilder::process(AnalysisProcessor &ap) const {
  checkSetup();

  Inst *inst = new Inst(ap.getThreadID(), this->address, this->disas);

  try {
    this->templateMethod(ap, *inst, this->operands, "CMOVNB");
    ap.incNumberOfExpressions(inst->numberOfExpressions()); /* Used for statistics */
    ControlFlow::rip(*inst, ap, this->nextAddress);
  }
  catch (std::exception &e) {
    delete inst;
    throw;
  }

  return inst;
}

