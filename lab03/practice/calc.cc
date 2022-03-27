#include <iostream>
#include "calc.h"

int calc(char op, int x, int y){
	int result;

	switch(op){
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
	}

	return result;
}

