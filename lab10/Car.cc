#include "Car.h"
#include <string>

Car::Car(Part *door, Part *wheel, Part* roof, std::string color) :
door_(door), wheel_(wheel), roof_(roof), color_(color) {}
