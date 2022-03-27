#include <array>
#include <string>
#include "gtest/gtest.h"
#include "Node.h"

Node<int, 2> test1_n1(1);
Node<int, 2> test1_n2(2);
Node<int, 2> test1_n3(3);
Node<int, 2> test1_n4(4);

TEST(test1, AddChildTest) {
    ASSERT_TRUE(test1_n1.AddChild(&test1_n2));
    ASSERT_TRUE(test1_n1.AddChild(&test1_n3));
    ASSERT_FALSE(test1_n1.AddChild(&test1_n4));
}

TEST(test1, GetChildrenTest) {
    int expect[2] = {2, 3};
    int i = 0;
    for (Node<int, 2>* child : test1_n1.children()) {
        EXPECT_EQ(child->value(), expect[i++]);
    }
}

Node<std::string, 3> test2_s1("what");
Node<std::string, 3> test2_s2("are");
Node<std::string, 3> test2_s3("you");
Node<std::string, 3> test2_s4("looking");
Node<std::string, 3> test2_s5("for");

TEST(test2, AddChildTest) {
    ASSERT_TRUE(test2_s1.AddChild(&test2_s2));
    ASSERT_TRUE(test2_s1.AddChild(&test2_s3));
    ASSERT_TRUE(test2_s1.AddChild(&test2_s4));
    ASSERT_FALSE(test2_s1.AddChild(&test2_s5));
}

TEST(test2, GetChildrenTest) {
    std::string expect[3] = {"are", "you", "looking"};
    int i = 0;
    for (Node<std::string, 3>* child : test2_s1.children()) {
        EXPECT_EQ(child->value(), expect[i++]);
    }
}

Node<int, 1> test3_n1(1);
Node<int, 1> test3_n2(2);
Node<int, 1> test3_n3(3);

TEST(test3, AddChildTest) {
    ASSERT_TRUE(test3_n1.AddChild(&test3_n2));
    ASSERT_FALSE(test3_n1.AddChild(&test3_n3));
}

TEST(test3, GetChildrenTest) {
    int expect[1] = {2};
    int i = 0;
    for (Node<int, 1>* child : test3_n1.children()) {
        EXPECT_EQ(child->value(), expect[i++]);
    }
}

Node<std::string, 1> test4_s1("Hello");
Node<std::string, 1> test4_s2("World");
Node<std::string, 1> test4_s3("False");

TEST(test4, AddChildTest) {
    ASSERT_TRUE(test4_s1.AddChild(&test4_s2));
    ASSERT_FALSE(test4_s1.AddChild(&test4_s3));
}

TEST(test4, GetChildrenTest) {
    std::string expect[1] = {"World"};
    int i = 0;
    for (Node<std::string, 1>* child : test4_s1.children()) {
        EXPECT_EQ(child->value(), expect[i++]);
    }
}

Node<int, 3> test5_n1(1);
Node<int, 3> test5_n2(2);
Node<int, 3> test5_n3(3);

TEST(test5, AddChildTest) {
    ASSERT_TRUE(test5_n1.AddChild(&test5_n2));
    ASSERT_TRUE(test5_n1.AddChild(&test5_n3));
}

TEST(test5, GetChildrenTest) {
    int expect[2] = {2, 3};
    int i = 0;
    for (Node<int, 3>* child : test5_n1.children()) {
        if ( child == nullptr ) break;
        EXPECT_EQ(child->value(), expect[i++]);
    }
}

Node<int, 4> test6_n1(1);
Node<int, 4> test6_n2(2);

TEST(test6, AddChildTest) {
    ASSERT_TRUE(test6_n1.AddChild(&test6_n2));
}

TEST(test6, GetChildrenTest) {
    int expect[1] = {2};
    int i = 0;
    for (Node<int, 4>* child : test6_n1.children()) {
        if ( child == nullptr ) break;
        EXPECT_EQ(child->value(), expect[i++]);
    }
}

Node<std::string, 2> test7_s1("OOD");
Node<std::string, 2> test7_s2("Class");

TEST(test7, AddChildTest) {
    ASSERT_TRUE(test7_s1.AddChild(&test7_s2));
}

TEST(test7, GetChildrenTest) {
    std::string expect[1] = {"Class"};
    int i = 0;
    for (Node<std::string, 2>* child : test7_s1.children()) {
        if ( child == nullptr ) break;
        EXPECT_EQ(child->value(), expect[i++]);
    }
}

Node<std::string, 3> test8_s1("String");
Node<std::string, 3> test8_s2("Node");

TEST(test8, AddChildTest) {
    ASSERT_TRUE(test8_s1.AddChild(&test8_s2));
}

TEST(test8, GetChildrenTest) {
    std::string expect[1] = {"Node"};
    int i = 0;
    for (Node<std::string, 3>* child : test8_s1.children()) {
        if ( child == nullptr ) break;
        EXPECT_EQ(child->value(), expect[i++]);
    }
}

Node<int, 100> test9_n1(100);
Node<int, 100> test9_n2(0);

TEST(test9, AddChildTest) {
    ASSERT_TRUE(test9_n1.AddChild(&test9_n2));
}

TEST(test9, GetChildrenTest) {
    int expect[1] = {0};
    int i = 0;
    for (Node<int, 100>* child : test9_n1.children()) {
        if ( child == nullptr ) break;
        EXPECT_EQ(child->value(), expect[i++]);
    }
}

Node<std::string, 100> test10_s1("100");
Node<std::string, 100> test10_s2("0");

TEST(test10, AddChildTest) {
    ASSERT_TRUE(test10_s1.AddChild(&test10_s2));
}

TEST(test10, GetChildrenTest) {
    std::string expect[1] = {"0"};
    int i = 0;
    for (Node<std::string, 100>* child : test10_s1.children()) {
        if ( child == nullptr ) break;
        EXPECT_EQ(child->value(), expect[i++]);
    }
}

