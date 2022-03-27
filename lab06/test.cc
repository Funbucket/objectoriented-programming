#include "gtest/gtest.h"
#include "Node.h"
#include "TreeUtil.h"

Node case1_n2(3, NULL, NULL);
Node case1_n1(1, NULL, NULL);
Node case1_root(2, &case1_n1, &case1_n2);

Node case2_n1(1, NULL, NULL);
Node case2_root(2, &case2_n1, NULL);

Node case3_n1(3, NULL, NULL);
Node case3_n2(1, NULL, NULL);
Node case3_root(2, &case3_n1, &case3_n2);

Node case4_n1(6, NULL, NULL);
Node case4_n2(3, NULL, &case4_n1);
Node case4_n3(9, NULL, NULL);
Node case4_root(5, &case4_n2, &case4_n3);

Node case5_n1(8, NULL, NULL);
Node case5_n2(9, &case5_n1, NULL);
Node case5_n3(7, NULL, NULL);
Node case5_root(3, &case5_n2, &case5_n3);

Node case6_n1(6, NULL, NULL);
Node case6_n2(2, NULL, &case6_n1);
Node case6_n3(3, NULL, NULL);
Node case6_root(1, &case6_n2, &case6_n3);

Node case7_n1(3, NULL, NULL);
Node case7_n2(9, NULL, NULL);
Node case7_root(4, &case7_n1, &case7_n2);

Node case8_n1(5, NULL, NULL);
Node case8_n2(2, NULL, NULL);
Node case8_n3(10, &case8_n1, NULL);
Node case8_root(3, &case8_n2, &case8_n3);

Node case9_n1(3, NULL, NULL);
Node case9_n2(4, &case9_n1, NULL);
Node case9_n3(9, NULL, NULL);
Node case9_root(6, &case9_n2, &case9_n3);

Node case10_root(1, NULL, NULL);

TreeUtil* tree_util = TreeUtil::GetInstance();

TEST(TreeTest1, ToStringTest) {
  EXPECT_EQ(case1_root.ToString(),
            "NODE(2, NODE(1, NULL, NULL), NODE(3, NULL, NULL))");
}

TEST(TreeTest1, IsFullBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsFullBinaryTree(case1_root));
}

TEST(TreeTest1, IsCompleteBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsCompleteBinaryTree(case1_root));
}

TEST(TreeTest1, IsBinarySearchTreeTest) {
  ASSERT_TRUE(tree_util->IsBinarySearchTree(case1_root));
}

TEST(TreeTest2, ToStringTest) {
  EXPECT_EQ(case2_root.ToString(), "NODE(2, NODE(1, NULL, NULL), NULL)");
}

TEST(TreeTest2, IsFullBinaryTreeTest) {
  ASSERT_FALSE(tree_util->IsFullBinaryTree(case2_root));
}

TEST(TreeTest2, IsCompleteBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsCompleteBinaryTree(case2_root));
}

TEST(TreeTest2, IsBinarySearchTreeTest) {
  ASSERT_TRUE(tree_util->IsBinarySearchTree(case2_root));
}

TEST(TreeTest3, ToStringTest) {
  EXPECT_EQ(case3_root.ToString(),
            "NODE(2, NODE(3, NULL, NULL), NODE(1, NULL, NULL))");
}

TEST(TreeTest3, IsFullBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsFullBinaryTree(case3_root));
}

TEST(TreeTest3, IsCompleteBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsCompleteBinaryTree(case3_root));
}

TEST(TreeTest3, IsBinarySearchTreeTest) {
  ASSERT_FALSE(tree_util->IsBinarySearchTree(case3_root));
}

TEST(TreeTest4, ToStringTest) {
  EXPECT_EQ(case4_root.ToString(),
            "NODE(5, NODE(3, NULL, NODE(6, NULL, NULL)), NODE(9, NULL, NULL))");
}

TEST(TreeTest4, IsFullBinaryTreeTest) {
  ASSERT_FALSE(tree_util->IsFullBinaryTree(case4_root));
}

