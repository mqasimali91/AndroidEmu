//============================================================================
//
//   SSSS    tt          lll  lll
//  SS  SS   tt           ll   ll
//  SS     tttttt  eeee   ll   ll   aaaa
//   SSSS    tt   ee  ee  ll   ll      aa
//      SS   tt   eeeeee  ll   ll   aaaaa  --  "An Atari 2600 VCS Emulator"
//  SS  SS   tt   ee      ll   ll  aa  aa
//   SSSS     ttt  eeeee llll llll  aaaaa
//
// Copyright (c) 1995-2010 by Bradford W. Mott, Stephen Anthony
// and the Stella Team
//
// See the file "License.txt" for information on usage and redistribution of
// this file, and for a DISCLAIMER OF ALL WARRANTIES.
//
// Windows CE Port by Kostas Nakos
// $Id: missing.h 2001 2010-04-10 21:37:23Z stephena $
//============================================================================

#ifndef _WCE_MISSING_H_
#define _WCE_MISSING_H_

#include <windows.h>

// WCE 300 does not support exception handling well
// so we remove all catch blocks
#define try	if (1)
#define catch(a) else if (0)
extern char *msg;
#define throw //

#define stricmp _stricmp
#define strdup _strdup

#pragma warning(disable: 4800)
#pragma warning(disable: 4244)
#pragma warning(disable: 4786)

typedef unsigned int  uintptr_t;

int time(int dummy);
char *getcwd(void);

#endif
