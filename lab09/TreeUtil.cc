#include "TreeUtil.h"
#include "IntNode.h"
#include "StringNode.h"
#include <string>

TreeUtil* TreeUtil::instance_ = nullptr;

TreeUtil::TreeUtil() {}

TreeUtil * TreeUtil::GetInstance() {
    if ( instance_ == nullptr ) {
        instance_ = new TreeUtil;
    }
    return instance_;
}

const std::string TreeUtil::PreOrderTraversal(const Node *node) const {
    std::string result = PreOrderTraversalHelper(node);
    result.resize(result.size()-2);
    return result;
}

const std::string TreeUtil::PreOrderTraversalHelper(const Node *node) const {
    std::string result = "";
    result.append(node->value() + ", ");
    if ( node->left() != nullptr ) {
        result.append(PreOrderTraversalHelper(node->left()));
    }
    if ( node->right() != nullptr ) {
        result.append(PreOrderTraversalHelper(node->right()));
    }
    return result;
}

const std::string TreeUtil::InOrderTraversal(const Node *node) const {
    std::string result = InOrderTraversalHelper(node);
    result.resize(result.size()-2);
    return result;
}

const std::string TreeUtil::InOrderTraversalHelper(const Node *node) const {
    std::string result = "";
    if ( node != nullptr ) {
        result.append(InOrderTraversalHelper(node->left()));
        result.append(node->value() + ", ");
        result.append(InOrderTraversalHelper(node->right()));
    }
    return result;
}

const std::string TreeUtil::PostOrderTraversal(const Node *node) const {
    std::string result = PostOrderTraversalHelper(node);
    result.resize(result.size()-2);
    return result;
}

const std::string TreeUtil::PostOrderTraversalHelper(const Node *node) const {
    std::string result = "";
    if ( node != nullptr ) {
        result.append(PostOrderTraversalHelper(node->left()));
        result.append(PostOrderTraversalHelper(node->right()));
        result.append(node->value() + ", ");
    }
    return result;
}
