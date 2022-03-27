#ifndef _USERS_JOHAECHANG_OOD_LAB10_CAR_H_
#define _USERS_JOHAECHANG_OOD_LAB10_CAR_H_
#include "Part.h"
#include <string>

class CarBuilder;

class Car {
 public:
    std::string GetSpec();
 private:
    Car(Part* door, Part *wheel, Part* roof, std::string color);
    const Part* door_;
    const Part* wheel_;
    const Part* roof_;
    const std::string color_;
    friend CarBuilder;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB10_CAR_H_
