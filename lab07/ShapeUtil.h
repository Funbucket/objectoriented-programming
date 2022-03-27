#ifndef _USERS_JOHAECHANG_OOD_LAB07_SHAPEUTIL_H_
#define _USERS_JOHAECHANG_OOD_LAB07_SHAPEUTIL_H_
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

class ShapeUtil {
 public:
    static ShapeUtil* GetInstance();
    float CalcArea(const Circle& circle);
    float CalcArea(const Triangle& triangle);
    int CalcArea(const Rectangle& rect);
 private:
    ShapeUtil();
    static ShapeUtil* instance_;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB07_SHAPEUTIL_H_

