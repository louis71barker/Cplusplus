/*
  Copyright (C) 2009 Jon Macey

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "NGLInit.h"
#include "ShaderLib.h"
#include "VAOPrimitives.h"

#if defined(LINUX) || defined(WIN32)
  #include <cstdlib>
#endif
//----------------------------------------------------------------------------------------------------------------------
/// @file NGLInit.cpp
/// @brief implementation files for NGLInit class
//----------------------------------------------------------------------------------------------------------------------


namespace ngl
{
//----------------------------------------------------------------------------------------------------------------------


NGLInit::NGLInit()
{
#ifndef DARWIN
  if(ogl_LoadFunctions() == ogl_LOAD_FAILED)
  {
    std::cerr<<"error doing GL init you may have to set a different GL version in the build\n";
  }
  #ifdef NGL_DEBUG
    std::cerr <<"ngl:: configured with GL version "<<ogl_GetMajorVersion()<<"."<<ogl_GetMinorVersion()<<"\n";
  #endif
#endif

#ifdef DARWIN
	int majorVersion,minorVersion;
	glGetIntegerv(GL_MAJOR_VERSION, &majorVersion);
	glGetIntegerv(GL_MINOR_VERSION, &minorVersion);
	#ifdef NGL_DEBUG
		std::cerr <<"ngl:: configured with GL version "<<majorVersion<<"."<<minorVersion<<"\n";
	#endif

#endif

}

//----------------------------------------------------------------------------------------------------------------------
NGLInit::~NGLInit()
{
}

void NGLInit::NGLQuit()
{
  VAOPrimitives *prim=VAOPrimitives::instance();
  prim->clear();
  ShaderLib *shader=ShaderLib::instance();
  shader->reset();

}
} // end of ngl namespace




