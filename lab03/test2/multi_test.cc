#include <stdio.h>
#include <gtest/gtest.h>

#include "multi.h"

TEST(test_case_name, test_name) {
	EXPECT_EQ(1, multi(1,1));
}
