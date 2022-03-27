#ifndef _USERS_JOHAECHANG_OOD_LAB09_TREEUTIL_H_
#define _USERS_JOHAECHANG_OOD_LAB09_TREEUTIL_H_
#include <string>
#include "Node.h"

class TreeUtil {
 public:
    static TreeUtil* GetInstance();
    const std::string PreOrderTraversalHelper(const Node* node) const;
    const std::string PreOrderTraversal(const Node* node) const;
    const std::string InOrderTraversalHelper(const Node* node) const;
    const std::string InOrderTraversal(const Node* node) const;
    const std::string PostOrderTraversalHelper(const Node* node) const;
    const std::string PostOrderTraversal(const Node* node) const;

 private:
    TreeUtil();
    static TreeUtil* instance_;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB09_TREEUTIL_H_

