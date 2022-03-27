#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "ShapeUtil.h"
int main() {
    ShapeUtil* Util = ShapeUtil::GetInstance();

    Circle c1(3);
    Circle c2(5);
    Circle c3 = c1 + c2;
    std::cout << "#Circle1: " << Util->CalcArea(c1) << std::endl;
    std::cout << "#Circle2: " << Util->CalcArea(c2) << std::endl;
    std::cout << "#Circle3: " << Util->CalcArea(c3) << std::endl;


    Triangle t1(3, 7);
    Triangle t2(4, 2);
    Triangle t3 = t1 + t2;
    std::cout << "#Triangle1: " << Util->CalcArea(t1) << std::endl;
    std::cout << "#Triangle2: " << Util->CalcArea(t2) << std::endl;
    std::cout << "#Triangle3: " << Util->CalcArea(t3) << std::endl;

    Rectangle r1(3, 7);
    Rectangle r2(4, 2);
    Rectangle r3 = r1 + r2;
    std::cout << "#Rectangle1: " << Util->CalcArea(r1) << std::endl;
    std::cout << "#Rectangle2: " << Util->CalcArea(r2) << std::endl;
    std::cout << "#Rectangle3: " << Util->CalcArea(r3) << std::endl;


    return 0;
}
