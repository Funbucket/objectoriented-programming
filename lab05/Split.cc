#include <vector>
#include <string>
#include "Split.h"

using std::vector;
using std::string;

vector<string> split(string s, string seperator) {
    vector<string> v;
    char *c = strtok((char *)s.c_str(), seperator.c_str());
    while (c) {
        v.push_back(c);
        c = strtok(NULL, seperator.c_str());
    }
    return v;
}
