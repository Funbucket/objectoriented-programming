#ifndef _USERS_JOHAECHANG_OOD_LAB08_TREEUTIL_H_
#define _USERS_JOHAECHANG_OOD_LAB08_TREEUTIL_H_
#include <string>
#include "Node.h"

class TreeUtil {
 public:
    static TreeUtil* GetInstance();
    const std::string ToString(const Node* node) const;
    const std::string PreOrderTraversalTmp(const Node* node) const;
    const std::string PreOrderTraversal(const Node* node) const;
    const std::string InOrderTraversalTmp(const Node* node) const;
    const std::string InOrderTraversal(const Node* node) const;
    const std::string PostOrderTraversalTmp(const Node* node) const;
    const std::string PostOrderTraversal(const Node* node) const;

 private:
    TreeUtil();
    static TreeUtil* instance_;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB08_TREEUTIL_H_
