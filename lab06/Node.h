#ifndef _USERS_JOHAECHANG_OOD_LAB06_NODE_H_
#define _USERS_JOHAECHANG_OOD_LAB06_NODE_H_
#include <string>
class Node {
 public:
    explicit Node(int value, Node* left, Node* right);
    const int value() const;
    const Node* left() const;
    const Node* right() const;
    std::string ToString() const;

 private:
    const int value_;
    const Node* left_;
    const Node* right_;
};
#endif  // _USERS_JOHAECHANG_OOD_LAB06_NODE_H_
