#include <string>
#include <vector>
#include "Split.h"
#include "SwClass.h"
#include "Student.h"

using std::string;
using std::stoi;

SwClass::SwClass(string crs_num, string cls_num, string cls_name, string hw_rate, string mid_rate, string tp_rate, string fin_rate, Student st) : course_num_(crs_num), class_num_(cls_num), class_name_(cls_name), hw_rate_(stoi(hw_rate)), mid_rate_(stoi(mid_rate)), tp_rate_(stoi(tp_rate)), fin_rate_(stoi(fin_rate)), student_(st) {}

std::string SwClass::course_num() { return course_num_; }
std::string SwClass::class_num() { return class_num_; }
std::string SwClass::class_name() { return class_name_; }
std::string SwClass::hw_rate() { return std::to_string(hw_rate_); }
std::string SwClass::mid_rate() { return std::to_string(mid_rate_); }
std::string SwClass::tp_rate() { return std::to_string(tp_rate_); }
std::string SwClass::fin_rate() {return std::to_string(fin_rate_); }

std::string SwClass::GetInfo() {
    int total_score, hw_score, mid_term_score, tp_score, final_term_score;
    std::string grade;
    std::string student_info = student_.GetInfo();
    std::vector<string> v;
    v = split(student_info, " ");

    hw_score = stoi(v.at(2)) * hw_rate_ * 0.01;
    mid_term_score = stoi(v.at(3)) * mid_rate_ * 0.01;
    tp_score = stoi(v.at(4)) * tp_rate_ * 0.01;
    final_term_score = stoi(v.at(5)) * fin_rate_ * 0.01;

    total_score = hw_score + mid_term_score + tp_score + final_term_score;

    if (total_score >= 90) grade = "A";
    else if (total_score >= 80) grade = "B";
    else if (total_score >= 70) grade = "C";
    else if (total_score >= 60) grade = "D";
    else
        grade = "F";

    v.at(0).append(" ");

    return v.at(0).append(grade);
}
