#include <iostream>
#include <vector>
#include <array>
#include <list>
#include "gtest/gtest.h"
#include "Sort.h"

TEST(test1, vector_sort) {
    std::vector<int> test1_vec = {7, 10, 5, 2, 4, 3, 9};
    Sort<std::vector<int>>(test1_vec.begin(), test1_vec.end());
    int expect[7] = {2, 3, 4, 5, 7, 9, 10};
    int i = 0;
    for (int n : test1_vec) {
        EXPECT_EQ(n, expect[i++]);
    }
}

TEST(test2, vector_sort) {
    std::vector<int> test2_vec = {3, 2, 1};
    Sort<std::vector<int>>(test2_vec.begin(), test2_vec.end());
    int expect[3] = {1, 2, 3};
    int i = 0;
    for (int n : test2_vec) {
        EXPECT_EQ(n, expect[i++]);
    }
}

TEST(test3, vector_sort) {
    std::vector<int> test3_vec = {2, 1};
    Sort<std::vector<int>>(test3_vec.begin(), test3_vec.end());
    int expect[2] = {1, 2};
    int i = 0;
    for (int n : test3_vec) {
        EXPECT_EQ(n, expect[i++]);
    }
}


TEST(test4, vector_sort) {
        std::vector<int> test4_vec = {2, 1, 1, 3};
        Sort<std::vector<int>>(test4_vec.begin(), test4_vec.end());
    int expect[4] = {1, 1, 2, 3};
    int i = 0;
    for (int n : test4_vec) {
        EXPECT_EQ(n, expect[i++]);
    }
}

TEST(test5, array_sort) {
    std::array<int, 7> test5_arr = {7, 10, 5, 2, 4, 3, 9};
    Sort<std::array<int, 7>>(test5_arr.begin(), test5_arr.end());
    int expect[7] = {2, 3, 4, 5, 7, 9, 10};
    int i = 0;
    for (int n : test5_arr) {
        EXPECT_EQ(n, expect[i++]);
    }
}

TEST(test6, array_sort) {
    std::array<int, 3> test6_arr = {4, 1, 2};
    Sort<std::array<int, 3>>(test6_arr.begin(), test6_arr.end());
    int expect[3] = {1, 2, 4};
    int i = 0;
    for (int n : test6_arr) {
        EXPECT_EQ(n, expect[i++]);
    }
}

TEST(test7, array_sort) {
    std::array<int, 2> test7_arr = {2, 1};
    Sort<std::array<int, 2>>(test7_arr.begin(), test7_arr.end());
    int expect[2] = {1, 2};
    int i = 0;
    for (int n : test7_arr) {
        EXPECT_EQ(n, expect[i++]);
    }
}

TEST(test8, list_sort) {
    std::list<int> test8_lst = {7, 10, 5, 2, 4, 3, 9};
    Sort<std::list<int>>(test8_lst.begin(), test8_lst.end());
    int expect[7] = {2, 3, 4, 5, 7, 9, 10};
    int i = 0;
    for (int n : test8_lst) {
        EXPECT_EQ(n, expect[i++]);
    }
}

TEST(test9, list_sort) {
    std::list<int> test9_lst = {3, 2, 1};
    Sort<std::list<int>>(test9_lst.begin(), test9_lst.end());
    int expect[3] = {1, 2, 3};
    int i = 0;
    for (int n : test9_lst) {
        EXPECT_EQ(n, expect[i++]);
    }
}

TEST(test10, list_sort) {
    std::list<int> test10_lst = {1, 2, 1};
    Sort<std::list<int>>(test10_lst.begin(), test10_lst.end());
    int expect[3] = {1, 1, 2};
    int i = 0;
    for (int n : test10_lst) {
        EXPECT_EQ(n, expect[i++]);
    }
}
