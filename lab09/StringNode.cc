#include "StringNode.h"
#include <string>

StringNode::StringNode(const Node *left, const Node *right
                       , const std::string value)
: Node(left, right), value_(value) {}
std::string StringNode::value() const { return value_; }
std::string StringNode::ToString() const {
    if ( this->left() == nullptr && this->right() == nullptr ) {
        return "StringNode(" + this->value() + ", NULL, NULL)";
    }
    if ( this->left() == nullptr ) {
        return "StringNode(" + this->value() +
        ", NULL, " + this->right()->ToString() + ")";
    }
    if ( this->right() == nullptr ) {
        return "StringNode(" + this->value() +
        ", " + this->left()->ToString() + ", NULL)";
    }
    return "StringNode(" + this->value() +
    ", " + this->left()->ToString() + ", " + this->right()->ToString() + ")";
}
