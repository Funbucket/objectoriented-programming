#ifndef _USERS_JOHAECHANG_OOD_LAB10_DOOR_H_
#define _USERS_JOHAECHANG_OOD_LAB10_DOOR_H_
#include "Part.h"
#include <string>

class Door : public Part {
 public:
    explicit Door(std::string factory_name);
    std::string GetInfo() const override;
};
#endif  // _USERS_JOHAECHANG_OOD_LAB10_DOOR_H_
