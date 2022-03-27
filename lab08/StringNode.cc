#include "StringNode.h"
#include <string>

StringNode::StringNode(const Node *left, const Node *right, const std::string
                       value): Node(left, right), value_(value) {}
const std::string StringNode::value() const { return value_; }


