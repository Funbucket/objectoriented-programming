#include <iostream>
#include <string>
#include "palindrome.h"

int countPalindrome(unsigned int min, unsigned int max) {
  int count = 0;
  for (int i = min; i <= max; i++) {
    std::string sNum = std::to_string(i);
    int length = sNum.length();
    int j = 0;
    bool isPalindrome = true;

    while (j < length && isPalindrome) {
      if (sNum[j] != sNum[length - 1 - j])
        isPalindrome = false;
      else
        j++;
    }
    count = isPalindrome ? count + 1 : count;
  }
  return count;
}
