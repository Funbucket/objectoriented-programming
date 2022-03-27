#ifndef _USERS_JOHAECHANG_OOD_LAB12_NODE_H_
#define _USERS_JOHAECHANG_OOD_LAB12_NODE_H_
#include <string>
#include <array>

template<class T, int N>
class Node{
 public:
    explicit Node(const T value);
    bool AddChild(Node<T, N>* n);
    const T value() const;
    const std::array<Node<T, N>*, N>& children() const;

 private:
    const T value_;
    std::array<Node<T, N>*, N> children_;
    int num_of_child_;
};

#endif  // _USERS_JOHAECHANG_OOD_LAB12_NODE_H_
