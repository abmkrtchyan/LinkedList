#ifndef LINKED_LIST_LIST_ITERATOR_H
#define LINKED_LIST_LIST_ITERATOR_H

#include <iostream>
#include "LinkedListNode.h"
#include "Iterator.h"

template<typename T>
class ForwardIterator : public Iterator<T> {
private:
    const LinkedListNode<T> *currentNode;
public:
    explicit ForwardIterator(const LinkedListNode<T> *node = nullptr) noexcept: currentNode(node) {}

    Iterator<T> &operator++() override {
        if (currentNode != nullptr) {
            currentNode = currentNode->next;
        }
        return *this;
    };

    bool operator!=(const Iterator<T> &other) const noexcept override {
        return **this != *other;
    };

    bool operator==(const Iterator<T> &other) const noexcept override {
        return this->getCurrent() == other.getCurrent();
    };

    LinkedListNode<T> *getCurrent() const override {
        return this->currentNode;
    };

    const T &operator*() const override {
        return this->currentNode->data;
    };
};

#endif //LINKED_LIST_LIST_ITERATOR_H
