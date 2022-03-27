#include "gtest/gtest.h"
#include "IntNode.h"
#include "StringNode.h"
#include "TreeUtil.h"

TreeUtil* tree_util = TreeUtil::GetInstance();

StringNode test1_sn1(nullptr, nullptr, "hello");
StringNode test1_sn2(nullptr, nullptr, "world");
StringNode test1_root(&test1_sn1, &test1_sn2, "here");

TEST(test1, ToStringTest) {
    EXPECT_EQ(test1_root.ToString(), "StringNode(here, StringNode(hello, NULL, NULL), StringNode(world, NULL, NULL))");
}

TEST(test1, PreOrderTraversalTest) {
    EXPECT_EQ(tree_util->PreOrderTraversal(&test1_root), "here, hello, world");
}

TEST(test1, InOrderTraversalTest) {
    EXPECT_EQ(tree_util->InOrderTraversal(&test1_root), "hello, here, world");
}

TEST(test1, PostOrderTraversalTest) {
    EXPECT_EQ(tree_util->PostOrderTraversal(&test1_root), "hello, world, here");
}

IntNode test2_in1(nullptr, nullptr, 2);
IntNode test2_in2(nullptr, nullptr, 3);
IntNode test2_root(&test2_in1, &test2_in2, 1);

TEST(test2, ToStringTest) {
    EXPECT_EQ(test2_root.ToString(),
              "IntNode(1, IntNode(2, NULL, NULL), IntNode(3, NULL, NULL))");
}

TEST(test2, PreOrderTraversalTest) {
    EXPECT_EQ(tree_util->PreOrderTraversal(&test2_root), "1, 2, 3");
}

TEST(test2, InOrderTraversalTest) {
    EXPECT_EQ(tree_util->InOrderTraversal(&test2_root), "2, 1, 3");
}

TEST(test2, PostOrderTraversalTest) {
    EXPECT_EQ(tree_util->PostOrderTraversal(&test2_root), "2, 3, 1");
}

IntNode test3_in1(nullptr, nullptr, 1);
IntNode test3_in2(nullptr, nullptr, 2);
StringNode test3_root(&test3_in1, &test3_in2, "hello");

TEST(test3, ToStringTest) {
    EXPECT_EQ(test3_root.ToString(),
              "StringNode(hello, IntNode(1, NULL, NULL), IntNode(2, NULL, NULL))");
}

TEST(test3, PreOrderTraversalTest) {
    EXPECT_EQ(tree_util->PreOrderTraversal(&test3_root), "hello, 1, 2");
}

TEST(test3, InOrderTraversalTest) {
    EXPECT_EQ(tree_util->InOrderTraversal(&test3_root), "1, hello, 2");
}

TEST(test3, PostOrderTraversalTest) {
    EXPECT_EQ(tree_util->PostOrderTraversal(&test3_root), "1, 2, hello");
}

StringNode test4_in1(nullptr, nullptr, "hello");
IntNode test4_in2(nullptr, nullptr, 2);
IntNode test4_root(&test4_in1, &test4_in2, 1);

TEST(test4, ToStringTest) {
    EXPECT_EQ(test4_root.ToString(),
              "IntNode(1, StringNode(hello, NULL, NULL), IntNode(2, NULL, NULL))");
}

TEST(test4, PreOrderTraversalTest) {
    EXPECT_EQ(tree_util->PreOrderTraversal(&test4_root), "1, hello, 2");
}

TEST(test4, InOrderTraversalTest) {
    EXPECT_EQ(tree_util->InOrderTraversal(&test4_root), "hello, 1, 2");
}

TEST(test4, PostOrderTraversalTest) {
    EXPECT_EQ(tree_util->PostOrderTraversal(&test4_root), "hello, 2, 1");
}

StringNode test5_root(nullptr, nullptr, "hello");

TEST(test5, ToStringTest) {
    EXPECT_EQ(test5_root.ToString(), "StringNode(hello, NULL, NULL)");
}

TEST(test5, PreOrderTraversalTest) {
    EXPECT_EQ(tree_util->PreOrderTraversal(&test5_root), "hello");
}

TEST(test5, InOrderTraversalTest) {
    EXPECT_EQ(tree_util->InOrderTraversal(&test5_root), "hello");
}

TEST(test5, PostOrderTraversalTest) {
    EXPECT_EQ(tree_util->PostOrderTraversal(&test5_root), "hello");
}

StringNode test6_sn1(nullptr, nullptr, "world");
StringNode test6_root(&test6_sn1, nullptr, "hello");

