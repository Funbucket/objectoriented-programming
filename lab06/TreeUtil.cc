#include "TreeUtil.h"
#include "Node.h"
#include <queue>

TreeUtil* TreeUtil::instance_ = NULL;

TreeUtil::TreeUtil() {}

TreeUtil* TreeUtil::GetInstance() {
    if ( instance_ == NULL ) {
        instance_ = new TreeUtil();
    }
    return instance_;
}

bool TreeUtil::IsFullBinaryTree(const Node& n) const {
    if ( n.left() == NULL && n.right() == NULL ) return true;

    if ( (n.left()) && (n.right()) ) return (IsFullBinaryTree(*n.left())) &&
        (IsFullBinaryTree(*n.right()));

    return false;
}

bool TreeUtil::IsCompleteBinaryTree(const Node& n) const {
    std::queue<Node> q;
    q.push(n);
    bool flag = false;
    while ( !q.empty() ) {
        Node tmp = q.front();
        q.pop();
        if ( tmp.left() ) {
            if ( flag == true ) return false;
            q.push(*tmp.left());
        } else {flag = true;}

        if ( tmp.right() ) {
            if ( flag == true ) return false;
            q.push(*tmp.right());
        } else {flag = true;}
    }
    return true;
}

bool TreeUtil::IsBinarySearchTree(const Node& n) const {
  return IsCompleteBinaryTree(&n, INT_MIN, INT_MAX);
}

bool TreeUtil::IsCompleteBinaryTree(const Node *n, int min, int max) const {
    if ( n == nullptr ) return true;
    if ( n->value() < min || n->value() > max ) return false;
    return IsCompleteBinaryTree
    (const_cast<Node *>(n->left()), min, n->value() - 1) &&
    IsCompleteBinaryTree(const_cast<Node *>(n->right()), n->value() + 1, max);
}
