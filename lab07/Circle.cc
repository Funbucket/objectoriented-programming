#include "Circle.h"

Circle::Circle(int radius) : radius_(radius) {}

int Circle::radius() const { return radius_;}

Circle Circle::operator+(const Circle &circle) const {
    int tmp = 0;
    tmp = tmp + this->radius_;
    tmp = tmp + circle.radius();
    Circle ret = Circle(tmp);
    return ret;
}

