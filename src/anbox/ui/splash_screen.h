/*
 * Copyright (C) 2017 Simon Fels <morphis@gravedo.de>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef ANBOX_UI_SPLASH_SCREEN_H_
#define ANBOX_UI_SPLASH_SCREEN_H_

#include <thread>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wswitch-default"
#include <SDL2/SDL.h>
#pragma GCC diagnostic pop

namespace anbox {
namespace ui {
class SplashScreen {
 public:
  SplashScreen();
  ~SplashScreen();

 private:
  void process_events();

  std::thread event_thread_;
  bool event_thread_running_;
  SDL_Window *window_;
};
} // namespace ui
} // namespace anbox

#endif
