#ifndef _MNT_C_USERS_MINSO_OOD21_PROJECT_CELL_H_
#define _MNT_C_USERS_MINSO_OOD21_PROJECT_CELL_H_
#include <string>

class Cell {
 public:
  Cell();
  std::string color();
  void Change(std::string color);

 private:
  std::string color_;
};

#endif  // _MNT_C_USERS_MINSO_OOD21_PROJECT_CELL_H_
