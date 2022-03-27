#include "gtest/gtest.h"
#include "palindrome.h"

TEST(TestPalindrome, 1to1) {
  EXPECT_EQ(countPalindrome(1, 1), 1);
}

TEST(TestPalindrome, 1to2) {
  EXPECT_EQ(countPalindrome(1, 2), 2);
}

TEST(TestPalindrome, 10to20) {
  EXPECT_EQ(countPalindrome(10, 20), 1);
}

TEST(TestPalindrome, 11to22) {
  EXPECT_EQ(countPalindrome(11, 22), 2);
}

TEST(TestPalindrome, 11to99) {
  EXPECT_EQ(countPalindrome(11, 99), 9);
}

TEST(TestPalindrome, 11to100) {
  EXPECT_EQ(countPalindrome(11, 100), 9);
}

TEST(TestPalindrome, 11to101) {
  EXPECT_EQ(countPalindrome(11, 101), 10);
}

TEST(TestPalindrome, 100to200) {
  EXPECT_EQ(countPalindrome(100, 200), 10);
}

TEST(TestPalindrome, 1to1000) {
  EXPECT_EQ(countPalindrome(1, 1000), 108);
}

TEST(TestPalindrome, 1to1000000) {
  EXPECT_EQ(countPalindrome(1, 1000000), 1998);
}
