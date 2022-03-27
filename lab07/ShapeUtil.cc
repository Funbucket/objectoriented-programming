#include "ShapeUtil.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

ShapeUtil* ShapeUtil::instance_ = NULL;

ShapeUtil::ShapeUtil() {}

ShapeUtil* ShapeUtil::GetInstance() {
    if ( instance_ == NULL ) {
        instance_ = new ShapeUtil();
    }
    return instance_;
}

float ShapeUtil::CalcArea(const Circle &circle) {
    float area = 0;
    area = circle.radius() * circle.radius() * 3.14;
    return area;
}


float ShapeUtil::CalcArea(const Triangle &triangle) {
    float area = 0;
    area = static_cast<float>(triangle.height()) *
    static_cast<float>(triangle.base()) / 2;
    return area;
}

int ShapeUtil::CalcArea(const Rectangle &rect) {
    int area = 0;
    area = rect.height() * rect.width();
    return area;
}

