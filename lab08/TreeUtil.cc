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

const std::string TreeUtil::ToString(const Node *node) const {
    if ( node != nullptr ) {
        if ( const IntNode* int_node = dynamic_cast<const IntNode*>(node) ) {
            if ( int_node->left() == nullptr && int_node->right() == nullptr ) {
                return "IntNode(" + std::to_string
                (int_node->value()) + ", NULL, NULL)";
            }
            return "IntNode(" + std::to_string(int_node->value()) +
            ", " + ToString(int_node->left()) + ", " +
            ToString(int_node->right()) + ")";
        } else if ( const StringNode* string_node =
                 dynamic_cast<const StringNode*>(node) ) {
            if ( string_node->left() == nullptr &&
                string_node->right() == nullptr ) {
                return "StringNode(" + string_node->value()  + ", NULL, NULL)";
            }
            return "StringNode(" + string_node->value() + ", " +
            ToString(string_node->left()) + ", " +
            ToString(string_node->right()) + ")";
        }
    } else { return "NULL" ; }
}

const std::string TreeUtil::PreOrderTraversal(const Node *node) const {
    std::string result = PreOrderTraversalTmp(node);
    result.resize(result.size()-2);
    return result;
}

const std::string TreeUtil::PreOrderTraversalTmp(const Node *node) const {
    std::string result = "";
    if ( const IntNode *int_node = dynamic_cast<const IntNode *>(node) ) {
        result.append(std::to_string(int_node->value())+", ");
    } else if ( const StringNode *string_node =
               dynamic_cast<const StringNode *>(node) ) {
        result.append(string_node->value()+", ");
    }
    if ( node->left() != nullptr ) {
        result.append(PreOrderTraversalTmp(node->left()));
    }
    if ( node->right() != nullptr ) {
        result.append(PreOrderTraversalTmp(node->right()));
    }
    return result;
}

const std::string TreeUtil::InOrderTraversal(const Node *node) const {
    std::string result = InOrderTraversalTmp(node);
    result.resize(result.size()-2);
    return result;
}

const std::string TreeUtil::InOrderTraversalTmp(const Node *node) const {
    std::string result = "";
    if ( node != nullptr ) {
        result.append(InOrderTraversalTmp(node->left()));
        if ( const IntNode *int_node = dynamic_cast<const IntNode *>(node) ) {
            result.append(std::to_string(int_node->value())+", ");
        } else if ( const StringNode *string_node =
                   dynamic_cast<const StringNode *>(node) ) {
            result.append(string_node->value()+", ");
        }
        result.append(InOrderTraversalTmp(node->right()));
    }
    return result;
}

const std::string TreeUtil::PostOrderTraversal(const Node *node) const {
    std::string result = PostOrderTraversalTmp(node);
    result.resize(result.size()-2);
    return result;
}

const std::string TreeUtil::PostOrderTraversalTmp(const Node *node) const {
    std::string result = "";
    if ( node != nullptr ) {
        result.append(PostOrderTraversalTmp(node->left()));
        result.append(PostOrderTraversalTmp(node->right()));
        if ( const IntNode *int_node = dynamic_cast<const IntNode *>(node) ) {
            result.append(std::to_string(int_node->value())+", ");
        } else if ( const StringNode *string_node =
                   dynamic_cast<const StringNode *>(node) ) {
            result.append(string_node->value()+", ");
        }
    }
    return result;
}
