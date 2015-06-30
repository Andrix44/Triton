#ifndef EFLAGSBUILDER_H
#define EFLAGSBUILDER_H

#include "AnalysisProcessor.h"
#include "Inst.h"
#include "EflagsExpressions.h"
#include "SymbolicExpression.h"


/* Retunrs the symbolic expression already crafted */
namespace EflagsBuilder {

  SymbolicExpression *af(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1, std::stringstream &op2);
  SymbolicExpression *afNeg(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1);

  SymbolicExpression *cfAdd(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, std::stringstream &op1);
  SymbolicExpression *cfImul(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1);
  SymbolicExpression *cfMul(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &up);
  SymbolicExpression *cfNeg(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1);
  SymbolicExpression *cfRcl(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op2);
  SymbolicExpression *cfRol(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, std::stringstream &op2);
  SymbolicExpression *cfRor(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op2);
  SymbolicExpression *cfSar(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1, std::stringstream &op2);
  SymbolicExpression *cfShl(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1, std::stringstream &op2);
  SymbolicExpression *cfShr(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1, std::stringstream &op2);
  SymbolicExpression *cfSub(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, std::stringstream &op1, std::stringstream &op2);

  SymbolicExpression *clearFlag(Inst &inst, AnalysisProcessor &ap, regID_t flag);
  SymbolicExpression *clearFlag(Inst &inst, AnalysisProcessor &ap, regID_t flag, std::string comment);

  SymbolicExpression *ofAdd(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1, std::stringstream &op2);
  SymbolicExpression *ofImul(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1);
  SymbolicExpression *ofMul(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &up);
  SymbolicExpression *ofNeg(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1);
  SymbolicExpression *ofRol(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op2);
  SymbolicExpression *ofRor(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op2);
  SymbolicExpression *ofSar(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op2);
  SymbolicExpression *ofShl(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1, std::stringstream &op2);
  SymbolicExpression *ofShr(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1, std::stringstream &op2);
  SymbolicExpression *ofSub(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op1, std::stringstream &op2);

  SymbolicExpression *pf(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap);
  SymbolicExpression *pfShl(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op2);

  SymbolicExpression *setFlag(Inst &inst, AnalysisProcessor &ap, regID_t flag);
  SymbolicExpression *setFlag(Inst &inst, AnalysisProcessor &ap, regID_t flag, std::string comment);

  SymbolicExpression *sf(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize);
  SymbolicExpression *sfShl(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op2);

  SymbolicExpression *zf(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize);
  SymbolicExpression *zfShl(Inst &inst, SymbolicExpression *parent, AnalysisProcessor &ap, uint32 dstSize, std::stringstream &op2);
};

#endif // EFLAGSBUILDER_H

