#ifndef _USERS_JOHAECHANG_OOD_LAB05_SWCLASS_H_
#define _USERS_JOHAECHANG_OOD_LAB05_SWCLASS_H_
#include "Student.h"
#include <string>

class SwClass{
 public:
    explicit SwClass(string crs_num, string cls_num, string cls_name, string hw_rate, string mid_rate, string tp_rate, string fin_rate, Student st);
    std::string GetInfo();
    std::string course_num();
    std::string class_num();
    std::string class_name();
    std::string hw_rate();
    std::string mid_rate();
    std::string tp_rate();
    std::string fin_rate();

 private:
    std::string course_num_;
    std::string class_num_;
    std::string class_name_;
    int hw_rate_;
    int mid_rate_;
    int tp_rate_;
    int fin_rate_;
    Student student_;
};


#endif  //  _USERS_JOHAECHANG_OOD_LAB05_SWCLASS_H_
