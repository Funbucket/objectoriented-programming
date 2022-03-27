#include "IntNode.h"
#include <string>

IntNode::IntNode(const Node *left, const Node *right, const int value)
: Node(left, right), value_(value) {}
std::string IntNode::value() const {
    return std::to_string(this->value_);
}
