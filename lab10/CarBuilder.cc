#include "CarBuilder.h"
#include "Car.h"
#include <string>

CarBuilder::CarBuilder(CarPartsFactory *factory) : factory_(factory) {
    door_ = nullptr;
    wheel_ = nullptr;
    roof_ = nullptr;
    color_ = "black";
}

CarBuilder& CarBuilder::CreateDoor() {
    door_ = factory_->CreateDoor();
    return *this;
}

CarBuilder& CarBuilder::CreateWheel() {
    wheel_ = factory_->CreateWheel();
    return *this;
}

CarBuilder& CarBuilder::CreateRoof() {
    roof_ = factory_->CreateRoof();
    return *this;
}

CarBuilder& CarBuilder::SetColor(std::string color) {
    color_ = color;
    return *this;
}

Car* CarBuilder::Build() {
    return new Car(door_, wheel_, roof_, color_);
}

std::string Car::GetSpec() {
    std::string spec = "Car(";
    if ( door_ != nullptr ) {
        spec.append(door_->GetInfo() + ", ");
    }
    if ( wheel_ != nullptr ) {
        spec.append(wheel_->GetInfo() + ", ");
    }
    if ( roof_ != nullptr ) {
        spec.append(roof_->GetInfo() + ", ");
    }
    spec.append(color_ + ")");
    return spec;
}
