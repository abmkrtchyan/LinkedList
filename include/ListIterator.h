#ifndef LINKED_LIST_LIST_ITERATOR_H
#define LINKED_LIST_LIST_ITERATOR_H

#include <iostream>
#include "LinkedListNode.h"

template<typename T>
class ForwardIterator {
private:
    const LinkedListNode<T> *currentNode = nullptr;
public:
    ForwardIterator() = default;

    explicit ForwardIterator(const LinkedListNode<T> *node) noexcept: currentNode(node) {}

    ForwardIterator &operator++() {
        if (currentNode != nullptr) {
            currentNode = currentNode->next;
        }
        return *this;
    };

    bool operator!=(const ForwardIterator &other) const noexcept {
        return this->currentNode != other.currentNode;
    };

    bool operator==(const ForwardIterator &other) const noexcept {
        return this->currentNode->data == other.currentNode->data;
    };

    T operator*() const {
        return this->currentNode->data;
    };
};

#endif //LINKED_LIST_LIST_ITERATOR_H
