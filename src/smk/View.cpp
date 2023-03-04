// Copyright 2019 Arthur Sonzogni. All rights reserved.
// Use of this source code is governed by the MIT license that can be found in
// the LICENSE file.

#include <smk/View.hpp>

namespace smk {



View::View(glm::vec2 center, glm::vec2 size) : x_(center.x), y_(center.y), width_(size.x), height_(size.y) {

}


/// @brief Set the center position of the in-game view.
/// param x The center of the view along the horizontal axis.
/// param y The center of the view along the vertical axis.
void View::SetCenter(float x, float y) {
  x_ = x;
  y_ = y;
}

/// @brief Set the center position of the in-game view.
/// param center The center of the view.
void View::SetCenter(const glm::vec2& center) {
  SetCenter(center.x, center.y);
}

/// @brief Set the size of the in-game view.
/// param width The size of the view along the horizontal axis.
/// param height The size of the view along the vertical axis.
void View::SetSize(float width, float height) {
  width_ = width;
  height_ = height;
}

/// @brief Set the size of the in-game view.
/// param center The size of the view.
void View::SetSize(const glm::vec2& size) {
  SetSize(size.x, size.y);
}

glm::vec2 View::size() const {
  return glm::vec2(width_, height_);
}

glm::vec2 View::center() const {
  return glm::vec2(x_,y_);
}

}  // namespace smk
