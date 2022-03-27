#include "calc.h"
#include <iostream>
#include <typeinfo>

using namespace std;

int main(int argc, char *argv[])
{
	char op = *argv[1];
	int x = atoi(argv[2]);
	int y = atoi(argv[3]);
	int result = calc(op, x, y);

	cout << result << endl;

	return result;
}
