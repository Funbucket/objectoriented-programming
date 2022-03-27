#include "Triangle.h"

Triangle::Triangle(int height, int base) : height_(height), base_(base) {}
int Triangle::height() const {return height_;}
int Triangle::base() const {return base_;}
Triangle Triangle::operator+(const Triangle &triangle) const {
    int h = 0;
    int b = 0;
    h += this->height_;
    h += triangle.height_;

    b += this->base_;
    b += triangle.base_;
    Triangle ret = Triangle(h, b);
    return ret;
}

