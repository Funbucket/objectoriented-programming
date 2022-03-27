#ifndef _USERS_JOHAECHANG_OOD_LAB08_STRINGNODE_H_
#define _USERS_JOHAECHANG_OOD_LAB08_STRINGNODE_H_
#include "Node.h"
#include <string>

class StringNode : public Node {
 public:
    StringNode(const Node* left, const Node* right, const std::string value);
    const std::string value() const;

 private:
    const std::string value_;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB08_STRINGNODE_H_

