#pragma line 1 "ap_bmp.cpp"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "C:/Xilinx/Vivado_HLS/2012.4/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
 * Copyright (C) 2011 XILINX, Inc. 
 *
 * $Id$
 */
#pragma line 98 "C:/Xilinx/Vivado_HLS/2012.4/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C" {
    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations
    void _ssdm_op_FifoRead(...) __attribute__ ((nothrow));
    void _ssdm_op_FifoWrite(...) __attribute__ ((nothrow));
#pragma empty_line
    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    typedef bool _uint1_;
    _uint1_ _ssdm_op_FifoNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_FifoNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_FifoCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_FifoCanWrite(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));
#pragma empty_line
    // Stream Intrinsics
    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    //_uint1_  _ssdm_StreamCanRead(...) SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamCanWrite(...) SSDM_OP_ATTR;
#pragma empty_line
    // Misc
    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Return(...) __attribute__ ((nothrow));
#pragma empty_line
    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecBus(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFifo(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecWire(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecBuff(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMem(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess(...) SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge(...) SSDM_SPEC_ATTR; */
#pragma empty_line
    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecStream(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));
}
#pragma line 367 "C:/Xilinx/Vivado_HLS/2012.4/common/technology/autopilot/etc/autopilot_ssdm_op.h"
/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
#pragma line 1 "<command-line>" 2
#pragma line 1 "ap_bmp.cpp"
/*****************************************************************************
#pragma empty_line
 *
#pragma empty_line
 *     Author: Xilinx, Inc.
#pragma empty_line
 *
#pragma empty_line
 *     This text contains proprietary, confidential information of
#pragma empty_line
 *     Xilinx, Inc. , is distributed by under license from Xilinx,
#pragma empty_line
 *     Inc., and may be used, copied and/or disclosed only pursuant to
#pragma empty_line
 *     the terms of a valid license agreement with Xilinx, Inc.
#pragma empty_line
 *
#pragma empty_line
 *     XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS"
#pragma empty_line
 *     AS A COURTESY TO YOU, SOLELY FOR USE IN DEVELOPING PROGRAMS AND
#pragma empty_line
 *     SOLUTIONS FOR XILINX DEVICES.  BY PROVIDING THIS DESIGN, CODE,
#pragma empty_line
 *     OR INFORMATION AS ONE POSSIBLE IMPLEMENTATION OF THIS FEATURE,
#pragma empty_line
 *     APPLICATION OR STANDARD, XILINX IS MAKING NO REPRESENTATION
#pragma empty_line
 *     THAT THIS IMPLEMENTATION IS FREE FROM ANY CLAIMS OF INFRINGEMENT,
#pragma empty_line
 *     AND YOU ARE RESPONSIBLE FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE
#pragma empty_line
 *     FOR YOUR IMPLEMENTATION.  XILINX EXPRESSLY DISCLAIMS ANY
#pragma empty_line
 *     WARRANTY WHATSOEVER WITH RESPECT TO THE ADEQUACY OF THE
#pragma empty_line
 *     IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OR
#pragma empty_line
 *     REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE FROM CLAIMS OF
#pragma empty_line
 *     INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
#pragma empty_line
 *     FOR A PARTICULAR PURPOSE.
#pragma empty_line
 *
#pragma empty_line
 *     Xilinx products are not intended for use in life support appliances,
#pragma empty_line
 *     devices, or systems. Use in such applications is expressly prohibited.
#pragma empty_line
 *
#pragma empty_line
 *     (c) Copyright 2011 Xilinx Inc.
#pragma empty_line
 *     All rights reserved.
#pragma empty_line
 *
#pragma empty_line
 *****************************************************************************/
#pragma line 32 "ap_bmp.cpp"
/*
#pragma empty_line
 * This file contains the implementation of a simple
#pragma empty_line
 * BMP file reader/writer. 
#pragma empty_line
 */
#pragma line 37 "ap_bmp.cpp"
#pragma line 1 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 1 3
/*
 * stdio.h
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is a part of the mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within the package.
 *
 * Definitions of types and prototypes of functions for standard input and
 * output.
 *
 * NOTE: The file manipulation functions provided by Microsoft seem to
 * work with either slash (/) or backslash (\) as the directory separator.
 *
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* All the headers include this file. */
#pragma line 1 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/_mingw.h" 1 3
#pragma empty_line
/*
 * _mingw.h
 *
 * Mingw specific macros included by ALL include files.
 *
 * This file is part of the Mingw32 package.
 *
 * Contributors:
 *  Created by Mumit Khan  <khan@xraylith.wisc.edu>
 *
 *  THIS SOFTWARE IS NOT COPYRIGHTED
 *
 *  This source code is offered for use in the public domain. You may
 *  use, modify or distribute it freely.
 *
 *  This code is distributed in the hope that it will be useful but
 *  WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 *  DISCLAIMED. This includes but is not limited to warranties of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */
#pragma line 31 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/_mingw.h" 3
#pragma empty_line
#pragma line 32 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/_mingw.h" 3
#pragma empty_line
#pragma empty_line
/* These are defined by the user (or the compiler)
   to specify how identifiers are imported from a DLL.
#pragma empty_line
   __DECLSPEC_SUPPORTED            Defined if dllimport attribute is supported.
   __MINGW_IMPORT                  The attribute definition to specify imported
                                   variables/functions.
   _CRTIMP                         As above.  For MS compatibility.
   __MINGW32_VERSION               Runtime version.
   __MINGW32_MAJOR_VERSION         Runtime major version.
   __MINGW32_MINOR_VERSION         Runtime minor version.
   __MINGW32_BUILD_DATE            Runtime build date.
#pragma empty_line
   Macros to enable MinGW features which deviate from standard MSVC
   compatible behaviour; these may be specified directly in user code,
   activated implicitly, (e.g. by specifying _POSIX_C_SOURCE or such),
   or by inclusion in __MINGW_FEATURES__:
#pragma empty_line
   __USE_MINGW_ANSI_STDIO          Select a more ANSI C99 compatible
                                   implementation of printf() and friends.
#pragma empty_line
   Other macros:
#pragma empty_line
   __int64                         define to be long long.  Using a typedef
                                   doesn't work for "unsigned __int64"
#pragma empty_line
   All headers should include this first, and then use __DECLSPEC_SUPPORTED
   to choose between the old ``__imp__name'' style or __MINGW_IMPORT
   style declarations.  */
#pragma empty_line
#pragma empty_line
/* Manifest definitions identifying the flag bits, controlling activation
 * of MinGW features, as specified by the user in __MINGW_FEATURES__.
 */
#pragma empty_line
/*
 * The following three are not yet formally supported; they are
 * included here, to document anticipated future usage.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Try to avoid problems with outdated checks for GCC __attribute__ support.  */
#pragma line 121 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/_mingw.h" 3
   /* Note the extern. This is needed to work around GCC's
      limitations in handling dllimport attribute.  */
#pragma line 140 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/_mingw.h" 3
/*
 * The next two defines can cause problems if user code adds the
 * __cdecl attribute like so:
 * void __attribute__ ((__cdecl)) foo(void); 
 */
#pragma line 230 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/_mingw.h" 3
/* Attribute `nonnull' was valid as of gcc 3.3.  We don't use GCC's
   variadiac macro facility, because variadic macros cause syntax
   errors with  --traditional-cpp.  */
#pragma line 252 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/_mingw.h" 3
/* TODO: Mark (almost) all CRT functions as __MINGW_NOTHROW.  This will
allow GCC to optimize away some EH unwind code, at least in DW2 case.  */
#pragma empty_line
#pragma empty_line
/*  High byte is the major version, low byte is the minor. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Activation of MinGW specific extended features:
 */
#pragma empty_line
/*
 * If user didn't specify it explicitly...
 */
#pragma line 277 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/_mingw.h" 3
   /*
    * otherwise use whatever __MINGW_FEATURES__ specifies...
    */
#pragma line 20 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 1 3 4
/* Copyright (C) 1989, 1997, 1998, 1999, 2000, 2002, 2004
   Free Software Foundation, Inc.
#pragma empty_line
This file is part of GCC.
#pragma empty_line
GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.
#pragma empty_line
GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
#pragma empty_line
You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to
the Free Software Foundation, 51 Franklin Street, Fifth Floor,
Boston, MA 02110-1301, USA.  */
#pragma empty_line
/* As a special exception, if you include this header file into source
   files compiled by GCC, this header file does not by itself cause
   the resulting executable to be covered by the GNU General Public
   License.  This exception does not however invalidate any other
   reasons why the executable file might be covered by the GNU General
   Public License.  */
#pragma empty_line
/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
#pragma line 52 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
#pragma empty_line
/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* On FreeBSD 5, machine/ansi.h does not exist anymore... */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
#pragma line 97 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
#pragma line 122 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */
#pragma empty_line
/* Signed type of difference of two pointers.  */
#pragma empty_line
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
#pragma line 167 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */
#pragma empty_line
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
#pragma line 214 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
typedef unsigned int size_t;
#pragma line 240 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */
#pragma empty_line
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
#pragma line 281 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
#pragma line 308 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
#pragma line 355 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
typedef short unsigned int wint_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
#pragma line 395 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* A null pointer constant.  */
#pragma line 27 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 2 3
#pragma empty_line
#pragma line 1 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stdarg.h" 1 3 4
/* Copyright (C) 1989, 1997, 1998, 1999, 2000 Free Software Foundation, Inc.
#pragma empty_line
This file is part of GCC.
#pragma empty_line
GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.
#pragma empty_line
GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
#pragma empty_line
You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to
the Free Software Foundation, 51 Franklin Street, Fifth Floor,
Boston, MA 02110-1301, USA.  */
#pragma empty_line
/* As a special exception, if you include this header file into source
   files compiled by GCC, this header file does not by itself cause
   the resulting executable to be covered by the GNU General Public
   License.  This exception does not however invalidate any other
   reasons why the executable file might be covered by the GNU General
   Public License.  */
#pragma empty_line
/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
#pragma line 39 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stdarg.h" 3 4
/* Define __gnuc_va_list.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __builtin_va_list __gnuc_va_list;
#pragma empty_line
#pragma empty_line
/* Define the standard macros for the user,
   if this invocation was from the user program.  */
#pragma line 29 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Flags for the iobuf structure  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * The three standard file pointers provided by the run time library.
 * NOTE: These will go to the bit-bucket silently in GUI applications!
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Returned by various functions on end of file condition or error. */
#pragma empty_line
#pragma empty_line
/*
 * The maximum length of a file name. You should use GetVolumeInformation
 * instead of this constant. But hey, this works.
 * Also defined in io.h.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * The maximum number of files that may be open at once. I have set this to
 * a conservative number. The actual value may be higher.
 */
#pragma empty_line
#pragma empty_line
/* After creating this many names, tmpnam and tmpfile return NULL */
#pragma empty_line
/*
 * Tmpnam, tmpfile and, sometimes, _tempnam try to create
 * temp files in the root directory of the current drive
 * (not in pwd, as suggested by some older MS doc's).
 * Redefining these macros does not effect the CRT functions.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * The maximum size of name (including NUL) that will be put in the user
 * supplied buffer caName for tmpnam.
 * Inferred from the size of the static buffer returned by tmpnam
 * when passed a NULL argument. May actually be smaller.
 */
#pragma line 97 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 3
/*
 * The buffer size as used by setbuf such that it is equivalent to
 * (void) setvbuf(fileSetBuffer, caBuffer, _IOFBF, BUFSIZ).
 */
#pragma empty_line
#pragma empty_line
/* Constants for nOrigin indicating the position relative to which fseek
 * sets the file position.  Defined unconditionally since ISO and POSIX
 * say they are defined here.  */
#pragma line 120 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 3
/*
 * The structure underlying the FILE type.
 *
 * Some believe that nobody in their right mind should make use of the
 * internals of this structure. Provided by Pedro A. Aranda Gutiirrez
 * <paag@tid.es>.
 */
#pragma empty_line
#pragma empty_line
typedef struct _iobuf
{
 char* _ptr;
 int _cnt;
 char* _base;
 int _flag;
 int _file;
 int _charbuf;
 int _bufsiz;
 char* _tmpfname;
} FILE;
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * The standard file handles
 */
#pragma line 154 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 3
extern __attribute__ ((__dllimport__)) FILE _iob[]; /* An array of FILE imported from DLL. */
#pragma line 163 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 3
extern "C" {
#pragma empty_line
#pragma empty_line
/*
 * File Operations
 */
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fopen (const char*, const char*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) freopen (const char*, const char*, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fflush (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fclose (FILE*);
/* MS puts remove & rename (but not wide versions) in io.h  also */
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) remove (const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rename (const char*, const char*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tmpfile (void);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tmpnam (char*);
#pragma empty_line
#pragma empty_line
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _tempnam (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _rmtmp(void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _unlink (const char*);
#pragma empty_line
#pragma empty_line
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) tempnam (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rmtmp(void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) unlink (const char*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) setvbuf (FILE*, char*, int, size_t);
#pragma empty_line
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) setbuf (FILE*, char*);
#pragma empty_line
/*
 * Formatted Output
 *
 * MSVCRT implementations are not ANSI C99 conformant...
 * we offer these conforming alternatives from libmingwex.a
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_fprintf(FILE*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_printf(const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_sprintf(char*, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_snprintf(char*, size_t, const char*, ...);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vfprintf(FILE*, const char*, __gnuc_va_list);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vprintf(const char*, __gnuc_va_list);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vsprintf(char*, const char*, __gnuc_va_list);
extern int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __mingw_vsnprintf(char*, size_t, const char*, __gnuc_va_list);
#pragma line 290 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 3
/*
 * Default configuration: simply direct all calls to MSVCRT...
 */
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fprintf (FILE*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) printf (const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) sprintf (char*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfprintf (FILE*, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vprintf (const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsprintf (char*, const char*, __gnuc_va_list);
#pragma empty_line
#pragma empty_line
/*
 * Regardless of user preference, always offer these alternative
 * entry points, for direct access to the MSVCRT implementations.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_fprintf(FILE*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_printf(const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_sprintf(char*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_vfprintf(FILE*, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_vprintf(const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __msvcrt_vsprintf(char*, const char*, __gnuc_va_list);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The following pair ALWAYS refer to the MSVCRT implementations...
 */
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _snprintf (char*, size_t, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vsnprintf (char*, size_t, const char*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vscprintf (const char*, __gnuc_va_list);
#pragma empty_line
#pragma empty_line
/*
 * Microsoft does not provide implementations for the following,
 * which are required by C99.  Note in particular that the corresponding
 * Microsoft implementations of _snprintf() and _vsnprintf() are *not*
 * compatible with C99, but the following are; if you want the MSVCRT
 * behaviour, you *must* use the Microsoft uglified names.
 */
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) snprintf (char *, size_t, const char *, ...);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsnprintf (char *, size_t, const char *, __gnuc_va_list);
#pragma empty_line
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vscanf (const char * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfscanf (FILE * __restrict__, const char * __restrict__,
       __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsscanf (const char * __restrict__,
       const char * __restrict__, __gnuc_va_list);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * Formatted Input
 */
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fscanf (FILE*, const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) scanf (const char*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) sscanf (const char*, const char*, ...);
/*
 * Character Input and Output Functions
 */
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetc (FILE*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgets (char*, int, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputc (int, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputs (const char*, FILE*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) gets (char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) puts (const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ungetc (int, FILE*);
#pragma empty_line
/* Traditionally, getc and putc are defined as macros. but the
   standard doesn't say that they must be macros.
   We use inline functions here to allow the fast versions
   to be used in C++ with namespace qualification, eg., ::getc.
#pragma empty_line
   _filbuf and _flsbuf  are not thread-safe. */
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _filbuf (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _flsbuf (int, FILE*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getc (FILE* __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) *__F->_ptr++
    : _filbuf (__F);
}
#pragma empty_line
inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putc (int __c, FILE* __F)
{
  return (--__F->_cnt >= 0)
    ? (int) (unsigned char) (*__F->_ptr++ = (char)__c)
    : _flsbuf (__c, __F);
}
#pragma empty_line
inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getchar (void)
{
  return (--(&_iob[0])->_cnt >= 0)
    ? (int) (unsigned char) *(&_iob[0])->_ptr++
    : _filbuf ((&_iob[0]));
}
#pragma empty_line
inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putchar(int __c)
{
  return (--(&_iob[1])->_cnt >= 0)
    ? (int) (unsigned char) (*(&_iob[1])->_ptr++ = (char)__c)
    : _flsbuf (__c, (&_iob[1]));}
#pragma line 408 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 3
/*
 * Direct Input and Output Functions
 */
#pragma empty_line
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fread (void*, size_t, size_t, FILE*);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwrite (const void*, size_t, size_t, FILE*);
#pragma empty_line
/*
 * File Positioning Functions
 */
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fseek (FILE*, long, int);
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ftell (FILE*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rewind (FILE*);
#pragma line 445 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 3
/*
 * An opaque data type used for storing file positions... The contents of
 * this type are unknown, but we (the compiler) need to know the size
 * because the programmer using fgetpos and fsetpos will be setting aside
 * storage for fpos_t structres. Actually I tested using a byte array and
 * it is fairly evident that the fpos_t type is a long (in CRTDLL.DLL).
 * Perhaps an unsigned long? TODO? It's definitely a 64-bit number in
 * MSVCRT however, and for now `long long' will do.
 */
#pragma empty_line
typedef long long fpos_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetpos (FILE*, fpos_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fsetpos (FILE*, const fpos_t*);
#pragma empty_line
/*
 * Error Functions
 */
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) feof (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ferror (FILE*);
#pragma empty_line
#pragma empty_line
inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) feof (FILE* __F)
  { return __F->_flag & 0x0010 /* EOF reached on read */; }
inline int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ferror (FILE* __F)
  { return __F->_flag & 0x0020 /* I/O error from system */; }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) clearerr (FILE*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) perror (const char*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * Pipes
 */
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _popen (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _pclose (FILE*);
#pragma empty_line
#pragma empty_line
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) popen (const char*, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) pclose (FILE*);
#pragma empty_line
#pragma empty_line
/*
 * Other Non ANSI functions
 */
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _flushall (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fgetchar (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fputchar (int);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fdopen (int, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fileno (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fcloseall (void);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fsopen (const char*, const char*, int);
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _getmaxstdio (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _setmaxstdio (int);
#pragma line 522 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetchar (void);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputchar (int);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fdopen (int, const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fileno (FILE*);
#pragma line 534 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 3
#pragma line 1 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/sys/types.h" 1 3
/*
 * types.h
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is a part of the mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within the package.
 *
 * The definition of constants, data types and global variables.
 *
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* All the headers include this file. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 1 3 4
/* Copyright (C) 1989, 1997, 1998, 1999, 2000, 2002, 2004
   Free Software Foundation, Inc.
#pragma empty_line
This file is part of GCC.
#pragma empty_line
GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.
#pragma empty_line
GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
#pragma empty_line
You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to
the Free Software Foundation, 51 Franklin Street, Fifth Floor,
Boston, MA 02110-1301, USA.  */
#pragma empty_line
/* As a special exception, if you include this header file into source
   files compiled by GCC, this header file does not by itself cause
   the resulting executable to be covered by the GNU General Public
   License.  This exception does not however invalidate any other
   reasons why the executable file might be covered by the GNU General
   Public License.  */
#pragma empty_line
/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
#pragma line 52 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
#pragma empty_line
/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* On FreeBSD 5, machine/ansi.h does not exist anymore... */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
#pragma line 97 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
#pragma line 122 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */
#pragma empty_line
/* Signed type of difference of two pointers.  */
#pragma empty_line
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
#pragma line 152 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
#pragma line 162 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Unsigned type of `sizeof' something.  */
#pragma empty_line
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
#pragma line 240 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */
#pragma empty_line
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
#pragma line 360 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
#pragma line 395 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* A null pointer constant.  */
#pragma line 22 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/sys/types.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long __time32_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long long __time64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* FIXME __STRICT_ANSI__ ! */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __time32_t time_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long _off_t;
#pragma empty_line
#pragma empty_line
typedef _off_t off_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned int _dev_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef _dev_t dev_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef short _ino_t;
#pragma empty_line
#pragma empty_line
typedef _ino_t ino_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int _pid_t;
#pragma empty_line
#pragma empty_line
typedef _pid_t pid_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned short _mode_t;
#pragma empty_line
#pragma empty_line
typedef _mode_t mode_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef int _sigset_t;
#pragma empty_line
#pragma empty_line
typedef _sigset_t sigset_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long _ssize_t;
#pragma empty_line
#pragma empty_line
typedef _ssize_t ssize_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long long fpos64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long long off64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned int useconds_t;
#pragma line 535 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 2 3
inline FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fopen64 (const char* filename, const char* mode)
{
  return fopen (filename, mode);
}
#pragma empty_line
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fseeko64 (FILE*, off64_t, int);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
inline off64_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ftello64 (FILE * stream)
{
  fpos_t pos;
  if (fgetpos(stream, &pos))
    return -1LL;
  else
   return ((off64_t) pos);
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Wide  versions */
#pragma empty_line
#pragma empty_line
/*  also in wchar.h - keep in sync */
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwprintf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wprintf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _snwprintf (wchar_t*, size_t, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfwprintf (FILE*, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vwprintf (const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vsnwprintf (wchar_t*, size_t, const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _vscwprintf (const wchar_t*, __gnuc_va_list);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fwscanf (FILE*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wscanf (const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) swscanf (const wchar_t*, const wchar_t*, ...);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetwc (FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputwc (wchar_t, FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ungetwc (wchar_t, FILE*);
#pragma empty_line
/* These differ from the ISO C prototypes, which have a maxlen parameter (like snprintf).  */
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) swprintf (wchar_t*, const wchar_t*, ...);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vswprintf (wchar_t*, const wchar_t*, __gnuc_va_list);
#pragma empty_line
#pragma empty_line
#pragma empty_line
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetws (wchar_t*, int, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputws (const wchar_t*, FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getwc (FILE*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getwchar (void);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _getws (wchar_t*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putwc (wint_t, FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _putws (const wchar_t*);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putwchar (wint_t);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfdopen(int, const wchar_t *);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfopen (const wchar_t*, const wchar_t*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfreopen (const wchar_t*, const wchar_t*, FILE*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfsopen (const wchar_t*, const wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtmpnam (wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtempnam (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wrename (const wchar_t*, const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wremove (const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wperror (const wchar_t*);
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wpopen (const wchar_t*, const wchar_t*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) snwprintf (wchar_t* s, size_t n, const wchar_t* format, ...);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vsnwprintf (wchar_t* s, size_t n, const wchar_t* format, __gnuc_va_list arg);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vwscanf (const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vfwscanf (FILE * __restrict__,
         const wchar_t * __restrict__, __gnuc_va_list);
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) vswscanf (const wchar_t * __restrict__,
         const wchar_t * __restrict__, __gnuc_va_list);
#pragma line 625 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdio.h" 3
 FILE* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wpopen (const wchar_t*, const wchar_t*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * Other Non ANSI wide functions
 */
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fgetwchar (void);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fputwchar (wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _getw (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _putw (int, FILE*);
#pragma empty_line
#pragma empty_line
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fgetwchar (void);
 wint_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fputwchar (wint_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getw (FILE*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putw (int, FILE*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma line 38 "ap_bmp.cpp" 2
#pragma line 1 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 1 3
/*
 * stdlib.h
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is a part of the mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within the package.
 *
 * Definitions for common types, variables, and functions.
 *
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* All the headers include this file. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 1 3 4
/* Copyright (C) 1989, 1997, 1998, 1999, 2000, 2002, 2004
   Free Software Foundation, Inc.
#pragma empty_line
This file is part of GCC.
#pragma empty_line
GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.
#pragma empty_line
GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
#pragma empty_line
You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to
the Free Software Foundation, 51 Franklin Street, Fifth Floor,
Boston, MA 02110-1301, USA.  */
#pragma empty_line
/* As a special exception, if you include this header file into source
   files compiled by GCC, this header file does not by itself cause
   the resulting executable to be covered by the GNU General Public
   License.  This exception does not however invalidate any other
   reasons why the executable file might be covered by the GNU General
   Public License.  */
#pragma empty_line
/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
#pragma line 52 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
#pragma empty_line
/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* On FreeBSD 5, machine/ansi.h does not exist anymore... */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
#pragma line 97 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
#pragma line 122 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */
#pragma empty_line
/* Signed type of difference of two pointers.  */
#pragma empty_line
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
#pragma line 167 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */
#pragma empty_line
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
#pragma line 240 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */
#pragma empty_line
/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
#pragma line 360 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
#pragma line 395 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/include/stddef.h" 3 4
/* A null pointer constant.  */
#pragma line 22 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 2 3
#pragma empty_line
#pragma empty_line
/*
 * RAND_MAX is the maximum value that may be returned by rand.
 * The minimum is zero.
 */
#pragma empty_line
#pragma empty_line
/*
 * These values may be used as exit status codes.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * Definitions for path name functions.
 * NOTE: All of these values have simply been chosen to be conservatively high.
 *       Remember that with long file names we can no longer depend on
 *       extensions being short.
 */
#pragma line 60 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
extern "C" {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * This seems like a convenient place to declare these variables, which
 * give programs using WinMain (or main for that matter) access to main-ish
 * argc and argv. environ is a pointer to a table of environment variables.
 * NOTE: Strings in _argv and environ are ANSI strings.
 */
extern int _argc;
extern char** _argv;
#pragma empty_line
/* imports from runtime dll of the above variables */
#pragma empty_line
#pragma empty_line
extern int* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p___argc(void);
extern char*** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p___argv(void);
extern wchar_t*** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p___wargv(void);
#pragma line 105 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
/*
 * Also defined in ctype.h.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
   extern __attribute__ ((__dllimport__)) int __mb_cur_max;
#pragma line 129 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
/* 
 * MS likes to declare errno in stdlib.h as well. 
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 int* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _errno(void);
#pragma empty_line
#pragma empty_line
 int* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __doserrno(void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * Use environ from the DLL, not as a global. 
 */
#pragma empty_line
#pragma empty_line
  extern char *** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__environ(void);
  extern wchar_t *** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__wenviron(void);
#pragma line 166 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
/* One of the MSVCRTxx libraries */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern __attribute__ ((__dllimport__)) int _sys_nerr;
#pragma line 196 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
extern __attribute__ ((__dllimport__)) char* _sys_errlist[];
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * OS version and such constants.
 */
#pragma empty_line
#pragma empty_line
/* msvcrtxx.dll */
#pragma empty_line
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__osver(void);
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__winver(void);
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__winmajor(void);
extern unsigned __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) int* __p__winminor(void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern __attribute__ ((__dllimport__)) unsigned int _osver;
extern __attribute__ ((__dllimport__)) unsigned int _winver;
extern __attribute__ ((__dllimport__)) unsigned int _winmajor;
extern __attribute__ ((__dllimport__)) unsigned int _winminor;
#pragma line 258 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
/* although the _pgmptr is exported as DATA,
 * be safe and use the access function __p__pgmptr() to get it. */
 char** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__pgmptr(void);
#pragma empty_line
 wchar_t** __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __p__wpgmptr(void);
#pragma line 275 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
/*
 * This variable determines the default file mode.
 * TODO: Which flags work?
 */
#pragma line 293 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
extern __attribute__ ((__dllimport__)) int _fmode;
#pragma line 303 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
 double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atof (const char*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atoi (const char*);
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atol (const char*);
#pragma empty_line
 double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtof (const wchar_t *);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtoi (const wchar_t *);
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtol (const wchar_t *);
#pragma empty_line
#pragma empty_line
double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __strtod (const char*, char**);
#pragma empty_line
/* We require a function with external linkage. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
__inline__ double __attribute__((__cdecl__)) __attribute__ ((__nothrow__))
strtod (const char* __restrict__ __nptr, char** __restrict__ __endptr)
{
  return __strtod(__nptr, __endptr);
}
float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtof (const char * __restrict__, char ** __restrict__);
long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtold (const char * __restrict__, char ** __restrict__);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtol (const char*, char**, int);
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtoul (const char*, char**, int);
#pragma empty_line
#pragma empty_line
/*  also declared in wchar.h */
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstol (const wchar_t*, wchar_t**, int);
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstoul (const wchar_t*, wchar_t**, int);
 double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstod (const wchar_t*, wchar_t**);
#pragma empty_line
float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstof( const wchar_t * __restrict__, wchar_t ** __restrict__);
long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);
#pragma empty_line
#pragma empty_line
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wgetenv(const wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wputenv(const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsearchenv(const wchar_t*, const wchar_t*, wchar_t*);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsystem(const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wmakepath(wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wsplitpath (const wchar_t*, wchar_t*, wchar_t*, wchar_t*, wchar_t*);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wfullpath (wchar_t*, const wchar_t*, size_t);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wcstombs (char*, const wchar_t*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wctomb (char*, wchar_t);
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mblen (const char*, size_t);
 size_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mbstowcs (wchar_t*, const char*, size_t);
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mbtowc (wchar_t*, const char*, size_t);
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) rand (void);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) srand (unsigned int);
#pragma empty_line
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) calloc (size_t, size_t) __attribute__ ((__malloc__));
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) malloc (size_t) __attribute__ ((__malloc__));
 void* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) realloc (void*, size_t);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) free (void*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) abort (void) __attribute__ ((__noreturn__));
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) exit (int) __attribute__ ((__noreturn__));
#pragma empty_line
/* Note: This is in startup code, not imported directly from dll */
int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atexit (void (*)(void));
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) system (const char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) getenv (const char*);
#pragma empty_line
/* bsearch and qsort are also in non-ANSI header search.h  */
 void* __attribute__((__cdecl__)) bsearch (const void*, const void*, size_t, size_t,
          int (*)(const void*, const void*));
 void __attribute__((__cdecl__)) qsort(void*, size_t, size_t,
      int (*)(const void*, const void*));
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) abs (int) __attribute__ ((__const__));
 long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) labs (long) __attribute__ ((__const__));
#pragma empty_line
/*
 * div_t and ldiv_t are structures used to return the results of div and
 * ldiv.
 *
 * NOTE: div and ldiv appear not to work correctly unless
 *       -fno-pcc-struct-return is specified. This is included in the
 *       mingw32 specs file.
 */
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;
#pragma empty_line
 div_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) div (int, int) __attribute__ ((__const__));
 ldiv_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ldiv (long, long) __attribute__ ((__const__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * NOTE: Officially the three following functions are obsolete. The Win32 API
 *       functions SetErrorMode, Beep and Sleep are their replacements.
 */
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _beep (unsigned int, unsigned int) __attribute__ ((__deprecated__));
/* Not to be confused with  _set_error_mode (int).  */
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _seterrormode (int) __attribute__ ((__deprecated__));
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _sleep (unsigned long) __attribute__ ((__deprecated__));
#pragma empty_line
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _exit (int) __attribute__ ((__noreturn__));
#pragma empty_line
/* _onexit is MS extension. Use atexit for portability.  */
/* Note: This is in startup code, not imported directly from dll */
typedef int (* _onexit_t)(void);
_onexit_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _onexit( _onexit_t );
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _putenv (const char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _searchenv (const char*, const char*, char*);
#pragma empty_line
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ecvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fcvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _gcvt (double, int, char*);
#pragma empty_line
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _makepath (char*, const char*, const char*, const char*, const char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _splitpath (const char*, char*, char*, char*, char*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fullpath (char*, const char*, size_t);
#pragma empty_line
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _itoa (int, char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ltoa (long, char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ultoa(unsigned long, char*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _itow (int, wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ltow (long, wchar_t*, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ultow (unsigned long, wchar_t*, int);
#pragma empty_line
#pragma empty_line
 long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _atoi64(const char *);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _i64toa(long long, char *, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ui64toa(unsigned long long, char *, int);
 long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _wtoi64(const wchar_t *);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _i64tow(long long, wchar_t *, int);
 wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _ui64tow(unsigned long long, wchar_t *, int);
#pragma empty_line
 unsigned int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _rotl(unsigned int, int) __attribute__ ((__const__));
 unsigned int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _rotr(unsigned int, int) __attribute__ ((__const__));
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _lrotl(unsigned long, int) __attribute__ ((__const__));
 unsigned long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _lrotr(unsigned long, int) __attribute__ ((__const__));
#pragma empty_line
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _set_error_mode (int);
#pragma line 485 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
 int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) putenv (const char*);
 void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) searchenv (const char*, const char*, char*);
#pragma empty_line
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) itoa (int, char*, int);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ltoa (long, char*, int);
#pragma empty_line
#pragma empty_line
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ecvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fcvt (double, int, int*, int*);
 char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) gcvt (double, int, char*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* C99 names */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* C99 name for _exit */
void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _Exit(int) __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct { long long quot, rem; } lldiv_t;
#pragma empty_line
lldiv_t __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) lldiv (long long, long long) __attribute__ ((__const__));
#pragma empty_line
long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) llabs(long long);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtoll (const char* __restrict__, char** __restrict, int);
unsigned long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtoull (const char* __restrict__, char** __restrict__, int);
#pragma empty_line
#pragma empty_line
long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) atoll (const char *);
#pragma empty_line
#pragma empty_line
long long __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) wtoll (const wchar_t *);
char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) lltoa (long long, char *, int);
char* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ulltoa (unsigned long long , char *, int);
wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) lltow (long long, wchar_t *, int);
wchar_t* __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) ulltow (unsigned long long, wchar_t *, int);
#pragma empty_line
  /* inline using non-ansi functions */
#pragma line 557 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/stdlib.h" 3
}
#pragma line 39 "ap_bmp.cpp" 2
extern "C" {
#pragma line 1 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 1 3
/* 
 * math.h
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is a part of the mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within the package.
 *
 * Mathematical functions.
 *
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 17 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
#pragma empty_line
#pragma empty_line
/* All the headers include this file. */
#pragma empty_line
#pragma empty_line
/*
 * Types for the _exception structure.
 */
#pragma line 33 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/*
 * Exception types with non-ANSI names for compatibility.
 */
#pragma line 51 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* Traditional/XOPEN math constants (double precison) */
#pragma line 68 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* These are also defined in Mingw float.h; needed here as well to work 
   around GCC build issues.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* IEEE 754 classication */
#pragma line 90 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
extern "C" {
#pragma empty_line
#pragma empty_line
/*
 * HUGE_VAL is returned by strtod when the value would overflow the
 * representation of 'double'. There are other uses as well.
 *
 * __imp__HUGE is a pointer to the actual variable _HUGE in
 * MSVCRT.DLL. If we used _HUGE directly we would get a pointer
 * to a thunk function.
 *
 * NOTE: The CRTDLL version uses _HUGE_dll instead.
 */
#pragma line 134 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
struct _exception
{
 int type;
 char *name;
 double arg1;
 double arg2;
 double retval;
};
#pragma empty_line
 double __attribute__((__cdecl__)) sin (double);
 double __attribute__((__cdecl__)) cos (double);
 double __attribute__((__cdecl__)) tan (double);
 double __attribute__((__cdecl__)) sinh (double);
 double __attribute__((__cdecl__)) cosh (double);
 double __attribute__((__cdecl__)) tanh (double);
 double __attribute__((__cdecl__)) asin (double);
 double __attribute__((__cdecl__)) acos (double);
 double __attribute__((__cdecl__)) atan (double);
 double __attribute__((__cdecl__)) atan2 (double, double);
 double __attribute__((__cdecl__)) exp (double);
 double __attribute__((__cdecl__)) log (double);
 double __attribute__((__cdecl__)) log10 (double);
 double __attribute__((__cdecl__)) pow (double, double);
 double __attribute__((__cdecl__)) sqrt (double);
 double __attribute__((__cdecl__)) ceil (double);
 double __attribute__((__cdecl__)) floor (double);
 double __attribute__((__cdecl__)) fabs (double);
 double __attribute__((__cdecl__)) ldexp (double, int);
 double __attribute__((__cdecl__)) frexp (double, int*);
 double __attribute__((__cdecl__)) modf (double, double*);
 double __attribute__((__cdecl__)) fmod (double, double);
#pragma empty_line
/* Excess precision when using a 64-bit mantissa for FPU math ops can
   cause unexpected results with some of the MSVCRT math functions.  For
   example, unless the function return value is stored (truncating to
   53-bit mantissa), calls to pow with both x and y as integral values
   sometimes produce a non-integral result.
   One workaround is to reset the FPU env to 53-bit mantissa
   by a call to fesetenv (FE_PC53_ENV).  Amother is to force storage
   of the return value of individual math functions using wrappers.
   NB, using these wrappers will disable builtin math functions and
   hence disable the folding of function results at compile time when
   arguments are constant.  */
#pragma line 196 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* For example, here is how to force the result of the pow function
   to be stored:   */
#pragma line 207 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* Complex number (for _cabs). This is the MS version. The ISO
   C99 counterpart _Complex is an intrinsic type in GCC and
   'complex' is defined as a macro.  See complex.h  */
struct _complex
{
 double x; /* Real part */
 double y; /* Imaginary part */
};
#pragma empty_line
 double __attribute__((__cdecl__)) _cabs (struct _complex);
#pragma empty_line
 double __attribute__((__cdecl__)) _hypot (double, double);
 double __attribute__((__cdecl__)) _j0 (double);
 double __attribute__((__cdecl__)) _j1 (double);
 double __attribute__((__cdecl__)) _jn (int, double);
 double __attribute__((__cdecl__)) _y0 (double);
 double __attribute__((__cdecl__)) _y1 (double);
 double __attribute__((__cdecl__)) _yn (int, double);
 int __attribute__((__cdecl__)) _matherr (struct _exception *);
#pragma empty_line
/* These are also declared in Mingw float.h; needed here as well to work 
   around GCC build issues.  */
/* BEGIN FLOAT.H COPY */
/*
 * IEEE recommended functions
 */
#pragma empty_line
 double __attribute__((__cdecl__)) _chgsign (double);
 double __attribute__((__cdecl__)) _copysign (double, double);
 double __attribute__((__cdecl__)) _logb (double);
 double __attribute__((__cdecl__)) _nextafter (double, double);
 double __attribute__((__cdecl__)) _scalb (double, long);
#pragma empty_line
 int __attribute__((__cdecl__)) _finite (double);
 int __attribute__((__cdecl__)) _fpclass (double);
 int __attribute__((__cdecl__)) _isnan (double);
#pragma empty_line
/* END FLOAT.H COPY */
#pragma empty_line
#pragma empty_line
/*
 * Non-underscored versions of non-ANSI functions.
 * These reside in liboldnames.a.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
 double __attribute__((__cdecl__)) j0 (double);
 double __attribute__((__cdecl__)) j1 (double);
 double __attribute__((__cdecl__)) jn (int, double);
 double __attribute__((__cdecl__)) y0 (double);
 double __attribute__((__cdecl__)) y1 (double);
 double __attribute__((__cdecl__)) yn (int, double);
#pragma empty_line
 double __attribute__((__cdecl__)) chgsign (double);
/*
 * scalb() is a GCC built-in.
 * Exclude this _scalb() stub; the semantics are incompatible
 * with the built-in implementation.
 *
_CRTIMP double __cdecl scalb (double, long);
 *
 */
 int __attribute__((__cdecl__)) finite (double);
 int __attribute__((__cdecl__)) fpclass (double);
#pragma line 286 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* This require msvcr70.dll or higher. */
#pragma line 314 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* Use the compiler's builtin define for FLT_EVAL_METHOD to
   set float_t and double_t.  */
#pragma line 324 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
typedef long double float_t;
typedef long double double_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* 7.12.3.1 */
/*
   Return values for fpclassify.
   These are based on Intel x87 fpu condition codes
   in the high byte of status word and differ from
   the return values for MS IEEE 754 extension _fpclass()
*/
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* 0x0200 is signbit mask */
#pragma empty_line
#pragma empty_line
/*
  We can't inline float or double, because we want to ensure truncation
  to semantic type before classification. 
  (A normal long double value might become subnormal when 
  converted to double, and zero when converted to float.)
*/
#pragma empty_line
extern int __attribute__((__cdecl__)) __fpclassifyf (float);
extern int __attribute__((__cdecl__)) __fpclassify (double);
extern int __attribute__((__cdecl__)) __fpclassifyl (long double);
#pragma line 370 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* 7.12.3.2 */
#pragma empty_line
#pragma empty_line
/* 7.12.3.3 */
#pragma empty_line
#pragma empty_line
/* 7.12.3.4 */
/* We don't need to worry about truncation here:
   A NaN stays a NaN. */
extern int __attribute__((__cdecl__)) __isnan (double);
extern int __attribute__((__cdecl__)) __isnanf (float);
extern int __attribute__((__cdecl__)) __isnanl (long double);
#pragma line 415 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* 7.12.3.5 */
#pragma empty_line
#pragma empty_line
/* 7.12.3.6 The signbit macro */
extern int __attribute__((__cdecl__)) __signbit (double);
extern int __attribute__((__cdecl__)) __signbitf (float);
extern int __attribute__((__cdecl__)) __signbitl (long double);
#pragma line 446 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* 7.12.4 Trigonometric functions: Double in C89 */
extern float __attribute__((__cdecl__)) sinf (float);
extern long double __attribute__((__cdecl__)) sinl (long double);
#pragma empty_line
extern float __attribute__((__cdecl__)) cosf (float);
extern long double __attribute__((__cdecl__)) cosl (long double);
#pragma empty_line
extern float __attribute__((__cdecl__)) tanf (float);
extern long double __attribute__((__cdecl__)) tanl (long double);
#pragma empty_line
extern float __attribute__((__cdecl__)) asinf (float);
extern long double __attribute__((__cdecl__)) asinl (long double);
#pragma empty_line
extern float __attribute__((__cdecl__)) acosf (float);
extern long double __attribute__((__cdecl__)) acosl (long double);
#pragma empty_line
extern float __attribute__((__cdecl__)) atanf (float);
extern long double __attribute__((__cdecl__)) atanl (long double);
#pragma empty_line
extern float __attribute__((__cdecl__)) atan2f (float, float);
extern long double __attribute__((__cdecl__)) atan2l (long double, long double);
#pragma empty_line
/* 7.12.5 Hyperbolic functions: Double in C89  */
extern float __attribute__((__cdecl__)) sinhf (float);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double __attribute__((__cdecl__)) sinhl (long double);
#pragma empty_line
extern float __attribute__((__cdecl__)) coshf (float);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double __attribute__((__cdecl__)) coshl (long double);
#pragma empty_line
extern float __attribute__((__cdecl__)) tanhf (float);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double __attribute__((__cdecl__)) tanhl (long double);
#pragma empty_line
/* Inverse hyperbolic trig functions  */
/* 7.12.5.1 */
extern double __attribute__((__cdecl__)) acosh (double);
extern float __attribute__((__cdecl__)) acoshf (float);
extern long double __attribute__((__cdecl__)) acoshl (long double);
#pragma empty_line
/* 7.12.5.2 */
extern double __attribute__((__cdecl__)) asinh (double);
extern float __attribute__((__cdecl__)) asinhf (float);
extern long double __attribute__((__cdecl__)) asinhl (long double);
#pragma empty_line
/* 7.12.5.3 */
extern double __attribute__((__cdecl__)) atanh (double);
extern float __attribute__((__cdecl__)) atanhf (float);
extern long double __attribute__((__cdecl__)) atanhl (long double);
#pragma empty_line
/* Exponentials and logarithms  */
/* 7.12.6.1 Double in C89 */
extern float __attribute__((__cdecl__)) expf (float);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double __attribute__((__cdecl__)) expl (long double);
#pragma empty_line
/* 7.12.6.2 */
extern double __attribute__((__cdecl__)) exp2(double);
extern float __attribute__((__cdecl__)) exp2f(float);
extern long double __attribute__((__cdecl__)) exp2l(long double);
#pragma empty_line
/* 7.12.6.3 The expm1 functions */
/* TODO: These could be inlined */
extern double __attribute__((__cdecl__)) expm1(double);
extern float __attribute__((__cdecl__)) expm1f(float);
extern long double __attribute__((__cdecl__)) expm1l(long double);
#pragma empty_line
/* 7.12.6.4 Double in C89 */
extern float __attribute__((__cdecl__)) frexpf (float, int*);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double __attribute__((__cdecl__)) frexpl (long double, int*);
#pragma empty_line
/* 7.12.6.5 */
#pragma empty_line
#pragma empty_line
extern int __attribute__((__cdecl__)) ilogb (double);
extern int __attribute__((__cdecl__)) ilogbf (float);
extern int __attribute__((__cdecl__)) ilogbl (long double);
#pragma empty_line
/* 7.12.6.6  Double in C89 */
extern float __attribute__((__cdecl__)) ldexpf (float, int);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double __attribute__((__cdecl__)) ldexpl (long double, int);
#pragma empty_line
/* 7.12.6.7 Double in C89 */
extern float __attribute__((__cdecl__)) logf (float);
extern long double __attribute__((__cdecl__)) logl (long double);
#pragma empty_line
/* 7.12.6.8 Double in C89 */
extern float __attribute__((__cdecl__)) log10f (float);
extern long double __attribute__((__cdecl__)) log10l (long double);
#pragma empty_line
/* 7.12.6.9 */
extern double __attribute__((__cdecl__)) log1p(double);
extern float __attribute__((__cdecl__)) log1pf(float);
extern long double __attribute__((__cdecl__)) log1pl(long double);
#pragma empty_line
/* 7.12.6.10 */
extern double __attribute__((__cdecl__)) log2 (double);
extern float __attribute__((__cdecl__)) log2f (float);
extern long double __attribute__((__cdecl__)) log2l (long double);
#pragma empty_line
/* 7.12.6.11 */
extern double __attribute__((__cdecl__)) logb (double);
extern float __attribute__((__cdecl__)) logbf (float);
extern long double __attribute__((__cdecl__)) logbl (long double);
#pragma empty_line
/* Inline versions.  GCC-4.0+ can do a better fast-math optimization
   with __builtins. */
#pragma line 602 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* 7.12.6.12  Double in C89 */
extern float __attribute__((__cdecl__)) modff (float, float*);
extern long double __attribute__((__cdecl__)) modfl (long double, long double*);
#pragma empty_line
/* 7.12.6.13 */
extern double __attribute__((__cdecl__)) scalbn (double, int);
extern float __attribute__((__cdecl__)) scalbnf (float, int);
extern long double __attribute__((__cdecl__)) scalbnl (long double, int);
#pragma empty_line
extern double __attribute__((__cdecl__)) scalbln (double, long);
extern float __attribute__((__cdecl__)) scalblnf (float, long);
extern long double __attribute__((__cdecl__)) scalblnl (long double, long);
#pragma empty_line
/* 7.12.7.1 */
/* Implementations adapted from Cephes versions */
extern double __attribute__((__cdecl__)) cbrt (double);
extern float __attribute__((__cdecl__)) cbrtf (float);
extern long double __attribute__((__cdecl__)) cbrtl (long double);
#pragma empty_line
/* 7.12.7.2 The fabs functions: Double in C89 */
extern float __attribute__((__cdecl__)) fabsf (float x);
extern long double __attribute__((__cdecl__)) fabsl (long double x);
#pragma empty_line
/* 7.12.7.3  */
extern double __attribute__((__cdecl__)) hypot (double, double); /* in libmoldname.a */
extern float __attribute__((__cdecl__)) hypotf (float, float);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double __attribute__((__cdecl__)) hypotl (long double, long double);
#pragma empty_line
/* 7.12.7.4 The pow functions. Double in C89 */
extern float __attribute__((__cdecl__)) powf (float, float);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern long double __attribute__((__cdecl__)) powl (long double, long double);
#pragma empty_line
/* 7.12.7.5 The sqrt functions. Double in C89. */
extern float __attribute__((__cdecl__)) sqrtf (float);
extern long double __attribute__((__cdecl__)) sqrtl (long double);
#pragma empty_line
/* 7.12.8.1 The erf functions  */
extern double __attribute__((__cdecl__)) erf (double);
extern float __attribute__((__cdecl__)) erff (float);
extern long double __attribute__((__cdecl__)) erfl (long double);
#pragma empty_line
/* 7.12.8.2 The erfc functions  */
extern double __attribute__((__cdecl__)) erfc (double);
extern float __attribute__((__cdecl__)) erfcf (float);
extern long double __attribute__((__cdecl__)) erfcl (long double);
#pragma empty_line
/* 7.12.8.3 The lgamma functions */
extern double __attribute__((__cdecl__)) lgamma (double);
extern float __attribute__((__cdecl__)) lgammaf (float);
extern long double __attribute__((__cdecl__)) lgammal (long double);
#pragma empty_line
/* 7.12.8.4 The tgamma functions */
extern double __attribute__((__cdecl__)) tgamma (double);
extern float __attribute__((__cdecl__)) tgammaf (float);
extern long double __attribute__((__cdecl__)) tgammal (long double);
#pragma empty_line
/* 7.12.9.1 Double in C89 */
extern float __attribute__((__cdecl__)) ceilf (float);
extern long double __attribute__((__cdecl__)) ceill (long double);
#pragma empty_line
/* 7.12.9.2 Double in C89 */
extern float __attribute__((__cdecl__)) floorf (float);
extern long double __attribute__((__cdecl__)) floorl (long double);
#pragma empty_line
/* 7.12.9.3 */
extern double __attribute__((__cdecl__)) nearbyint ( double);
extern float __attribute__((__cdecl__)) nearbyintf (float);
extern long double __attribute__((__cdecl__)) nearbyintl (long double);
#pragma empty_line
/* 7.12.9.4 */
/* round, using fpu control word settings */
extern double __attribute__((__cdecl__)) rint (double);
extern float __attribute__((__cdecl__)) rintf (float);
extern long double __attribute__((__cdecl__)) rintl (long double);
#pragma empty_line
/* 7.12.9.5 */
extern long __attribute__((__cdecl__)) lrint (double);
extern long __attribute__((__cdecl__)) lrintf (float);
extern long __attribute__((__cdecl__)) lrintl (long double);
#pragma empty_line
extern long long __attribute__((__cdecl__)) llrint (double);
extern long long __attribute__((__cdecl__)) llrintf (float);
extern long long __attribute__((__cdecl__)) llrintl (long double);
#pragma empty_line
/* Inline versions of above. 
   GCC 4.0+ can do a better fast-math job with __builtins. */
#pragma line 769 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
/* 7.12.9.6 */
/* round away from zero, regardless of fpu control word settings */
extern double __attribute__((__cdecl__)) round (double);
extern float __attribute__((__cdecl__)) roundf (float);
extern long double __attribute__((__cdecl__)) roundl (long double);
#pragma empty_line
/* 7.12.9.7  */
extern long __attribute__((__cdecl__)) lround (double);
extern long __attribute__((__cdecl__)) lroundf (float);
extern long __attribute__((__cdecl__)) lroundl (long double);
#pragma empty_line
extern long long __attribute__((__cdecl__)) llround (double);
extern long long __attribute__((__cdecl__)) llroundf (float);
extern long long __attribute__((__cdecl__)) llroundl (long double);
#pragma empty_line
/* 7.12.9.8 */
/* round towards zero, regardless of fpu control word settings */
extern double __attribute__((__cdecl__)) trunc (double);
extern float __attribute__((__cdecl__)) truncf (float);
extern long double __attribute__((__cdecl__)) truncl (long double);
#pragma empty_line
/* 7.12.10.1 Double in C89 */
extern float __attribute__((__cdecl__)) fmodf (float, float);
extern long double __attribute__((__cdecl__)) fmodl (long double, long double);
#pragma empty_line
/* 7.12.10.2 */
extern double __attribute__((__cdecl__)) remainder (double, double);
extern float __attribute__((__cdecl__)) remainderf (float, float);
extern long double __attribute__((__cdecl__)) remainderl (long double, long double);
#pragma empty_line
/* 7.12.10.3 */
extern double __attribute__((__cdecl__)) remquo(double, double, int *);
extern float __attribute__((__cdecl__)) remquof(float, float, int *);
extern long double __attribute__((__cdecl__)) remquol(long double, long double, int *);
#pragma empty_line
/* 7.12.11.1 */
extern double __attribute__((__cdecl__)) copysign (double, double); /* in libmoldname.a */
extern float __attribute__((__cdecl__)) copysignf (float, float);
extern long double __attribute__((__cdecl__)) copysignl (long double, long double);
#pragma empty_line
/* 7.12.11.2 Return a NaN */
extern double __attribute__((__cdecl__)) nan(const char *tagp);
extern float __attribute__((__cdecl__)) nanf(const char *tagp);
extern long double __attribute__((__cdecl__)) nanl(const char *tagp);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* 7.12.11.3 */
extern double __attribute__((__cdecl__)) nextafter (double, double); /* in libmoldname.a */
extern float __attribute__((__cdecl__)) nextafterf (float, float);
extern long double __attribute__((__cdecl__)) nextafterl (long double, long double);
#pragma empty_line
/* 7.12.11.4 The nexttoward functions */
extern double __attribute__((__cdecl__)) nexttoward (double, long double);
extern float __attribute__((__cdecl__)) nexttowardf (float, long double);
extern long double __attribute__((__cdecl__)) nexttowardl (long double, long double);
#pragma empty_line
/* 7.12.12.1 */
/*  x > y ? (x - y) : 0.0  */
extern double __attribute__((__cdecl__)) fdim (double x, double y);
extern float __attribute__((__cdecl__)) fdimf (float x, float y);
extern long double __attribute__((__cdecl__)) fdiml (long double x, long double y);
#pragma empty_line
/* fmax and fmin.
   NaN arguments are treated as missing data: if one argument is a NaN
   and the other numeric, then these functions choose the numeric
   value. */
#pragma empty_line
/* 7.12.12.2 */
extern double __attribute__((__cdecl__)) fmax (double, double);
extern float __attribute__((__cdecl__)) fmaxf (float, float);
extern long double __attribute__((__cdecl__)) fmaxl (long double, long double);
#pragma empty_line
/* 7.12.12.3 */
extern double __attribute__((__cdecl__)) fmin (double, double);
extern float __attribute__((__cdecl__)) fminf (float, float);
extern long double __attribute__((__cdecl__)) fminl (long double, long double);
#pragma empty_line
/* 7.12.13.1 */
/* return x * y + z as a ternary op */
extern double __attribute__((__cdecl__)) fma (double, double, double);
extern float __attribute__((__cdecl__)) fmaf (float, float, float);
extern long double __attribute__((__cdecl__)) fmal (long double, long double, long double);
#pragma empty_line
#pragma empty_line
/* 7.12.14 */
/* 
 *  With these functions, comparisons involving quiet NaNs set the FP
 *  condition code to "unordered".  The IEEE floating-point spec
 *  dictates that the result of floating-point comparisons should be
 *  false whenever a NaN is involved, with the exception of the != op, 
 *  which always returns true: yes, (NaN != NaN) is true).
 */
#pragma line 910 "c:/xilinx/vivado_hls/2012.4/win_x86/tools/llvm_gcc/bin/../lib/gcc/i686-pc-mingw32/4.2.1/../../../../include/math.h" 3
}
#pragma line 40 "ap_bmp.cpp" 2
}
#pragma line 40 "ap_bmp.cpp"

#pragma line 1 "ap_bmp.h" 1
/*****************************************************************************
#pragma empty_line
 *
#pragma empty_line
 *     Author: Xilinx, Inc.
#pragma empty_line
 *
#pragma empty_line
 *     This text contains proprietary, confidential information of
#pragma empty_line
 *     Xilinx, Inc. , is distributed by under license from Xilinx,
#pragma empty_line
 *     Inc., and may be used, copied and/or disclosed only pursuant to
#pragma empty_line
 *     the terms of a valid license agreement with Xilinx, Inc.
#pragma empty_line
 *
#pragma empty_line
 *     XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS"
#pragma empty_line
 *     AS A COURTESY TO YOU, SOLELY FOR USE IN DEVELOPING PROGRAMS AND
#pragma empty_line
 *     SOLUTIONS FOR XILINX DEVICES.  BY PROVIDING THIS DESIGN, CODE,
#pragma empty_line
 *     OR INFORMATION AS ONE POSSIBLE IMPLEMENTATION OF THIS FEATURE,
#pragma empty_line
 *     APPLICATION OR STANDARD, XILINX IS MAKING NO REPRESENTATION
#pragma empty_line
 *     THAT THIS IMPLEMENTATION IS FREE FROM ANY CLAIMS OF INFRINGEMENT,
#pragma empty_line
 *     AND YOU ARE RESPONSIBLE FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE
#pragma empty_line
 *     FOR YOUR IMPLEMENTATION.  XILINX EXPRESSLY DISCLAIMS ANY
#pragma empty_line
 *     WARRANTY WHATSOEVER WITH RESPECT TO THE ADEQUACY OF THE
#pragma empty_line
 *     IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OR
#pragma empty_line
 *     REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE FROM CLAIMS OF
#pragma empty_line
 *     INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
#pragma empty_line
 *     FOR A PARTICULAR PURPOSE.
#pragma empty_line
 *
#pragma empty_line
 *     Xilinx products are not intended for use in life support appliances,
#pragma empty_line
 *     devices, or systems. Use in such applications is expressly prohibited.
#pragma empty_line
 *
#pragma empty_line
 *     (c) Copyright 2011 Xilinx Inc.
#pragma empty_line
 *     All rights reserved.
#pragma empty_line
 *
#pragma empty_line
 *****************************************************************************/
#pragma line 32 "ap_bmp.h"
/*
#pragma empty_line
 * This file contains the datastructure information for a simple
#pragma empty_line
 * BMP file reader/writer. The format used in the reader/writer is based on
#pragma empty_line
 * BMP Version 2.
#pragma empty_line
 */
#pragma line 40 "ap_bmp.h"
// Basic color definitions
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Maximum image size 
#pragma empty_line
#pragma empty_line
#pragma empty_line
//File Information Header
typedef struct{
  unsigned short FileType;
  unsigned int FileSize;
  unsigned short Reserved1;
  unsigned short Reserved2;
  unsigned short Offset;
}BMPHeader;
#pragma empty_line
typedef struct{
  unsigned int Size;
  unsigned int Width;
  unsigned int Height;
  unsigned short Planes;
  unsigned short BitsPerPixel;
  unsigned int Compression;
  unsigned int SizeOfBitmap;
  unsigned int HorzResolution;
  unsigned int VertResolution;
  unsigned int ColorsUsed;
  unsigned int ColorsImportant;
}BMPImageHeader;
#pragma empty_line
typedef struct{
  BMPHeader *file_header;
  BMPImageHeader *image_header;
  unsigned int *colors;
  unsigned char *data;
  unsigned char R[1080][1920];
  unsigned char G[1080][1920];
  unsigned char B[1080][1920];
  unsigned char Y[1080][1920];
  char U[1080][1920];
  char V[1080][1920];
}BMPImage;
#pragma empty_line
//Read Function
int BMP_Read(char *file, int row, int col, unsigned char *R, unsigned char *G, unsigned char *B);
#pragma empty_line
//Write Function
int BMP_Write(char *file, int row, int col, unsigned char *R, unsigned char *G, unsigned char *B);
#pragma empty_line
//Write Grey output Function
int WriteGrey(char *file, int row, int col, unsigned char *R);
#pragma line 41 "ap_bmp.cpp" 2
#pragma empty_line
#pragma empty_line
//Open the BMP input file
FILE *BMP_InputOpen(char *name){
  FILE *bmp_file = fopen(name,"rb");
  if(!bmp_file){
    printf("ERROR: could not open $s for reading\n",name);
  }
  else
    return bmp_file;
}
#pragma empty_line
//Open the BMP output file
FILE *BMP_OutputOpen(char *name){
  FILE *bmp_file = fopen(name,"wb");
  if(!bmp_file){
    printf("ERROR: could not open $s for writing\n",name);
  }
  else
    return bmp_file;
}
#pragma empty_line
//Close BMP file
int BMP_Close(FILE *bmp_file){
  if(bmp_file){
    fclose(bmp_file);
    return 0;
  }
  else{
    printf("ERROR: could not close $s\n",bmp_file);
    return 1;
  }
}
#pragma empty_line
//Read the BMP file header
int BMP_Read_FileHeader(FILE *bmp_file, BMPHeader *file_header){
  if(!bmp_file){
    printf("ERROR: Can't read the image file\n");
    return 1;
  }
#pragma empty_line
  if(!fread(file_header,1,14,bmp_file)){
    printf("ERROR: Failed to read the image file header \n");
    return 1;
  }
  else
    return 0;
}
#pragma empty_line
//Read the BMP data header
int BMP_Read_ImageHeader(FILE *bmp_file, BMPImageHeader *image_header){
  if(!bmp_file){
    printf("ERROR: Can't read the image file\n");
    return 1;
  }
#pragma empty_line
  if(!fread(image_header,1,40,bmp_file)){
    printf("ERROR: Failed to read the image data header \n");
    return 1;
  }
  else
    return 0;
}
#pragma empty_line
//Read the BMP image data
int BMP_Read_Image(FILE *bmp_file, unsigned char *data, int size){
   if(!bmp_file){
    printf("ERROR: Can't read the image file\n");
    return 1;
  }
#pragma empty_line
   if(!fread(data,1,size,bmp_file)){
      printf("ERROR: Can't read the image data\n");
    return 1;
   }
   else{
     return 0;
   }
}
#pragma empty_line
//Blank BMP Image
BMPImage *BMP_CreateBlank(void){
  BMPImage *bitmap = __null;
  BMPHeader *file_header = __null;
  BMPImageHeader *image_header = __null;
#pragma empty_line
  unsigned char *data;
#pragma empty_line
  file_header = (BMPHeader *) calloc(sizeof(BMPHeader),1);
  if(!file_header){
    printf("ERROR: Can't create file header in blank BMP\n");
    return __null;
  }
#pragma empty_line
  image_header = (BMPImageHeader *) calloc(sizeof(BMPImageHeader),1);
  if(!image_header){
    printf("ERROR: Can't create image header in blank BMP\n");
    if(file_header) free(file_header);
    return __null;
  }
#pragma empty_line
  bitmap = (BMPImage *) malloc(sizeof(BMPImage));
  if(!bitmap){
    printf("ERROR: Can't create image data in blank BMP\n");
    if(file_header) free(file_header);
    if(image_header) free(image_header);
    return __null;
  }
#pragma empty_line
  data = (unsigned char *) malloc(1920*1080*3);
  if(!data){
    printf("ERROR: Allocate image temp space\n");
    if(file_header) free(file_header);
    if(image_header) free(image_header);
    if(bitmap) free(bitmap);
    return __null;
  }
#pragma empty_line
  bitmap->file_header = file_header;
  bitmap->image_header = image_header;
  bitmap->data = data;
#pragma empty_line
  //Initialize to 0
  int i, j;
  for(i = 0; i < 1080; i++){
    for(j= 0; j < 1920; j++){
      bitmap->R[i][j]=0;
      bitmap->G[i][j]=0;
      bitmap->B[i][j]=0;
      bitmap->Y[i][j]=0;
      bitmap->U[i][j]=0;
      bitmap->V[i][j]=0;
    }
  }
#pragma empty_line
  return bitmap;
}
#pragma empty_line
//Delete bitmap from memory
void BMP_Delete(BMPImage *bitmap)
{
  if(bitmap){
    if(bitmap->file_header) free(bitmap->file_header);
    if(bitmap->image_header) free(bitmap->image_header);
    if(bitmap->data) free(bitmap->data);
    free(bitmap);
  }
}
#pragma empty_line
#pragma empty_line
//Read the image
int BMP_Read(char *file, int row, int col, unsigned char *R, unsigned char *G, unsigned char *B){
  BMPHeader *file_header = __null;
  BMPImageHeader *image_header = __null;
  unsigned char *image_data = __null;
#pragma empty_line
  FILE *bmp_file = __null;
#pragma empty_line
  int file_open;
#pragma empty_line
  bmp_file = BMP_InputOpen(file);
#pragma empty_line
  if(!bmp_file){
    printf("ERROR: Can't open file %s\n",file);
    return 1;
  }
#pragma empty_line
  file_header = (BMPHeader *)malloc(sizeof(BMPHeader));
  if(!file_header){
      printf("ERROR: Can't allocate memory for file header\n");
    return 1;
  }
#pragma empty_line
  image_header = (BMPImageHeader *)malloc(sizeof(BMPImageHeader));
  if(!image_header){
      printf("ERROR: Can't allocate memory for image header\n");
      if(file_header) free(file_header);
    return 1;
  }
#pragma empty_line
  int header_read;
  header_read = BMP_Read_FileHeader(bmp_file,file_header);
#pragma empty_line
  if(header_read){
    printf("ERROR: Can't read the image header\n");
    if(file_header) free(file_header);
    if(image_header) free(image_header);
    return 1;
  }
#pragma empty_line
  int img_header_read;
#pragma empty_line
  img_header_read = BMP_Read_ImageHeader(bmp_file,image_header);
  if(img_header_read){
    printf("ERROR: Can't read the data header\n");
    if(file_header) free(file_header);
    if(image_header) free(image_header);
    return 1;
  }
#pragma empty_line
  //Allocate memory for the image pixels
  image_data = (unsigned char *)malloc(image_header->Height * image_header->Width * 3);
  if(!image_data){
    printf("ERROR: Can't allocate memory for the image\n");
    if(file_header) free(file_header);
    if(image_header) free(image_header);
    return 1;
  }
#pragma empty_line
  int img_data_read;
#pragma empty_line
  img_data_read = BMP_Read_Image(bmp_file,image_data,(image_header->Height*image_header->Width*3));
  if(img_data_read){
    printf("ERROR: Can't read the image data\n");
    if(file_header) free(file_header);
    if(image_header) free(image_header);
    if(image_data) free(image_data);
    return 1;
  }
#pragma empty_line
  if(row != (int)image_header->Height){
    printf("ERROR: file image height %i different from requested height %i\n",image_header->Height,row);
    if(file_header) free(file_header);
    if(image_header) free(image_header);
    if(image_data) free(image_data);
    return 1;
  }
#pragma empty_line
  if(col != (int)image_header->Width){
    printf("ERROR: file image height %i different from requested height %i\n",image_header->Width,col);
    if(file_header) free(file_header);
    if(image_header) free(image_header);
    if(image_data) free(image_data);
    return 1;
  }
#pragma empty_line
  unsigned char *tmp = image_data;
#pragma empty_line
  //Copy the image data into the storage arrays
  int i, j;
  for(i=0; i < row; i++){
    for(j=0; j < col; j++){
      unsigned char r_temp, b_temp, g_temp;
#pragma empty_line
      b_temp = *tmp++;
      g_temp = *tmp++;
      r_temp = *tmp++;
#pragma empty_line
      //      printf("R %d G %d B %d\n",r_temp,b_temp,g_temp);
#pragma empty_line
      R[(row-1-i)*col+j] = r_temp;
      G[(row-1-i)*col+j] = g_temp;
      B[(row-1-i)*col+j] = b_temp;
    }
  }
#pragma empty_line
  BMP_Close(bmp_file);
#pragma empty_line
  if(file_header) free(file_header);
  if(image_header) free(image_header);
  if(image_data) free(image_data);
#pragma empty_line
  return 0;
}
#pragma empty_line
//Write the image to a file
int BMP_Write(char *file, int row, int col, unsigned char *R, unsigned char *G, unsigned char *B)
{
  BMPImage *bitmap = __null;
  FILE *output_image;
  unsigned char *data;
#pragma empty_line
  bitmap = BMP_CreateBlank();
  if(!bitmap){
    printf("ERROR: Can't create image for output file\n");
    return 1;
  }
#pragma empty_line
  bitmap->file_header->FileType = 19778;
  bitmap->file_header->FileSize = 0;
  bitmap->file_header->Reserved1 = 0;
  bitmap->file_header->Reserved2 = 0;
  bitmap->file_header->Offset = 54;
#pragma empty_line
  bitmap->image_header->Size = 40;
  bitmap->image_header->Width = col;
  bitmap->image_header->Height = row;
  bitmap->image_header->Planes = 1;
  bitmap->image_header->BitsPerPixel = 24;
  bitmap->image_header->Compression = 0;
  bitmap->image_header->SizeOfBitmap = 3*row*col;
  bitmap->image_header->HorzResolution = 2835;
  bitmap->image_header->VertResolution = 2835;
  bitmap->image_header->ColorsUsed = 0;
  bitmap->image_header->ColorsImportant = 0;
#pragma empty_line
  data = bitmap->data;
#pragma empty_line
  //Store the image, bitmaps are stores upside down
  int i, j;
  for(i = 0; i < row; i++){
    for(j=0; j < col; j++){
      unsigned char r_temp, g_temp, b_temp;
#pragma empty_line
      r_temp = R[(row-1-i)*col+j];
      g_temp = G[(row-1-i)*col+j];
      b_temp = B[(row-1-i)*col+j];
#pragma empty_line
      //   printf("i %d j %d R %d G %d B %d\n",i, j,r_temp,g_temp,b_temp);
#pragma empty_line
      *data++ = b_temp;
      *data++ = g_temp;
      *data++ = r_temp;
    }
  }
#pragma empty_line
  output_image = fopen(file,"wb");
  if(!output_image){
    printf("ERROR: Can't open %s for writing\n",file);
    BMP_Delete(bitmap);
    return 1;
  }
#pragma empty_line
  fwrite(&bitmap->file_header->FileType,1,2,output_image);
  fwrite(&bitmap->file_header->FileSize,1,4,output_image);
  fwrite(&bitmap->file_header->Reserved1,1,2,output_image);
  fwrite(&bitmap->file_header->Reserved2,1,2,output_image);
  fwrite(&bitmap->file_header->Offset,1,4,output_image);
#pragma empty_line
  fwrite(&bitmap->image_header->Size,1,4,output_image);
  fwrite(&bitmap->image_header->Width,1,4,output_image);
  fwrite(&bitmap->image_header->Height,1,4,output_image);
  fwrite(&bitmap->image_header->Planes,1,2,output_image);
  fwrite(&bitmap->image_header->BitsPerPixel,1,2,output_image);
  fwrite(&bitmap->image_header->Compression,1,4,output_image);
  fwrite(&bitmap->image_header->SizeOfBitmap,1,4,output_image);
  fwrite(&bitmap->image_header->HorzResolution,1,4,output_image);
  fwrite(&bitmap->image_header->VertResolution,1,4,output_image);
  fwrite(&bitmap->image_header->ColorsUsed,1,4,output_image);
  fwrite(&bitmap->image_header->ColorsImportant,1,4,output_image);
#pragma empty_line
  fwrite(bitmap->data,1,bitmap->image_header->Height*bitmap->image_header->Width*3,output_image);
#pragma empty_line
  fclose(output_image);
  BMP_Delete(bitmap);
#pragma empty_line
  return 0;
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
//Write the grey scale image to a file
int WriteGrey(char *file, int row, int col, unsigned char *R)
{
  BMPImage *bitmap = __null;
  FILE *output_image;
  unsigned char *data;
#pragma empty_line
  bitmap = BMP_CreateBlank();
  if(!bitmap){
    printf("ERROR: Can't create image for output file\n");
    return 1;
  }
#pragma empty_line
  bitmap->file_header->FileType = 19778;
  bitmap->file_header->FileSize = 0;
  bitmap->file_header->Reserved1 = 0;
  bitmap->file_header->Reserved2 = 0;
  bitmap->file_header->Offset = 54;
#pragma empty_line
  bitmap->image_header->Size = 40;
  bitmap->image_header->Width = col;
  bitmap->image_header->Height = row;
  bitmap->image_header->Planes = 1;
  //bitmap->image_header->BitsPerPixel = 24;
  bitmap->image_header->BitsPerPixel = 8;
  bitmap->image_header->Compression = 0;
  //bitmap->image_header->SizeOfBitmap = 3*row*col;
  bitmap->image_header->SizeOfBitmap = 1*row*col;
  bitmap->image_header->HorzResolution = 2835;
  bitmap->image_header->VertResolution = 2835;
  bitmap->image_header->ColorsUsed = 0;
  bitmap->image_header->ColorsImportant = 0;
#pragma empty_line
  data = bitmap->data;
#pragma empty_line
  //Store the image, bitmaps are stores upside down
  int i, j;
  for(i = 0; i < row; i++){
    for(j=0; j < col; j++){
      unsigned char r_temp, g_temp, b_temp;
#pragma empty_line
      r_temp = R[(row-1-i)*col+j];
      //g_temp = G[(row-1-i)*col+j];
      //b_temp = B[(row-1-i)*col+j];
#pragma empty_line
      //   printf("i %d j %d R %d G %d B %d\n",i, j,r_temp,g_temp,b_temp);
#pragma empty_line
      //*data++ = b_temp;
      //*data++ = g_temp;
      *data++ = r_temp;
    }
  }
#pragma empty_line
  output_image = fopen(file,"wb");
  if(!output_image){
    printf("ERROR: Can't open %s for writing\n",file);
    BMP_Delete(bitmap);
    return 1;
  }
#pragma empty_line
  fwrite(&bitmap->file_header->FileType,1,2,output_image);
  fwrite(&bitmap->file_header->FileSize,1,4,output_image);
  fwrite(&bitmap->file_header->Reserved1,1,2,output_image);
  fwrite(&bitmap->file_header->Reserved2,1,2,output_image);
  fwrite(&bitmap->file_header->Offset,1,4,output_image);
#pragma empty_line
  fwrite(&bitmap->image_header->Size,1,4,output_image);
  fwrite(&bitmap->image_header->Width,1,4,output_image);
  fwrite(&bitmap->image_header->Height,1,4,output_image);
  fwrite(&bitmap->image_header->Planes,1,2,output_image);
  fwrite(&bitmap->image_header->BitsPerPixel,1,2,output_image);
  fwrite(&bitmap->image_header->Compression,1,4,output_image);
  fwrite(&bitmap->image_header->SizeOfBitmap,1,4,output_image);
  fwrite(&bitmap->image_header->HorzResolution,1,4,output_image);
  fwrite(&bitmap->image_header->VertResolution,1,4,output_image);
  fwrite(&bitmap->image_header->ColorsUsed,1,4,output_image);
  fwrite(&bitmap->image_header->ColorsImportant,1,4,output_image);
#pragma empty_line
  //fwrite(bitmap->data,1,bitmap->image_header->Height*bitmap->image_header->Width*3,output_image);
  fwrite(bitmap->data,1,bitmap->image_header->Height*bitmap->image_header->Width*1,output_image);
#pragma empty_line
  fclose(output_image);
  BMP_Delete(bitmap);
#pragma empty_line
  return 0;
}
