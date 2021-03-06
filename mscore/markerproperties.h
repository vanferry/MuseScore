//=============================================================================
//  MusE Score
//  Linux Music Score Editor
//  $Id: markerproperties.h 1840 2009-05-20 11:57:51Z wschweer $
//
//  Copyright (C) 2002-2009 Werner Schweer and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================

#ifndef __MARKERPROPERTIES_H__
#define __MARKERPROPERTIES_H__

#include "ui_markerproperties.h"

class Marker;

//---------------------------------------------------------
//   MarkerProperties
//---------------------------------------------------------

class MarkerProperties : public QDialog, public Ui::MarkerPropertyBase {
      Q_OBJECT

      Marker* marker;

   private slots:
      void saveValues();

   public:
      MarkerProperties(Marker*, QWidget* parent = 0);
      };

#endif
