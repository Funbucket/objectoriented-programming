#ifndef _USERS_JOHAECHANG_OOD_LAB10_WHEEL_H_
#define _USERS_JOHAECHANG_OOD_LAB10_WHEEL_H_
#include "Part.h"
#include <string>

class Wheel : public Part {
 public:
    explicit Wheel(std::string factory_name);
    std::string GetInfo() const override;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB10_WHEEL_H_
