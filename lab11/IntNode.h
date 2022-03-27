#ifndef _USERS_JOHAECHANG_OOD_LAB11_INTNODE_H_
#define _USERS_JOHAECHANG_OOD_LAB11_INTNODE_H_
#include <string>
#include "Node.h"

class IntNode : public Node {
 public:
    IntNode(const Node* left, const Node* right, const int value);
    std::string value() const;
 private:
    const int value_;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB11_INTNODE_H_
