/***************************************************************************
                              dialoglauncher.cpp
                             -------------------
    begin                : Nov. 24, 2004
    copyright            : (C) 2004 The University of Toronto
    email                :
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "dialoglauncher.h"

#include <QApplication>

namespace Kst {

DialogLauncher *DialogLauncher::_self = 0L;
void DialogLauncher::cleanup() {
    delete _self;
    _self = 0;
}


DialogLauncher *DialogLauncher::self() {
  if (!_self) {
    _self = new DialogLauncher;
    qAddPostRoutine(DialogLauncher::cleanup);
  }
  return _self;
}


void DialogLauncher::replaceSelf(DialogLauncher *newInstance) {
  delete _self;
  _self = 0L;
  _self = newInstance;
}


DialogLauncher::DialogLauncher() {
}


DialogLauncher::~DialogLauncher() {
}


void DialogLauncher::showVectorDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}


void DialogLauncher::showMatrixDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}


void DialogLauncher::showScalarDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}


void DialogLauncher::showStringDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}


void DialogLauncher::showCurveDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}


void DialogLauncher::showImageDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}


void DialogLauncher::showEquationDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}


void DialogLauncher::showHistogramDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}


void DialogLauncher::showPSDDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}


void DialogLauncher::showCSDDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}


void DialogLauncher::showBasicPluginDialog(KstObjectPtr objectPtr) {
  Q_UNUSED(objectPtr);
}

}

// vim: ts=2 sw=2 et
