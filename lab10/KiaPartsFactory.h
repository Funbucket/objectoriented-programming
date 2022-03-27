#ifndef _USERS_JOHAECHANG_OOD_LAB10_KIAPARTSFACTORY_H_
#define _USERS_JOHAECHANG_OOD_LAB10_KIAPARTSFACTORY_H_
#include "CarPartsFactory.h"
#include "Part.h"
#include <string>

class KiaPartsFactory : public CarPartsFactory {
 public:
    static KiaPartsFactory* GetInstance();
    Part* CreateDoor() const override;
    Part* CreateWheel() const override;
    Part* CreateRoof() const override;

 private:
    KiaPartsFactory();
    static KiaPartsFactory* instance_;
};
#endif  // _USERS_JOHAECHANG_OOD_LAB10_KIAPARTSFACTORY_H_