TEST(TreeTest4, IsCompleteBinaryTreeTest) {
  ASSERT_FALSE(tree_util->IsCompleteBinaryTree(case4_root));
}

TEST(TreeTest4, IsBinarySearchTreeTest) {
  ASSERT_FALSE(tree_util->IsBinarySearchTree(case4_root));
}

TEST(TreeTest5, ToStringTest) {
  EXPECT_EQ(case5_root.ToString(),
            "NODE(3, NODE(9, NODE(8, NULL, NULL), NULL), NODE(7, NULL, NULL))");
}

TEST(TreeTest5, IsFullBinaryTreeTest) {
  ASSERT_FALSE(tree_util->IsFullBinaryTree(case5_root));
}

TEST(TreeTest5, IsCompleteBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsCompleteBinaryTree(case5_root));
}

TEST(TreeTest5, IsBinarySearchTreeTest) {
  ASSERT_FALSE(tree_util->IsBinarySearchTree(case5_root));
}

TEST(TreeTest6, ToStringTest) {
  EXPECT_EQ(case6_root.ToString(),
            "NODE(1, NODE(2, NULL, NODE(6, NULL, NULL)), NODE(3, NULL, NULL))");
}

TEST(TreeTest6, IsFullBinaryTreeTest) {
  ASSERT_FALSE(tree_util->IsFullBinaryTree(case6_root));
}

TEST(TreeTest6, IsCompleteBinaryTreeTest) {
  ASSERT_FALSE(tree_util->IsCompleteBinaryTree(case6_root));
}

TEST(TreeTest6, IsBinarySearchTreeTest) {
  ASSERT_FALSE(tree_util->IsBinarySearchTree(case6_root));
}

TEST(TreeTest7, ToStringTest) {
  EXPECT_EQ(case7_root.ToString(),
            "NODE(4, NODE(3, NULL, NULL), NODE(9, NULL, NULL))");
}

TEST(TreeTest7, IsFullBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsFullBinaryTree(case7_root));
}

TEST(TreeTest7, IsCompleteBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsCompleteBinaryTree(case7_root));
}

TEST(TreeTest7, IsBinarySearchTreeTest) {
  ASSERT_TRUE(tree_util->IsBinarySearchTree(case7_root));
}

TEST(TreeTest8, ToStringTest) {
  EXPECT_EQ(case8_root.ToString(),
  "NODE(3, NODE(2, NULL, NULL), NODE(10, NODE(5, NULL, NULL), NULL))");
}

TEST(TreeTest8, IsFullBinaryTreeTest) {
  ASSERT_FALSE(tree_util->IsFullBinaryTree(case8_root));
}

TEST(TreeTest8, IsCompleteBinaryTreeTest) {
  ASSERT_FALSE(tree_util->IsCompleteBinaryTree(case8_root));
}

TEST(TreeTest8, IsBinarySearchTreeTest) {
  ASSERT_TRUE(tree_util->IsBinarySearchTree(case8_root));
}

TEST(TreeTest9, ToStringTest) {
  EXPECT_EQ(case9_root.ToString(),
            "NODE(6, NODE(4, NODE(3, NULL, NULL), NULL), NODE(9, NULL, NULL))");
}

TEST(TreeTest9, IsFullBinaryTreeTest) {
  ASSERT_FALSE(tree_util->IsFullBinaryTree(case9_root));
}

TEST(TreeTest9, IsCompleteBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsCompleteBinaryTree(case9_root));
}

TEST(TreeTest9, IsBinarySearchTreeTest) {
  ASSERT_TRUE(tree_util->IsBinarySearchTree(case9_root));
}

TEST(TreeTest10, ToStringTest) {
  EXPECT_EQ(case10_root.ToString(), "NODE(1, NULL, NULL)");
}

TEST(TreeTest10, IsFullBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsFullBinaryTree(case10_root));
}

TEST(TreeTest10, IsCompleteBinaryTreeTest) {
  ASSERT_TRUE(tree_util->IsCompleteBinaryTree(case10_root));
}

TEST(TreeTest10, IsBinarySearchTreeTest) {
  ASSERT_TRUE(tree_util->IsBinarySearchTree(case10_root));
}