TEST(test6, ToStringTest) {
    EXPECT_EQ(test6_root.ToString(), "StringNode(hello, StringNode(world, NULL, NULL), NULL)");
}

TEST(test6, PreOrderTraversalTest) {
    EXPECT_EQ(tree_util->PreOrderTraversal(&test6_root), "hello, world");
}

TEST(test6, InOrderTraversalTest) {
    EXPECT_EQ(tree_util->InOrderTraversal(&test6_root), "world, hello");
}

TEST(test6, PostOrderTraversalTest) {
    EXPECT_EQ(tree_util->PostOrderTraversal(&test6_root), "world, hello");
}

StringNode test7_sn1(nullptr, nullptr, "world");
StringNode test7_root(nullptr, &test7_sn1, "hello");

TEST(test7, ToStringTest) {
    EXPECT_EQ(test7_root.ToString(), "StringNode(hello, NULL, StringNode(world, NULL, NULL))");
}

TEST(test7, PreOrderTraversalTest) {
    EXPECT_EQ(tree_util->PreOrderTraversal(&test7_root), "hello, world");
}

TEST(test7, InOrderTraversalTest) {
    EXPECT_EQ(tree_util->InOrderTraversal(&test7_root), "hello, world");
}

TEST(test7, PostOrderTraversalTest) {
    EXPECT_EQ(tree_util->PostOrderTraversal(&test7_root), "world, hello");
}

StringNode test8_sn1(nullptr, nullptr, "world");
StringNode test8_sn2(&test8_sn1, nullptr, "hello");
IntNode test8_root(&test8_sn2, nullptr, 1);

TEST(test8, ToStringTest) {
    EXPECT_EQ(test8_root.ToString(), "IntNode(1, StringNode(hello, StringNode(world, NULL, NULL), NULL), NULL)");
}

TEST(test8, PreOrderTraversalTest) {
    EXPECT_EQ(tree_util->PreOrderTraversal(&test8_root), "1, hello, world");
}

TEST(test8, InOrderTraversalTest) {
    EXPECT_EQ(tree_util->InOrderTraversal(&test8_root), "world, hello, 1");
}

TEST(test8, PostOrderTraversalTest) {
    EXPECT_EQ(tree_util->PostOrderTraversal(&test8_root), "world, hello, 1");
}

IntNode test9_in1(nullptr, nullptr, 1);
IntNode test9_in2(nullptr, &test9_in1, 2);
StringNode test9_sn1(nullptr, nullptr, "world");
StringNode test9_root(&test9_sn1, &test9_in2, "hello");

TEST(test9, ToStringTest) {
    EXPECT_EQ(test9_root.ToString(), "StringNode(hello, StringNode(world, NULL, NULL), IntNode(2, NULL, IntNode(1, NULL, NULL)))");
}

TEST(test9, PreOrderTraversalTest) {
    EXPECT_EQ(tree_util->PreOrderTraversal(&test9_root), "hello, world, 2, 1");
}

TEST(test9, InOrderTraversalTest) {
    EXPECT_EQ(tree_util->InOrderTraversal(&test9_root), "world, hello, 2, 1");
}

TEST(test9, PostOrderTraversalTest) {
    EXPECT_EQ(tree_util->PostOrderTraversal(&test9_root), "world, 1, 2, hello");
}

IntNode test10_in1(nullptr, nullptr, 2);
StringNode test10_sn1(nullptr, nullptr, "world");
StringNode test10_sn2(nullptr, &test10_in1, "here");
IntNode test10_in2(nullptr, &test10_sn1, 1);
StringNode test10_root(&test10_sn2, &test10_in2, "hello");

TEST(test10, ToStringTest) {
    EXPECT_EQ(test10_root.ToString(), "StringNode(hello, StringNode(here, NULL, IntNode(2, NULL, NULL)), IntNode(1, NULL, StringNode(world, NULL, NULL)))");
}

TEST(test10, PreOrderTraversalTest) {
    EXPECT_EQ(tree_util->PreOrderTraversal(&test10_root), "hello, here, 2, 1, world");
}

TEST(test10, InOrderTraversalTest) {
    EXPECT_EQ(tree_util->InOrderTraversal(&test10_root), "here, 2, hello, 1, world");
}

TEST(test10, PostOrderTraversalTest) {
    EXPECT_EQ(tree_util->PostOrderTraversal(&test10_root), "2, here, world, 1, hello");
}

