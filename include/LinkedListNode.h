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

    bool operator<(const LinkedListNode<T> &other) {
        return this->data < other.data;
    }

    bool operator==(const LinkedListNode<T> &other) const {
        return this->data == other.data;
    }

    T &getValue() {
        return this->data;
    }

    void print() {
        std::cout << this->data << " -> ";
    }
};

#endif //LINKEDLIST_LINKEDLISTNODE_H
