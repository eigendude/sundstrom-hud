/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "guilib/GUIWindow.h"

class CGUIWindowAirQuality : public CGUIWindow
{
public:
  CGUIWindowAirQuality();
  ~CGUIWindowAirQuality() override;

protected:
  // Implementation of CGUIWindow
  void OnInitWindow() override;

private:
  void UpdateButtons();
};
