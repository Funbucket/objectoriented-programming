#ifndef _USERS_JOHAECHANG_OOD_LAB06_TREEUTIL_H_
#define _USERS_JOHAECHANG_OOD_LAB06_TREEUTIL_H_
#include "Node.h"
class TreeUtil {
 public:
    static TreeUtil* GetInstance();
    bool IsFullBinaryTree(const Node& n) const;
    bool IsCompleteBinaryTree(const Node& n) const;
    bool IsCompleteBinaryTree(const Node *n, int min, int max) const;
    bool IsBinarySearchTree(const Node& n) const;

 private:
    TreeUtil();
    static TreeUtil* instance_;
};
#endif  // _USERS_JOHAECHANG_OOD_LAB06_TREEUTIL_H_

