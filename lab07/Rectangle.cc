#include "Rectangle.h"

Rectangle::Rectangle(int height, int width) : height_(height), width_(width) {}

int Rectangle::height() const {return height_;}

int Rectangle::width() const {return width_;}

Rectangle Rectangle::operator+(const Rectangle &rect) const {
    int h = 0;
    int w = 0;

    h += this->height();
    h += rect.height_;

    w += this->width_;
    w += rect.width_;

    Rectangle ret = Rectangle(h, w);

    return ret;
}


