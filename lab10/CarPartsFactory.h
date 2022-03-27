#ifndef _USERS_JOHAECHANG_OOD_LAB10_CARPARTSFACTORY_H_
#define _USERS_JOHAECHANG_OOD_LAB10_CARPARTSFACTORY_H_
#include "Part.h"

class CarPartsFactory {
 public:
    virtual Part* CreateDoor() const = 0;
    virtual Part* CreateWheel() const = 0;
    virtual Part* CreateRoof() const = 0;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB10_CARPARTSFACTORY_H_
