#include <iostream>
#include "Node.h"
#include "TreeUtil.h"

int main() {
    Node n1(1, NULL, NULL);
    Node n2(3, NULL, NULL);
    Node n3(6, NULL, NULL);
    Node n4(9, NULL, NULL);
    Node n5(2, &n1, &n2);
    Node n6(8, &n3, &n4);
    Node root(5, &n5, &n6);
    TreeUtil* tree_util = TreeUtil::GetInstance();

    std::cout << root.ToString() << std::endl;
    std::cout << "IsFullBinaryTree? "
        << ((tree_util->IsFullBinaryTree(root) == 1)? "true" : "false")
        << std::endl;
    std::cout << "IsCompleteBinaryTree? "
        << ((tree_util->IsCompleteBinaryTree(root) == 1)? "true" : "false")
        << std::endl;
    std::cout << "IsBinarySearchTree? "
        << ((tree_util->IsBinarySearchTree(root) == 1)? "true" : "false")
        << std::endl;
    return 0;
}
