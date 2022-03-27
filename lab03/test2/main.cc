#include <iostream>
#include "multi.h"

using namespace std;

int main(int argc, char **argv) {
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	
	cout << multi(a, b) << endl;

  return 0;
}
