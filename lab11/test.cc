#include <vector>
#include <string>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "IntNode.h"
#include "StringNode.h"
#include "Node.h"
#include "TreeUtil.h"

TreeUtil* tree_util = TreeUtil::GetInstance();

StringNode test1_sn1(nullptr, nullptr, "hello");
StringNode test1_sn2(nullptr, nullptr, "world");
StringNode test1_root(&test1_sn1, &test1_sn2, "here");

TEST(test1, DepthFirstSearchTest) {
    std::vector<const Node*> dfs_result =
    tree_util->DepthFirstSearch(&test1_root);
    ASSERT_THAT(dfs_result, testing::ElementsAre(
&test1_root, &test1_sn1, &test1_sn2));
}

TEST(test1, BreathFirstSearchTest) {
    std::vector<const Node*> bfs_result =
    tree_util->BreathFirstSearch(&test1_root);
    ASSERT_THAT(bfs_result, testing::ElementsAre(
&test1_root, &test1_sn1, &test1_sn2));
}

IntNode test2_in1(nullptr, nullptr, 2);
IntNode test2_in2(nullptr, nullptr, 3);
IntNode test2_root(&test2_in1, &test2_in2, 1);

TEST(test2, DepthFirstSearchTest) {
    std::vector<const Node*> dfs_result =
    tree_util->DepthFirstSearch(&test2_root);
    ASSERT_THAT(dfs_result, testing::ElementsAre(
&test2_root, &test2_in1, &test2_in2));
}

TEST(test2, BreathFirstSearchTest) {
    std::vector<const Node*> bfs_result =
    tree_util->BreathFirstSearch(&test2_root);
    ASSERT_THAT(bfs_result, testing::ElementsAre(
&test2_root, &test2_in1, &test2_in2));
}

IntNode test3_in1(nullptr, nullptr, 1);
IntNode test3_in2(nullptr, nullptr, 2);
StringNode test3_root(&test3_in1, &test3_in2, "hello");

TEST(test3, DepthFirstSearchTest) {
    std::vector<const Node*> dfs_result =
    tree_util->DepthFirstSearch(&test3_root);
    ASSERT_THAT(dfs_result, testing::ElementsAre(
&test3_root, &test3_in1, &test3_in2));
}

TEST(test3, BreathFirstSearchTest) {
    std::vector<const Node*> bfs_result =
    tree_util->BreathFirstSearch(&test3_root);
    ASSERT_THAT(bfs_result, testing::ElementsAre(
&test3_root, &test3_in1, &test3_in2));
}

StringNode test4_in1(nullptr, nullptr, "hello");
IntNode test4_in2(nullptr, nullptr, 2);
IntNode test4_root(&test4_in1, &test4_in2, 1);

TEST(test4, DepthFirstSearchTest) {
    std::vector<const Node*> dfs_result =
    tree_util->DepthFirstSearch(&test4_root);
    ASSERT_THAT(dfs_result, testing::ElementsAre(
&test4_root, &test4_in1, &test4_in2));
}

TEST(test4, BreathFirstSearchTest) {
    std::vector<const Node*> bfs_result =
    tree_util->BreathFirstSearch(&test4_root);
    ASSERT_THAT(bfs_result, testing::ElementsAre(
&test4_root, &test4_in1, &test4_in2));
}

StringNode test5_root(nullptr, nullptr, "hello");

TEST(test5, DepthFirstSearchTest) {
    std::vector<const Node*> dfs_result =
    tree_util->DepthFirstSearch(&test5_root);
    ASSERT_THAT(dfs_result, testing::ElementsAre(&test5_root));
}

TEST(test5, BreathFirstSearchTest) {
    std::vector<const Node*> bfs_result =
    tree_util->BreathFirstSearch(&test5_root);
    ASSERT_THAT(bfs_result, testing::ElementsAre(&test5_root));
}

