//! \file
/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the Apache License 2.0.
*/

#include <triton/stubs.hpp>


namespace triton {
  namespace stubs {
    namespace x8664 {
      namespace systemv {
        namespace libc {

          /* This map contains the mapping of function names and their offset in `systemv::libc::code` */
          std::map<std::string, triton::uint64> symbols = {
            {"memccpy",     0x0},
            {"memchr",      0x63},
            {"memcmp",      0xa8},
            {"memcpy",      0x10b},
            {"memmem",      0x150},
            {"memmove",     0x1df},
            {"mempcpy",     0x24a},
            {"memrchr",     0x28e},
            {"memset",      0x2d6},
            {"bcopy",       0x30e},
            {"bzero",       0x33c},
            {"rawmemchr",   0x364},
            {"stpcpy",      0x38d},
            {"stpncpy",     0x3be},
            {"tolower",     0x409},
            {"toupper",     0x42a},
            {"strcasecmp",  0x44b},
            {"strcasestr",  0x4da},
            {"strcat",      0x568},
            {"strchr",      0x5b0},
            {"strchrnul",   0x5db},
            {"strcmp",      0x601},
            {"strcpy",      0x63f},
            {"strcspn",     0x67a},
            {"strlen",      0x6c8},
            {"strlcat",     0x6ef},
            {"strlcpy",     0x753},
            {"strncasecmp", 0x79f},
            {"strncat",     0x81e},
            {"strncmp",     0x877},
            {"strncpy",     0x8d1},
            {"strnlen",     0x911},
            {"strpbrk",     0x948},
            {"strrchr",     0x996},
            {"strsep",      0x9ca},
            {"strspn",      0xa2b},
            {"strstr",      0xa72},
            {"strtok_r",    0xad0},
            {"strtok",      0xb53},
          };

