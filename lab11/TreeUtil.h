#ifndef _USERS_JOHAECHANG_OOD_LAB11_TREEUTIL_H_
#define _USERS_JOHAECHANG_OOD_LAB11_TREEUTIL_H_
#include <vector>
#include "Node.h"

class TreeUtil {
 public:
    static TreeUtil* GetInstance();
    const std::vector<const Node*> DepthFirstSearch(const Node* node) const;
    const std::vector<const Node*> BreathFirstSearch(const Node* node) const;
 private:
    TreeUtil();
    static TreeUtil* instance_;
};
#endif  // _USERS_JOHAECHANG_OOD_LAB11_TREEUTIL_H_
