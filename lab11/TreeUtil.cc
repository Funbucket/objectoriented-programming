#include "TreeUtil.h"
#include <vector>
#include <stack>
#include <queue>

TreeUtil* TreeUtil::instance_ = nullptr;

TreeUtil::TreeUtil() {}

TreeUtil * TreeUtil::GetInstance() {
    if ( instance_ == nullptr ) {
        instance_ = new TreeUtil;
    }
    return instance_;
}

const std::vector<const Node*> TreeUtil::DepthFirstSearch(const Node *node)
const {
    std::vector<const Node*> v;
    std::stack<const Node*> s;
    s.push(node);
    while ( !s.empty() ) {
        const Node* curr = s.top();
        v.push_back(curr);
        s.pop();
        if ( curr->right() != nullptr ) {
            s.push(curr->right());
        }
        if ( curr->left() != nullptr ) {
            s.push(curr->left());
        }
    }
    return v;
}

const std::vector<const Node*> TreeUtil::BreathFirstSearch(const Node *node)
const {
    std::vector<const Node*> v;
    std::queue<const Node*> q;
    q.push(node);
    while ( !q.empty() ) {
        const Node* curr = q.front();
        v.push_back(curr);
        q.pop();
        if ( curr->left() != nullptr ) {
            q.push(curr->left());
        }
        if ( curr->right() != nullptr ) {
            q.push(curr->right());
        }
    }
    return v;
}
