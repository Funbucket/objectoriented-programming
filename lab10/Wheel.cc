#include "Wheel.h"
#include <string>

Wheel::Wheel(std::string factory_name) : Part(factory_name) {}

std::string Wheel::GetInfo() const {
    return "[" + factory_name() + "] Wheel";
}
