/*
* Copyright (c) 2006-2009 Erin Catto http://www.box2d.org
* Copyright (c) 2013 Google, Inc.
*
* This software is provided 'as-is', without any express or implied
* warranty.  In no event will the authors be held liable for any damages
* arising from the use of this software.
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:
* 1. The origin of this software must not be misrepresented; you must not
* claim that you wrote the original software. If you use this software
* in a product, an acknowledgment in the product documentation would be
* appreciated but is not required.
* 2. Altered source versions must be plainly marked as such, and must not be
* misrepresented as being the original software.
* 3. This notice may not be removed or altered from any source distribution.
*/

#include <Box2D/Common/b2Settings.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

b2Version b2_version = {2, 3, 0};

#define LIQUIDFUN_VERSION_MAJOR 1
#define LIQUIDFUN_VERSION_MINOR 1
#define LIQUIDFUN_VERSION_REVISION 0
#define LIQUIDFUN_STRING_EXPAND(X) #X
#define LIQUIDFUN_STRING(X) LIQUIDFUN_STRING_EXPAND(X)

const b2Version b2_liquidFunVersion = {
	LIQUIDFUN_VERSION_MAJOR, LIQUIDFUN_VERSION_MINOR,
	LIQUIDFUN_VERSION_REVISION,
};

const char *b2_liquidFunVersionString =
	"LiquidFun "
	LIQUIDFUN_STRING(LIQUIDFUN_VERSION_MAJOR) "."
	LIQUIDFUN_STRING(LIQUIDFUN_VERSION_MINOR) "."
	LIQUIDFUN_STRING(LIQUIDFUN_VERSION_REVISION);


class Validator
{
public:
	Validator()
	{
		b2Assert(sizeof(uint64)==8);
		b2Assert(sizeof(int64)==8);
	}
} validate;
