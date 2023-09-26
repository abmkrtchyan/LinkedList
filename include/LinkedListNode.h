#ifndef LINKEDLIST_LINKEDLISTNODE_H
#define LINKEDLIST_LINKEDLISTNODE_H

#include <iostream>

template<class T>
class LinkedListNode {
public:
    T data;
    LinkedListNode *next;

    LinkedListNode(const LinkedListNode &node) : data(node.data), next(node.next) {}

    explicit LinkedListNode(const T &data) : data(data), next(nullptr) {}

    void print() {
        std::cout << this->data << " -> ";
    }
};

#endif //LINKEDLIST_LINKEDLISTNODE_H
