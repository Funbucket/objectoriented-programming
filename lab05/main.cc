#include <iostream>
#include <vector>
#include <fstream>
#include "Student.h"
#include "SwClass.h"
#include "Split.h"

using std::vector;
using std::string;
using std::ifstream;

int main(int argc, char** argv) {
    ifstream fin(argv[1]);

    if (!fin) {
      std::cout << "Error, no such file exists" << std::endl;
      exit(100);
    }

    vector<string> v;
    string s;
    vector<Student> students;

    while (fin.peek() != EOF) {
        getline(fin, s);

        v = split(s, " ");

        Student student(v.at(0), v.at(1), v.at(2), v.at(3), v.at(4), v.at(5));
        students.push_back(student);
    }

    fin.close();

    ifstream fin2(argv[2]);

    if (!fin2) {
      std::cout << "Error, no such file exists" << std::endl;
      exit(100);
    }

    vector<string> v2;
    string s2;

    getline(fin2, s2);

    v2 = split(s2, " ");

    for (Student student : students) {
       SwClass swClass(v2.at(0), v2.at(1), v2.at(2), v2.at(3), v2.at(4), v2.at(5), v2.at(6), student);
       std::cout << swClass.GetInfo() << std::endl;
    }
    fin2.close();
    return 0;
}

