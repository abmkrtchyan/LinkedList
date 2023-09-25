#ifndef LINKED_LIST_LIST_ITERATOR_H
#define LINKED_LIST_LIST_ITERATOR_H

#include <iostream>
#include "LinkedListNode.h"

template<typename T>
class Iterator : public std::iterator<std::forward_iterator_tag, T, T, const T *, T> {
private:
    const LinkedListNode<T> *currentNode = nullptr;
public:
    Iterator() = default;

    explicit Iterator(const LinkedListNode<T> *node) noexcept: currentNode(node) {}

    Iterator &operator++() {
        if (currentNode != nullptr) {
            currentNode = currentNode->next;
        }
        return *this;
    };

    bool operator!=(const Iterator &other) const noexcept {
        return this->currentNode != other.currentNode;
    };

    bool operator==(const Iterator &other) const noexcept {
        return this->currentNode->data == other.currentNode->data;
    };

    T operator*() const {
        return this->currentNode->data;
    };
};

#endif //LINKED_LIST_LIST_ITERATOR_H
