#ifndef _USERS_JOHAECHANG_OOD_LAB08_NODE_H_
#define _USERS_JOHAECHANG_OOD_LAB08_NODE_H_

class Node {
 public:
    Node(const Node* left, const Node* right);
    const Node* left() const;
    const Node* right() const;
    virtual ~Node();

 private:
    const Node* left_;
    const Node* right_;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB08_NODE_H_

