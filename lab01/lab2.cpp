#include <iostream>

void PrintLeftAilgnStar(int height){

	for(int i = 0; i < height; i++){
		for(int j = 0; j <= i; j++){
			std::cout << "*";
		}		
		std::cout << std::endl;
	}
}

int main(int argc, char* argv[]){
	PrintLeftAilgnStar(5);
	return 0;
}