          /*
           * This vector contains the binary code of some libc functions.
           * The code is position-independent and its calling convention is
           * SystemV AMD64 ABI (RDI, RSI, RDX, RCX, R8, R9).
           */
          std::vector<triton::uint8> code = {
            /* memccpy */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x89, 0x7D, 0xE8, 0x48, 0x89, 0x75, 0xE0, 0x89,
            0x55, 0xDC, 0x48, 0x89, 0x4D, 0xD0, 0x48, 0x8B, 0x5D, 0xE8, 0x4C, 0x8B, 0x65, 0xE0, 0x90, 0x48,
            0x8B, 0x45, 0xD0, 0x48, 0x8D, 0x50, 0xFF, 0x48, 0x89, 0x55, 0xD0, 0x48, 0x85, 0xC0, 0x74, 0x1D,
            0x4C, 0x89, 0xE2, 0x4C, 0x8D, 0x62, 0x01, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01, 0x0F, 0xB6,
            0x12, 0x88, 0x10, 0x0F, 0xB6, 0x00, 0x8B, 0x55, 0xDC, 0x38, 0xD0, 0x75, 0xD2, 0x48, 0x83, 0x7D,
            0xD0, 0xFF, 0x74, 0x05, 0x48, 0x89, 0xD8, 0xEB, 0x05, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x5B, 0x41,
            0x5C, 0x5D, 0xC3,

            /* memchr */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0x7D, 0xE8, 0x89, 0x75, 0xE4, 0x48, 0x89, 0x55, 0xD8, 0x48,
            0x8B, 0x45, 0xE8, 0x48, 0x89, 0x45, 0xF8, 0xEB, 0x1E, 0x48, 0x8B, 0x45, 0xF8, 0x0F, 0xB6, 0x00,
            0x8B, 0x55, 0xE4, 0x38, 0xD0, 0x75, 0x06, 0x48, 0x8B, 0x45, 0xF8, 0xEB, 0x16, 0x48, 0x83, 0x45,
            0xF8, 0x01, 0x48, 0x83, 0x6D, 0xD8, 0x01, 0x48, 0x83, 0x7D, 0xD8, 0x00, 0x75, 0xDB, 0xB8, 0x00,
            0x00, 0x00, 0x00, 0x5D, 0xC3,

            /* memcmp */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x89, 0x7D, 0xD8, 0x48, 0x89, 0x75, 0xD0, 0x48,
            0x89, 0x55, 0xC8, 0x4C, 0x8B, 0x65, 0xD8, 0x48, 0x8B, 0x5D, 0xD0, 0xC7, 0x45, 0xEC, 0x00, 0x00,
            0x00, 0x00, 0x90, 0x48, 0x8B, 0x45, 0xC8, 0x48, 0x8D, 0x50, 0xFF, 0x48, 0x89, 0x55, 0xC8, 0x48,
            0x85, 0xC0, 0x74, 0x27, 0x4C, 0x89, 0xE0, 0x4C, 0x8D, 0x60, 0x01, 0x0F, 0xB6, 0x00, 0x0F, 0xB6,
            0xD0, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01, 0x0F, 0xB6, 0x00, 0x0F, 0xB6, 0xC8, 0x89, 0xD0,
            0x29, 0xC8, 0x89, 0x45, 0xEC, 0x83, 0x7D, 0xEC, 0x00, 0x74, 0xC8, 0x8B, 0x45, 0xEC, 0x5B, 0x41,
            0x5C, 0x5D, 0xC3,

            /* memcpy */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x89, 0x7D, 0xE8, 0x48, 0x89, 0x75, 0xE0, 0x48,
            0x89, 0x55, 0xD8, 0x48, 0x8B, 0x5D, 0xE8, 0x4C, 0x8B, 0x65, 0xE0, 0xEB, 0x18, 0x4C, 0x89, 0xE2,
            0x4C, 0x8D, 0x62, 0x01, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01, 0x0F, 0xB6, 0x12, 0x88, 0x10,
            0x48, 0x83, 0x6D, 0xD8, 0x01, 0x48, 0x83, 0x7D, 0xD8, 0x00, 0x75, 0xE1, 0x48, 0x8B, 0x45, 0xE8,
            0x5B, 0x41, 0x5C, 0x5D, 0xC3,

            /* memmem */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x89, 0x7D, 0xD8, 0x48, 0x89, 0x75, 0xD0, 0x48,
            0x89, 0x55, 0xC8, 0x48, 0x89, 0x4D, 0xC0, 0x48, 0x83, 0x7D, 0xC0, 0x00, 0x75, 0x06, 0x48, 0x8B,
            0x45, 0xD8, 0xEB, 0x66, 0x48, 0x8B, 0x45, 0xD0, 0x48, 0x3B, 0x45, 0xC0, 0x72, 0x57, 0x48, 0x8B,
            0x5D, 0xD8, 0x4C, 0x8B, 0x65, 0xC8, 0x48, 0x8B, 0x45, 0xD0, 0x48, 0x2B, 0x45, 0xC0, 0x48, 0x01,
            0xD8, 0x48, 0x89, 0x45, 0xE0, 0x48, 0xC7, 0x45, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xEB, 0x14, 0x48,
            0x83, 0x45, 0xE8, 0x01, 0x48, 0x8B, 0x45, 0xE8, 0x48, 0x3B, 0x45, 0xC0, 0x75, 0x05, 0x48, 0x89,
            0xD8, 0xEB, 0x27, 0x48, 0x8B, 0x45, 0xE8, 0x48, 0x01, 0xD8, 0x0F, 0xB6, 0x10, 0x48, 0x8B, 0x45,
            0xE8, 0x4C, 0x01, 0xE0, 0x0F, 0xB6, 0x00, 0x38, 0xC2, 0x74, 0xD4, 0x48, 0x83, 0xC3, 0x01, 0x48,
            0x3B, 0x5D, 0xE0, 0x76, 0xC0, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x5B, 0x41, 0x5C, 0x5D, 0xC3,

            /* memmove */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x89, 0x7D, 0xE8, 0x48, 0x89, 0x75, 0xE0, 0x48,
            0x89, 0x55, 0xD8, 0x48, 0x8B, 0x5D, 0xE8, 0x4C, 0x8B, 0x65, 0xE0, 0x49, 0x39, 0xDC, 0x72, 0x3B,
            0xEB, 0x18, 0x4C, 0x89, 0xE2, 0x4C, 0x8D, 0x62, 0x01, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01,
            0x0F, 0xB6, 0x12, 0x88, 0x10, 0x48, 0x83, 0x6D, 0xD8, 0x01, 0x48, 0x83, 0x7D, 0xD8, 0x00, 0x75,
            0xE1, 0xEB, 0x1F, 0x48, 0x83, 0x6D, 0xD8, 0x01, 0x48, 0x8B, 0x45, 0xD8, 0x4C, 0x01, 0xE0, 0x48,
            0x8B, 0x55, 0xD8, 0x48, 0x01, 0xDA, 0x0F, 0xB6, 0x00, 0x88, 0x02, 0x48, 0x83, 0x7D, 0xD8, 0x00,
            0x75, 0xE1, 0x48, 0x8B, 0x45, 0xE8, 0x5B, 0x41, 0x5C, 0x5D, 0xC3,

            /* mempcpy */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x89, 0x7D, 0xE8, 0x48, 0x89, 0x75, 0xE0, 0x48,
            0x89, 0x55, 0xD8, 0x48, 0x8B, 0x5D, 0xE8, 0x4C, 0x8B, 0x65, 0xE0, 0xEB, 0x18, 0x4C, 0x89, 0xE2,
            0x4C, 0x8D, 0x62, 0x01, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01, 0x0F, 0xB6, 0x12, 0x88, 0x10,
            0x48, 0x83, 0x6D, 0xD8, 0x01, 0x48, 0x83, 0x7D, 0xD8, 0x00, 0x75, 0xE1, 0x48, 0x89, 0xD8, 0x5B,
            0x41, 0x5C, 0x5D, 0xC3,

            /* memrchr */
            0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x89, 0x7D, 0xF0, 0x89, 0x75, 0xEC, 0x48, 0x89, 0x55, 0xE0,
            0x48, 0x8B, 0x55, 0xF0, 0x48, 0x8B, 0x45, 0xE0, 0x48, 0x8D, 0x1C, 0x02, 0xEB, 0x18, 0x48, 0x83,
            0xEB, 0x01, 0x0F, 0xB6, 0x03, 0x8B, 0x55, 0xEC, 0x38, 0xD0, 0x75, 0x05, 0x48, 0x89, 0xD8, 0xEB,
            0x11, 0x48, 0x83, 0x6D, 0xE0, 0x01, 0x48, 0x83, 0x7D, 0xE0, 0x00, 0x75, 0xE1, 0xB8, 0x00, 0x00,
            0x00, 0x00, 0x48, 0x8B, 0x5D, 0xF8, 0xC9, 0xC3,

            /* memset */
            0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x89, 0x7D, 0xF0, 0x89, 0x75, 0xEC, 0x48, 0x89, 0x55, 0xE0,
            0x48, 0x8B, 0x5D, 0xF0, 0xEB, 0x11, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01, 0x8B, 0x55, 0xEC,
            0x88, 0x10, 0x48, 0x83, 0x6D, 0xE0, 0x01, 0x48, 0x83, 0x7D, 0xE0, 0x00, 0x75, 0xE8, 0x48, 0x8B,
            0x45, 0xF0, 0x48, 0x8B, 0x5D, 0xF8, 0xC9, 0xC3,

            /* bcopy */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x18, 0x48, 0x89, 0x7D, 0xF8, 0x48, 0x89, 0x75, 0xF0,
            0x48, 0x89, 0x55, 0xE8, 0x48, 0x8B, 0x55, 0xE8, 0x48, 0x8B, 0x4D, 0xF8, 0x48, 0x8B, 0x45, 0xF0,
            0x48, 0x89, 0xCE, 0x48, 0x89, 0xC7, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x90, 0xC9, 0xC3,

            /* bzero */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x10, 0x48, 0x89, 0x7D, 0xF8, 0x48, 0x89, 0x75, 0xF0,
            0x48, 0x8B, 0x55, 0xF0, 0x48, 0x8B, 0x45, 0xF8, 0xBE, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0xC7,
            0xE8, 0x00, 0x00, 0x00, 0x00, 0x90, 0xC9, 0xC3,

            /* rawmemchr */
            0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x89, 0x7D, 0xF0, 0x89, 0x75, 0xEC, 0x48, 0x8B, 0x5D, 0xF0,
            0xEB, 0x04, 0x48, 0x83, 0xC3, 0x01, 0x0F, 0xB6, 0x03, 0x8B, 0x55, 0xEC, 0x38, 0xD0, 0x75, 0xF2,
            0x48, 0x89, 0xD8, 0x48, 0x8B, 0x5D, 0xF8, 0xC9, 0xC3,

            /* stpcpy */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0xF8, 0x48, 0x89, 0x75, 0xF8, 0x90, 0x48, 0x8B, 0x4D, 0xF8,
            0x48, 0x8D, 0x51, 0x01, 0x48, 0x89, 0x55, 0xF8, 0x48, 0x89, 0xC2, 0x48, 0x8D, 0x42, 0x01, 0x0F,
            0xB6, 0x09, 0x88, 0x0A, 0x0F, 0xB6, 0x12, 0x84, 0xD2, 0x75, 0xE1, 0x48, 0x83, 0xE8, 0x01, 0x5D,
            0xC3,

            /* stpncpy */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0xF9, 0x48, 0x89, 0xF0, 0x48, 0x89, 0x55, 0xE8, 0x48, 0x89,
            0x4D, 0xF8, 0x48, 0x89, 0x45, 0xF0, 0xEB, 0x23, 0x0F, 0xB6, 0x30, 0x48, 0x8B, 0x55, 0xF8, 0x40,
            0x88, 0x32, 0x48, 0x8B, 0x55, 0xF8, 0x0F, 0xB6, 0x12, 0x84, 0xD2, 0x74, 0x04, 0x48, 0x83, 0xC0,
            0x01, 0x48, 0x83, 0x45, 0xF8, 0x01, 0x48, 0x83, 0x6D, 0xE8, 0x01, 0x48, 0x83, 0x7D, 0xE8, 0x00,
            0x75, 0xD6, 0x48, 0x2B, 0x45, 0xF0, 0x48, 0x01, 0xC8, 0x5D, 0xC3,

            /* tolower */
            0x55, 0x48, 0x89, 0xE5, 0x89, 0x7D, 0xEC, 0x8B, 0x45, 0xEC, 0x89, 0x45, 0xFC, 0x8B, 0x45, 0xFC,
            0x83, 0xE8, 0x41, 0x83, 0xF8, 0x19, 0x77, 0x04, 0x83, 0x45, 0xFC, 0x20, 0x8B, 0x45, 0xFC, 0x5D,
            0xC3,

            /* toupper */
            0x55, 0x48, 0x89, 0xE5, 0x89, 0x7D, 0xEC, 0x8B, 0x45, 0xEC, 0x89, 0x45, 0xFC, 0x8B, 0x45, 0xFC,
            0x83, 0xE8, 0x61, 0x83, 0xF8, 0x19, 0x77, 0x04, 0x83, 0x6D, 0xFC, 0x20, 0x8B, 0x45, 0xFC, 0x5D,
            0xC3,

            /* strcasecmp */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x55, 0x41, 0x54, 0x53, 0x48, 0x89, 0xFB, 0x49, 0x89, 0xF4, 0xEB,
            0x19, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01, 0x0F, 0xB6, 0x00, 0x84, 0xC0, 0x75, 0x07, 0xB8,
            0x00, 0x00, 0x00, 0x00, 0xEB, 0x62, 0x49, 0x83, 0xC4, 0x01, 0x0F, 0xB6, 0x13, 0x41, 0x0F, 0xB6,
            0x04, 0x24, 0x38, 0xC2, 0x74, 0xDB, 0x0F, 0xB6, 0x03, 0x0F, 0xBE, 0xC0, 0x89, 0xC7, 0xE8, 0x00,
            0x00, 0x00, 0x00, 0x41, 0x89, 0xC5, 0x41, 0x0F, 0xB6, 0x04, 0x24, 0x0F, 0xBE, 0xC0, 0x89, 0xC7,
            0xE8, 0x00, 0x00, 0x00, 0x00, 0x41, 0x39, 0xC5, 0x74, 0xB7, 0x0F, 0xB6, 0x03, 0x0F, 0xBE, 0xC0,
            0x89, 0xC7, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x89, 0xC3, 0x41, 0x0F, 0xB6, 0x04, 0x24, 0x0F, 0xBE,
            0xC0, 0x89, 0xC7, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x38, 0xC3, 0x73, 0x07, 0xB8, 0xFF, 0xFF, 0xFF,
            0xFF, 0xEB, 0x05, 0xB8, 0x01, 0x00, 0x00, 0x00, 0x5B, 0x41, 0x5C, 0x41, 0x5D, 0x5D, 0xC3,

            /* strcasestr */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x55, 0x41, 0x54, 0x53, 0x48, 0x83, 0xEC, 0x10, 0x48, 0x89, 0x7D,
            0xE0, 0x48, 0x89, 0x75, 0xD8, 0x48, 0x8B, 0x5D, 0xE0, 0x4C, 0x8B, 0x65, 0xD8, 0x41, 0x0F, 0xB6,
            0x04, 0x24, 0x84, 0xC0, 0x75, 0x06, 0x48, 0x8B, 0x45, 0xE0, 0xEB, 0x57, 0x41, 0x0F, 0xB6, 0x14,
            0x24, 0x0F, 0xB6, 0x03, 0x38, 0xC2, 0x74, 0x24, 0x41, 0x0F, 0xB6, 0x04, 0x24, 0x0F, 0xB6, 0xC0,
            0x89, 0xC7, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x41, 0x89, 0xC5, 0x0F, 0xB6, 0x03, 0x0F, 0xB6, 0xC0,
            0x89, 0xC7, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x41, 0x39, 0xC5, 0x75, 0x0A, 0x49, 0x83, 0xC4, 0x01,
            0x48, 0x83, 0xC3, 0x01, 0xEB, 0x1B, 0x4C, 0x8B, 0x65, 0xD8, 0x0F, 0xB6, 0x03, 0x84, 0xC0, 0x75,
            0x07, 0xB8, 0x00, 0x00, 0x00, 0x00, 0xEB, 0x0B, 0x48, 0x83, 0x45, 0xE0, 0x01, 0x48, 0x8B, 0x5D,
            0xE0, 0xEB, 0x9A, 0x48, 0x83, 0xC4, 0x10, 0x5B, 0x41, 0x5C, 0x41, 0x5D, 0x5D, 0xC3,

            /* strcat */
            0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x89, 0x7D, 0xF0, 0x48, 0x89, 0xF2, 0x48, 0x8B, 0x5D, 0xF0,
            0x90, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01, 0x0F, 0xB6, 0x00, 0x84, 0xC0, 0x75, 0xF2, 0x48,
            0x83, 0xEB, 0x01, 0x90, 0x48, 0x89, 0xD1, 0x48, 0x8D, 0x51, 0x01, 0x48, 0x89, 0xD8, 0x48, 0x8D,
            0x58, 0x01, 0x0F, 0xB6, 0x09, 0x88, 0x08, 0x0F, 0xB6, 0x00, 0x84, 0xC0, 0x75, 0xE6, 0x48, 0x8B,
            0x45, 0xF0, 0x48, 0x8B, 0x5D, 0xF8, 0xC9, 0xC3,

            /* strchr */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0xF8, 0x89, 0x75, 0xFC, 0x0F, 0xB6, 0x10, 0x8B, 0x4D, 0xFC,
            0x38, 0xCA, 0x75, 0x02, 0xEB, 0x13, 0x48, 0x89, 0xC2, 0x48, 0x8D, 0x42, 0x01, 0x0F, 0xB6, 0x12,
            0x84, 0xD2, 0x75, 0xE6, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x5D, 0xC3,

            /* strchrnul */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0xF8, 0x89, 0x75, 0xFC, 0x48, 0x83, 0xE8, 0x01, 0x90, 0x48,
            0x83, 0xC0, 0x01, 0x0F, 0xB6, 0x10, 0x84, 0xD2, 0x74, 0x0A, 0x0F, 0xB6, 0x10, 0x8B, 0x4D, 0xFC,
            0x38, 0xCA, 0x75, 0xEB, 0x5D, 0xC3,

            /* strcmp */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0xF8, 0x48, 0x89, 0xF2, 0x90, 0x0F, 0xB6, 0x08, 0x0F, 0xB6,
            0xF1, 0x48, 0x89, 0xD1, 0x48, 0x8D, 0x51, 0x01, 0x0F, 0xB6, 0x09, 0x0F, 0xB6, 0xF9, 0x29, 0xFE,
            0x89, 0xF1, 0x89, 0x4D, 0xFC, 0x83, 0x7D, 0xFC, 0x00, 0x75, 0x0E, 0x48, 0x89, 0xC1, 0x48, 0x8D,
            0x41, 0x01, 0x0F, 0xB6, 0x09, 0x84, 0xC9, 0x75, 0xD2, 0x8B, 0x45, 0xFC, 0x5D, 0xC3,

            /* strcpy */
            0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x89, 0x7D, 0xF0, 0x48, 0x89, 0x75, 0xE8, 0x48, 0x8B, 0x5D,
            0xF0, 0x90, 0x48, 0x8B, 0x55, 0xE8, 0x48, 0x8D, 0x42, 0x01, 0x48, 0x89, 0x45, 0xE8, 0x48, 0x89,
            0xD8, 0x48, 0x8D, 0x58, 0x01, 0x0F, 0xB6, 0x12, 0x88, 0x10, 0x0F, 0xB6, 0x00, 0x84, 0xC0, 0x75,
            0xE1, 0x48, 0x8B, 0x45, 0xF0, 0x48, 0x8B, 0x5D, 0xF8, 0xC9, 0xC3,

            /* strcspn */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x89, 0x7D, 0xE8, 0x48, 0x89, 0x75, 0xE0, 0x48,
            0x8B, 0x5D, 0xE8, 0xEB, 0x23, 0x4C, 0x8B, 0x65, 0xE0, 0xEB, 0x10, 0x41, 0x0F, 0xB6, 0x14, 0x24,
            0x0F, 0xB6, 0x03, 0x38, 0xC2, 0x74, 0x1A, 0x49, 0x83, 0xC4, 0x01, 0x41, 0x0F, 0xB6, 0x04, 0x24,
            0x84, 0xC0, 0x75, 0xE7, 0x48, 0x83, 0xC3, 0x01, 0x0F, 0xB6, 0x03, 0x84, 0xC0, 0x75, 0xD6, 0xEB,
            0x01, 0x90, 0x48, 0x89, 0xD8, 0x48, 0x2B, 0x45, 0xE8, 0x5B, 0x41, 0x5C, 0x5D, 0xC3,

            /* strlen */
            0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x89, 0x7D, 0xF0, 0x48, 0x8B, 0x5D, 0xF0, 0xEB, 0x04, 0x48,
            0x83, 0xC3, 0x01, 0x0F, 0xB6, 0x03, 0x84, 0xC0, 0x75, 0xF5, 0x48, 0x89, 0xD8, 0x48, 0x2B, 0x45,
            0xF0, 0x48, 0x8B, 0x5D, 0xF8, 0xC9, 0xC3,

            /* strlcat */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0xF8, 0x48, 0x89, 0xF1, 0x48, 0x89, 0x55, 0xE8, 0x48, 0xC7,
            0x45, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x55, 0xF8, 0x48, 0x3B, 0x55, 0xE8, 0x72, 0x06,
            0x48, 0x8D, 0x45, 0xF7, 0xEB, 0x13, 0x0F, 0xB6, 0x10, 0x84, 0xD2, 0x74, 0x0B, 0x48, 0x83, 0xC0,
            0x01, 0x48, 0x83, 0x45, 0xF8, 0x01, 0xEB, 0xDE, 0x90, 0xEB, 0x17, 0x48, 0x83, 0x45, 0xF8, 0x01,
            0x48, 0x8B, 0x55, 0xF8, 0x48, 0x3B, 0x55, 0xE8, 0x73, 0x04, 0x48, 0x83, 0xC0, 0x01, 0x48, 0x83,
            0xC1, 0x01, 0x0F, 0xB6, 0x11, 0x88, 0x10, 0x0F, 0xB6, 0x10, 0x84, 0xD2, 0x75, 0xDD, 0x48, 0x8B,
            0x45, 0xF8, 0x5D, 0xC3,

            /* strlcpy */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0xF9, 0x48, 0x89, 0xF0, 0x48, 0x89, 0x55, 0xE8, 0x48, 0x89,
            0x45, 0xF8, 0x48, 0x83, 0x7D, 0xE8, 0x00, 0x75, 0x06, 0x48, 0x8D, 0x4D, 0xF7, 0xEB, 0x1B, 0x48,
            0x83, 0x6D, 0xE8, 0x01, 0xEB, 0x14, 0x48, 0x83, 0x7D, 0xE8, 0x00, 0x74, 0x09, 0x48, 0x83, 0x6D,
            0xE8, 0x01, 0x48, 0x83, 0xC1, 0x01, 0x48, 0x83, 0xC0, 0x01, 0x0F, 0xB6, 0x10, 0x88, 0x11, 0x0F,
            0xB6, 0x11, 0x84, 0xD2, 0x75, 0xE0, 0x48, 0x2B, 0x45, 0xF8, 0x5D, 0xC3,

            /* strncasecmp */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x55, 0x41, 0x54, 0x53, 0x48, 0x83, 0xEC, 0x18, 0x48, 0x89, 0xFB,
            0x49, 0x89, 0xF4, 0x48, 0x89, 0x55, 0xD0, 0xC7, 0x45, 0xE4, 0x00, 0x00, 0x00, 0x00, 0x90, 0x48,
            0x83, 0x7D, 0xD0, 0x00, 0x74, 0x4B, 0x4C, 0x39, 0xE3, 0x74, 0x2F, 0x0F, 0xB6, 0x03, 0x0F, 0xB6,
            0xC0, 0x89, 0xC7, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x41, 0x89, 0xC5, 0x41, 0x0F, 0xB6, 0x04, 0x24,
            0x0F, 0xB6, 0xC0, 0x89, 0xC7, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x89, 0xC2, 0x44, 0x89, 0xE8, 0x29,
            0xD0, 0x89, 0x45, 0xE4, 0x83, 0x7D, 0xE4, 0x00, 0x75, 0x17, 0x48, 0x83, 0x6D, 0xD0, 0x01, 0x49,
            0x83, 0xC4, 0x01, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01, 0x0F, 0xB6, 0x00, 0x84, 0xC0, 0x75,
            0xAE, 0x8B, 0x45, 0xE4, 0x48, 0x83, 0xC4, 0x18, 0x5B, 0x41, 0x5C, 0x41, 0x5D, 0x5D, 0xC3,

            /* strncat */
            0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x89, 0x7D, 0xF0, 0x48, 0x89, 0xF0, 0x48, 0x89, 0x55, 0xE8,
            0x48, 0x8B, 0x5D, 0xF0, 0x90, 0x48, 0x89, 0xDA, 0x48, 0x8D, 0x5A, 0x01, 0x0F, 0xB6, 0x12, 0x84,
            0xD2, 0x75, 0xF2, 0x48, 0x83, 0xEB, 0x01, 0xEB, 0x09, 0x48, 0x83, 0x6D, 0xE8, 0x01, 0x48, 0x83,
            0xC3, 0x01, 0x48, 0x83, 0x7D, 0xE8, 0x00, 0x74, 0x13, 0x48, 0x89, 0xC2, 0x48, 0x8D, 0x42, 0x01,
            0x0F, 0xB6, 0x12, 0x88, 0x13, 0x0F, 0xB6, 0x13, 0x84, 0xD2, 0x75, 0xDD, 0xC6, 0x03, 0x00, 0x48,
            0x8B, 0x45, 0xF0, 0x48, 0x8B, 0x5D, 0xF8, 0xC9, 0xC3,

            /* strncmp */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x89, 0xF8, 0x48, 0x89, 0xF1, 0x48, 0x89, 0x55, 0xE8, 0xC7, 0x45,
            0xFC, 0x00, 0x00, 0x00, 0x00, 0x90, 0x48, 0x8B, 0x55, 0xE8, 0x48, 0x8D, 0x72, 0xFF, 0x48, 0x89,
            0x75, 0xE8, 0x48, 0x85, 0xD2, 0x74, 0x2E, 0x0F, 0xB6, 0x10, 0x0F, 0xB6, 0xF2, 0x48, 0x89, 0xCA,
            0x48, 0x8D, 0x4A, 0x01, 0x0F, 0xB6, 0x12, 0x0F, 0xB6, 0xFA, 0x29, 0xFE, 0x89, 0xF2, 0x89, 0x55,
            0xFC, 0x83, 0x7D, 0xFC, 0x00, 0x75, 0x0E, 0x48, 0x89, 0xC2, 0x48, 0x8D, 0x42, 0x01, 0x0F, 0xB6,
            0x12, 0x84, 0xD2, 0x75, 0xC1, 0x8B, 0x45, 0xFC, 0x5D, 0xC3,

            /* strncpy */
            0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x89, 0x7D, 0xF0, 0x48, 0x89, 0xF0, 0x48, 0x89, 0x55, 0xE8,
            0x48, 0x8B, 0x5D, 0xF0, 0xEB, 0x19, 0x0F, 0xB6, 0x10, 0x88, 0x13, 0x0F, 0xB6, 0x13, 0x84, 0xD2,
            0x74, 0x04, 0x48, 0x83, 0xC0, 0x01, 0x48, 0x83, 0xC3, 0x01, 0x48, 0x83, 0x6D, 0xE8, 0x01, 0x48,
            0x83, 0x7D, 0xE8, 0x00, 0x75, 0xE0, 0x48, 0x8B, 0x45, 0xF0, 0x48, 0x8B, 0x5D, 0xF8, 0xC9, 0xC3,


            /* strnlen */
            0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x89, 0x7D, 0xF0, 0x48, 0x89, 0x75, 0xE8, 0x48, 0x8B, 0x5D,
            0xF0, 0xEB, 0x09, 0x48, 0x83, 0xC3, 0x01, 0x48, 0x83, 0x6D, 0xE8, 0x01, 0x48, 0x83, 0x7D, 0xE8,
            0x00, 0x74, 0x07, 0x0F, 0xB6, 0x03, 0x84, 0xC0, 0x75, 0xE9, 0x48, 0x89, 0xD8, 0x48, 0x2B, 0x45,
            0xF0, 0x48, 0x8B, 0x5D, 0xF8, 0xC9, 0xC3,

            /* strpbrk */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x89, 0x7D, 0xE8, 0x48, 0x89, 0x75, 0xE0, 0x48,
            0x8B, 0x5D, 0xE8, 0xEB, 0x28, 0x4C, 0x8B, 0x65, 0xE0, 0xEB, 0x15, 0x41, 0x0F, 0xB6, 0x14, 0x24,
            0x0F, 0xB6, 0x03, 0x38, 0xC2, 0x75, 0x05, 0x48, 0x89, 0xD8, 0xEB, 0x1D, 0x49, 0x83, 0xC4, 0x01,
            0x41, 0x0F, 0xB6, 0x04, 0x24, 0x84, 0xC0, 0x75, 0xE2, 0x48, 0x83, 0xC3, 0x01, 0x0F, 0xB6, 0x03,
            0x84, 0xC0, 0x75, 0xD1, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x5B, 0x41, 0x5C, 0x5D, 0xC3,

            /* strrchr */
            0x55, 0x48, 0x89, 0xE5, 0x53, 0x48, 0x89, 0xF8, 0x89, 0x75, 0xF4, 0xBB, 0x00, 0x00, 0x00, 0x00,
            0x0F, 0xB6, 0x10, 0x8B, 0x4D, 0xF4, 0x38, 0xCA, 0x75, 0x03, 0x48, 0x89, 0xC3, 0x48, 0x89, 0xC2,
            0x48, 0x8D, 0x42, 0x01, 0x0F, 0xB6, 0x12, 0x84, 0xD2, 0x75, 0xE5, 0x48, 0x89, 0xD8, 0x48, 0x8B,
            0x5D, 0xF8, 0xC9, 0xC3,

            /* strsep */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x83, 0xEC, 0x10, 0x48, 0x89, 0x7D, 0xE8, 0x48,
            0x89, 0x75, 0xE0, 0x48, 0x8B, 0x45, 0xE8, 0x4C, 0x8B, 0x20, 0xBB, 0x00, 0x00, 0x00, 0x00, 0x4D,
            0x85, 0xE4, 0x74, 0x2A, 0x41, 0x0F, 0xB6, 0x04, 0x24, 0x84, 0xC0, 0x74, 0x21, 0x48, 0x8B, 0x45,
            0xE0, 0x48, 0x89, 0xC6, 0x4C, 0x89, 0xE7, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0xC3, 0x48,
            0x85, 0xDB, 0x74, 0x0A, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01, 0xC6, 0x00, 0x00, 0x48, 0x8B,
            0x45, 0xE8, 0x48, 0x89, 0x18, 0x4C, 0x89, 0xE0, 0x48, 0x83, 0xC4, 0x10, 0x5B, 0x41, 0x5C, 0x5D,
            0xC3,

            /* strspn */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x89, 0x7D, 0xE8, 0x48, 0x89, 0x75, 0xE0, 0x4C,
            0x8B, 0x65, 0xE8, 0x48, 0x8B, 0x5D, 0xE0, 0xEB, 0x1B, 0x48, 0x89, 0xD8, 0x48, 0x8D, 0x58, 0x01,
            0x0F, 0xB6, 0x10, 0x41, 0x0F, 0xB6, 0x04, 0x24, 0x38, 0xC2, 0x75, 0x08, 0x49, 0x83, 0xC4, 0x01,
            0x48, 0x8B, 0x5D, 0xE0, 0x0F, 0xB6, 0x03, 0x84, 0xC0, 0x75, 0xDE, 0x4C, 0x89, 0xE0, 0x48, 0x2B,
            0x45, 0xE8, 0x5B, 0x41, 0x5C, 0x5D, 0xC3,

            /* strstr */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x89, 0x7D, 0xE8, 0x48, 0x89, 0x75, 0xE0, 0x48,
            0x8B, 0x5D, 0xE8, 0x4C, 0x8B, 0x65, 0xE0, 0x41, 0x0F, 0xB6, 0x04, 0x24, 0x84, 0xC0, 0x75, 0x06,
            0x48, 0x8B, 0x45, 0xE8, 0xEB, 0x33, 0x41, 0x0F, 0xB6, 0x14, 0x24, 0x0F, 0xB6, 0x03, 0x38, 0xC2,
            0x75, 0x0A, 0x49, 0x83, 0xC4, 0x01, 0x48, 0x83, 0xC3, 0x01, 0xEB, 0xDB, 0x4C, 0x8B, 0x65, 0xE0,
            0x0F, 0xB6, 0x03, 0x84, 0xC0, 0x75, 0x07, 0xB8, 0x00, 0x00, 0x00, 0x00, 0xEB, 0x0B, 0x48, 0x83,
            0x45, 0xE8, 0x01, 0x48, 0x8B, 0x5D, 0xE8, 0xEB, 0xBE, 0x5B, 0x41, 0x5C, 0x5D, 0xC3,

            /* strtok_r */
            0x55, 0x48, 0x89, 0xE5, 0x41, 0x54, 0x53, 0x48, 0x83, 0xEC, 0x18, 0x48, 0x89, 0x7D, 0xE8, 0x48,
            0x89, 0x75, 0xE0, 0x48, 0x89, 0x55, 0xD8, 0x48, 0x8B, 0x5D, 0xE8, 0x48, 0x85, 0xDB, 0x75, 0x0C,
            0x48, 0x8B, 0x45, 0xD8, 0x48, 0x8B, 0x18, 0x48, 0x85, 0xDB, 0x74, 0x4B, 0x48, 0x8B, 0x45, 0xE0,
            0x48, 0x89, 0xC6, 0x48, 0x89, 0xDF, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x01, 0xC3, 0x0F, 0xB6,
            0x03, 0x84, 0xC0, 0x74, 0x23, 0x48, 0x8B, 0x45, 0xE0, 0x48, 0x89, 0xC6, 0x48, 0x89, 0xDF, 0xE8,
            0x00, 0x00, 0x00, 0x00, 0x49, 0x89, 0xC4, 0x4D, 0x85, 0xE4, 0x74, 0x14, 0x4C, 0x89, 0xE0, 0x4C,
            0x8D, 0x60, 0x01, 0xC6, 0x00, 0x00, 0xEB, 0x08, 0xBB, 0x00, 0x00, 0x00, 0x00, 0x49, 0x89, 0xDC,
            0x48, 0x8B, 0x45, 0xD8, 0x4C, 0x89, 0x20, 0x48, 0x89, 0xD8, 0x48, 0x83, 0xC4, 0x18, 0x5B, 0x41,
            0x5C, 0x5D, 0xC3,

            /* strtok */
            0x55, 0x48, 0x89, 0xE5, 0x48, 0x83, 0xEC, 0x10, 0x48, 0x89, 0x7D, 0xF8, 0x48, 0x89, 0x75, 0xF0,
            0x48, 0x8B, 0x4D, 0xF0, 0x48, 0x8B, 0x45, 0xF8, 0x48, 0x8D, 0x15, 0x00, 0x00, 0x00, 0x00, 0x48,
            0x89, 0xCE, 0x48, 0x89, 0xC7, 0xE8, 0x00, 0x00, 0x00, 0x00, 0xC9, 0xC3,

            /* .data */
            0x00,

            /* .bss */
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
          };

        }; /* libc namespace */
      }; /* systemv namespace */
    }; /* x8664 namespace */
  }; /* stubs namespace */
}; /* triton namespace */
