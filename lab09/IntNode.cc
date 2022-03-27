#include "IntNode.h"
#include <string>

IntNode::IntNode(const Node *left, const Node *right, const int value)
: Node(left, right), value_(value) {}
std::string IntNode::value() const {return std::to_string(this->value_);}
std::string IntNode::ToString() const {
    if ( this->left() == nullptr && this->right() == nullptr ) {
        return "IntNode(" + this->value() + ", NULL, NULL)";
    }
    if ( this->left() == nullptr ) {
        return "IntNode("+ this->value() +
        ", NULL, " + this->right()->ToString() + ")";
    }
    if ( this->right() == nullptr ) {
        return "IntNode(" + this->value() +
        ", "+this->left()->ToString() + ", NULL)";
    }
    return "IntNode(" + this->value() + ", " +
    this->left()->ToString() + ", " + this->right()->ToString() + ")";
}
