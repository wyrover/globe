//***************************************************************************
//
// Globe
// A small C++ library to allow fast prototyping of Direct3D animations.
//
// Copyright (C) 2012-2013 Jean-Charles Lefebvre <polyvertex@gmail.com>
//
// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions :
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not
//    be misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.
//
// Created On: 2011-12-04 19:59:07
//
//***************************************************************************

#include "_internal.hpp"
#ifdef GLOBE_GFX
namespace glb {


//---------------------------------------------------------------------------
Surface Texture::getLevel (uint uiLevel/*=0*/)
{
  IDirect3DSurface9* pSurf;

  GLB_ASSERT(this->getRef());
  GLB_DXTEST(this->getRef()->GetSurfaceLevel(uiLevel, &pSurf));
  pSurf->Release(); // GetSurfaceLevel() incremented the ref counter

  return Surface(pSurf);
}

//---------------------------------------------------------------------------
D3DSURFACE_DESC Texture::getLevelDesc (uint uiLevel/*=0*/)
{
  D3DSURFACE_DESC d3dSurfDesc;

  GLB_ASSERT(this->getRef());
  GLB_DXTEST(this->getRef()->GetLevelDesc(uiLevel, &d3dSurfDesc));

  return d3dSurfDesc;
}


} // namespace glb
#endif // #ifdef GLOBE_GFX
