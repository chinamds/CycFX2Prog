/*
 * cycfx2prog.h - Cypress FX2(LP) programmer. 
 * 
 * Copyright (c) 2006--2009 by Wolfgang Wieser ] wwieser (a) gmx <*> de [ 
 * 
 * This file may be distributed and/or modified under the terms of the 
 * GNU General Public License version 2 as published by the Free Software 
 * Foundation. (See COPYING.GPL for details.)
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 * 
 */

#ifndef _CYCFX2PROG_H
#define _CYCFX2PROG_H	1

#include <usb.h>

#ifdef __cplusplus
extern "C" {
#endif

//extern int cycfx2progmain(int argc, char **arg);
extern int cycfx2progmain(struct usb_device *usbdev, const char *hexfile, const char *cmd);
extern void cycfx2prog(int argc, ...);

#ifdef __cplusplus
}
#endif

#endif /* cycfx2prog.h */