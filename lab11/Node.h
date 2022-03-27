#ifndef _USERS_JOHAECHANG_OOD_LAB11_NODE_H_
#define _USERS_JOHAECHANG_OOD_LAB11_NODE_H_
#include <string>

class Node {
 public:
    Node(const Node* left, const Node* right);
    const Node* left() const;
    const Node* right() const;
    virtual std::string value() const = 0;
    virtual ~Node();
 private:
    const Node* left_;
    const Node* right_;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB11_NODE_H_
