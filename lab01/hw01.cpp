#include <iostream>

using namespace std;

void printStar(int height){
	for(int i = 0; i < height; ++i){
		for(int j = height - 1; j > i; j--){
			cout << " ";
		}		
		
		for(int j = 0;j < 2 *  i + 1; j++){
			cout << "*";
		}
	cout << endl;
	}
}

int main(int argc, char* argv[]){
	printStar(7);
	return 0;
}
