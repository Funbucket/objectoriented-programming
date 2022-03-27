#include <string>
#include "Student.h"

using std::string;
using std::stoi;

Student::Student(string num, string name, string hw, string mid, string tp, string fin) : number_(num), name_(name), hw_(stoi(hw)), mid_(stoi(mid)), tp_(stoi(tp)), fin_(stoi(fin)) {}

std::string Student::number() { return number_; }
std::string Student::name() { return name_; }
std::string Student::hw() { return std::to_string(hw_); }
std::string Student::mid() { return std::to_string(mid_); }
std::string Student::tp() { return std::to_string(tp_); }
std::string Student::fin() { return std::to_string(fin_); }

std::string Student::GetInfo() {
    std::string student_info;

    std::string hw_score_s = std::to_string(hw_);
    std::string mid_score_s = std::to_string(mid_);
    std::string tp_score_s = std::to_string(tp_);
    std::string final_score_s = std::to_string(fin_);

    student_info.append(number_);
    student_info.append(" ");
    student_info.append(name_);
    student_info.append(" ");
    student_info.append(hw_score_s);
    student_info.append(" ");
    student_info.append(mid_score_s);
    student_info.append(" ");
    student_info.append(tp_score_s);
    student_info.append(" ");
    student_info.append(final_score_s);

    return student_info;
}
