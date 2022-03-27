#ifndef _MNT_C_USERS_MINSO_OOD21_PROJECT_OTHELLOCONTROLLER_H_
#define _MNT_C_USERS_MINSO_OOD21_PROJECT_OTHELLOCONTROLLER_H_
class OthelloController {
 public:
  // Delete possible copy approaches
  OthelloController(const OthelloController &other) = delete;
  void operator=(const OthelloController &) = delete;
  static OthelloController* GetInstance();
  void PlayOthello();
 private:
  OthelloController();
  static OthelloController* instance_;
};
#endif  // _MNT_C_USERS_MINSO_OOD21_PROJECT_OTHELLOCONTROLLER_H_