StringNode test6_sn1(nullptr, nullptr, "world");
StringNode test6_root(&test6_sn1, nullptr, "hello");

TEST(test6, DepthFirstSearchTest) {
    std::vector<const Node*> dfs_result =
    tree_util->DepthFirstSearch(&test6_root);
    ASSERT_THAT(dfs_result, testing::ElementsAre(
&test6_root, &test6_sn1));
}

TEST(test6, BreathFirstSearchTest) {
    std::vector<const Node*> bfs_result =
    tree_util->BreathFirstSearch(&test6_root);
    ASSERT_THAT(bfs_result, testing::ElementsAre(
&test6_root, &test6_sn1));
}


StringNode test7_sn1(nullptr, nullptr, "world");
StringNode test7_root(nullptr, &test7_sn1, "hello");

TEST(test7, DepthFirstSearchTest) {
    std::vector<const Node*> dfs_result =
    tree_util->DepthFirstSearch(&test7_root);
    ASSERT_THAT(dfs_result, testing::ElementsAre(
&test7_root, &test7_sn1));
}

TEST(test7, BreathFirstSearchTest) {
    std::vector<const Node*> bfs_result =
    tree_util->BreathFirstSearch(&test7_root);
    ASSERT_THAT(bfs_result, testing::ElementsAre(
&test7_root, &test7_sn1));
}

StringNode test8_sn1(nullptr, nullptr, "world");
StringNode test8_sn2(&test8_sn1, nullptr, "hello");
IntNode test8_root(&test8_sn2, nullptr, 1);

TEST(test8, DepthFirstSearchTest) {
    std::vector<const Node*> dfs_result =
    tree_util->DepthFirstSearch(&test8_root);
    ASSERT_THAT(dfs_result, testing::ElementsAre(
&test8_root, &test8_sn2, &test8_sn1));
}

TEST(test8, BreathFirstSearchTest) {
    std::vector<const Node*> bfs_result =
    tree_util->BreathFirstSearch(&test8_root);
    ASSERT_THAT(bfs_result, testing::ElementsAre(
&test8_root, &test8_sn2, &test8_sn1));
}


IntNode test9_in1(nullptr, nullptr, 1);
IntNode test9_in2(nullptr, &test9_in1, 2);
StringNode test9_sn1(nullptr, nullptr, "world");
StringNode test9_root(&test9_sn1, &test9_in2, "hello");

TEST(test9, DepthFirstSearchTest) {
    std::vector<const Node*> dfs_result =
    tree_util->DepthFirstSearch(&test9_root);
    ASSERT_THAT(dfs_result, testing::ElementsAre(
&test9_root, &test9_sn1, &test9_in2, &test9_in1));
}

TEST(test9, BreathFirstSearchTest) {
    std::vector<const Node*> bfs_result =
    tree_util->BreathFirstSearch(&test9_root);
    ASSERT_THAT(bfs_result, testing::ElementsAre(
&test9_root, &test9_sn1, &test9_in2, &test9_in1));
}


IntNode test10_in1(nullptr, nullptr, 2);
StringNode test10_sn1(nullptr, nullptr, "world");
StringNode test10_sn2(nullptr, &test10_in1, "here");
IntNode test10_in2(nullptr, &test10_sn1, 1);
StringNode test10_root(&test10_sn2, &test10_in2, "hello");

TEST(test10, DepthFirstSearchTest) {
    std::vector<const Node*> dfs_result =
    tree_util->DepthFirstSearch(&test10_root);
    ASSERT_THAT(dfs_result, testing::ElementsAre(
&test10_root, &test10_sn2, &test10_in1, &test10_in2, &test10_sn1));
}

TEST(test10, BreathFirstSearchTest) {
    std::vector<const Node*> bfs_result =
    tree_util->BreathFirstSearch(&test10_root);
    ASSERT_THAT(bfs_result, testing::ElementsAre(
&test10_root, &test10_sn2, &test10_in2, &test10_in1, &test10_sn1));
}


