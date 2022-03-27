#ifndef _USERS_JOHAECHANG_OOD_LAB10_ROOF_H_
#define _USERS_JOHAECHANG_OOD_LAB10_ROOF_H_
#include "Part.h"
#include <string>

class Roof : public Part {
 public:
    explicit Roof(std::string factory_name);
    std::string GetInfo() const override;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB10_ROOF_H_
