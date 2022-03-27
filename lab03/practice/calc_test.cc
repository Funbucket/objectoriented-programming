#include "gtest/gtest.h"
#include "calc.h"

TEST(TestCalc, AddPosPosTest){
	EXPECT_EQ(calc('+', 1, 2), 3);
}

TEST(TestCalc, AddNegPosTest){
	EXPECT_EQ(calc('+', -1, 2), 1);
}

TEST(TestCalc, SubPosPosTest){
	EXPECT_EQ(calc('-', 1, 2), -1);
}
