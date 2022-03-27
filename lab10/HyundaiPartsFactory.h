#ifndef _USERS_JOHAECHANG_OOD_LAB10_HYUNDAIPARTSFACTORY_H_
#define _USERS_JOHAECHANG_OOD_LAB10_HYUNDAIPARTSFACTORY_H_
#include "CarPartsFactory.h"
#include "Part.h"
#include <string>

class HyundaiPartsFactory : public CarPartsFactory {
 public:
    static HyundaiPartsFactory* GetInstance();
    Part* CreateDoor() const override;
    Part* CreateWheel() const override;
    Part* CreateRoof() const override;

 private:
    HyundaiPartsFactory();
    static HyundaiPartsFactory* instance_;
};
#endif  // _USERS_JOHAECHANG_OOD_LAB10_HYUNDAIPARTSFACTORY_H_
