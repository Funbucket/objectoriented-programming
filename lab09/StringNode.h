#ifndef _USERS_JOHAECHANG_OOD_LAB09_STRINGNODE_H_
#define _USERS_JOHAECHANG_OOD_LAB09_STRINGNODE_H_
#include <string>
#include "Node.h"

class StringNode : public Node {
 public:
    StringNode(const Node* left, const Node* right, const std::string value);
    std::string value() const;
    std::string ToString() const;

 private:
    const std::string value_;
};


#endif  // _USERS_JOHAECHANG_OOD_LAB09_STRINGNODE_H_

