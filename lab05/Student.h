#ifndef _USERS_JOHAECHANG_OOD_LAB05_STUDENT_H_
#define _USERS_JOHAECHANG_OOD_LAB05_STUDENT_H_
#include "Student.h"
#include <string>

using std::string;

class Student {
 public:
    explicit Student(string num, string name, string hw, string mid, string tp, string fin);
    std::string GetInfo();
    std::string number();
    std::string name();
    std::string hw();
    std::string mid();
    std::string tp();
    std::string fin();

 private:
    std::string number_;
    std::string name_;
    int hw_;
    int mid_;
    int tp_;
    int fin_;
};

#endif  //  _USERS_JOHAECHANG_OOD_LAB05_STUDENT_H_
