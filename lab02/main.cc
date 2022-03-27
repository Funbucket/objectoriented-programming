#include <iostream>
#include "palindrome.h"

int main(int argc, char *argv[]) {
  unsigned int min = atoi(argv[1]);
  unsigned int max = atoi(argv[2]);
  int count = countPalindrome(min, max);
  std::cout << count << std::endl;
  return count;
}
