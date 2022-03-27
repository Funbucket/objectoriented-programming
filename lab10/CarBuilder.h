#ifndef _USERS_JOHAECHANG_OOD_LAB10_CARBUILDER_H_
#define _USERS_JOHAECHANG_OOD_LAB10_CARBUILDER_H_
#include "CarPartsFactory.h"
#include "Car.h"
#include <string>

class CarBuilder {
 public:
    explicit CarBuilder(CarPartsFactory* factory);
    CarBuilder& CreateDoor();
    CarBuilder& CreateWheel();
    CarBuilder& CreateRoof();
    CarBuilder& SetColor(std::string color);
    Car* Build();
 private:
    Part* door_;
    Part* wheel_;
    Part* roof_;
    std::string color_;
    const CarPartsFactory* factory_;
};
#endif  // _USERS_JOHAECHANG_OOD_LAB10_CARBUILDER_H_
