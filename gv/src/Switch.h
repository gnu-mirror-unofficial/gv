/*
**
** Switch.h
**
** Copyright (C) 1995, 1996, 1997 Johannes Plass
** 
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
** 
** Author:   Johannes Plass (plass@thep.physik.uni-mainz.de)
**           Department of Physics
**           Johannes Gutenberg-University
**           Mainz, Germany
**
*/

#ifndef _Switch_h_
#define _Switch_h_

#include "paths.h"
#include "Button.h"

extern WidgetClass     switchWidgetClass;

typedef struct _SwitchClassRec   *SwitchWidgetClass;
typedef struct _SwitchRec        *SwitchWidget;

extern void                     SwitchToggle (
#if NeedFunctionPrototypes
    Widget,
    XEvent *,
    String *,
    Cardinal *
#endif
);

extern int                     SwitchIsSet (
#if NeedFunctionPrototypes
    Widget
#endif
);

#endif /* _Switch_h_ */