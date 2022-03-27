#include "Node.h"
#include <string>

Node::Node(int value, Node* left, Node* right) : value_(value),
left_(left), right_(right) {}

const int Node::value() const {
    return this->value_;
}

const Node* Node::left() const {
    return this->left_;
}

const Node* Node::right() const {
    return this->right_;
}

std::string Node::ToString() const {
    if ( (volatile uintptr_t)this < 0x10 ) {return "NULL";}
    if ( this->left_ == NULL && this->right_== NULL ) {
        return "NODE(" + std::to_string(this->value_) + ", NULL, NULL)";
    }
    return "NODE(" + std::to_string(this->value_) + ", " +
    this->left_->ToString() + ", " + this->right_->ToString() + ")";
}
