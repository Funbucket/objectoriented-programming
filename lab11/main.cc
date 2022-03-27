#include <iostream>
#include <vector>
#include "IntNode.h"
#include "StringNode.h"
#include "TreeUtil.h"

int main() {
    IntNode in1(nullptr, nullptr, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn1(nullptr, nullptr, "hello");
    StringNode sn2(nullptr, nullptr, "world");
    StringNode sn3(&in1, &in2, "here");
    IntNode in3(&sn1, &sn2, 6);
    IntNode root(&sn3, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    std::vector<const Node*> dfs_result = tree_util->DepthFirstSearch(&root);
    std::vector<const Node*> bfs_result = tree_util->BreathFirstSearch(&root);

    std::cout << "DFS result: " << std::endl;
    for ( const Node* n : dfs_result ) {
        std::cout << n->value() << std::endl;
    }

    std::cout << std::endl;

    std::cout << "BFS result: " << std::endl;
    for ( const Node* n : bfs_result ) {
        std::cout << n->value() << std::endl;
    }



    return 0;
}
