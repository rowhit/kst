/***************************************************************************
 *                                                                         *
 *   copyright : (C) 2007 Theodore Kisner <tsk@humanityforward.org>        *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef RENDER2DCARTESIAN_H
#define RENDER2DCARTESIAN_H

#include "plotrenderer2d.h"

namespace Kst {

class Render2DCartesian : public PlotRenderer2D {
  public:
    Render2DCartesian(const QString &name);
    ~Render2DCartesian();
    
};

}

#endif

// vim: ts=2 sw=2 et
