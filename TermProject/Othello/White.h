#ifndef _MNT_C_USERS_MINSO_OOD21_PROJECT_WHITE_H_
#define _MNT_C_USERS_MINSO_OOD21_PROJECT_WHITE_H_
#include <string>
#include <vector>
#include "Player.h"

class White : public Player {
 public:
  explicit White(std::string name);
  std::vector<std::vector<int>> status() override;
  void PushStatus(std::vector<int> position) override;
  std::vector<std::vector<int>> ValidPosition() override;
  void PushValid(std::vector<int> position) override;
  bool Move(int x, int y) override;
  const std::string color() override;
  ~White();

 private:
  std::vector<std::vector<int>> status_;
  std::vector<std::vector<int>> valid_position_;
  const std::string color_;
};
#endif  // _MNT_C_USERS_MINSO_OOD21_PROJECT_WHITE_H_
