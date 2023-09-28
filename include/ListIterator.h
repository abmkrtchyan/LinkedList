#ifndef LINKED_LIST_LIST_ITERATOR_H
#define LINKED_LIST_LIST_ITERATOR_H

#include "Iterator.h"

template<typename T>
class ForwardIterator : public Iterator<T> {
private:
    T *currentNode;
public:
    explicit ForwardIterator(T *node = nullptr) noexcept: currentNode(node) {}

    T &operator*() override {
        return (*this->currentNode);
    };

    const T &operator*() const override {
        return (*this->currentNode);
    };


    T *operator->() override {
        return currentNode;
    };

    ForwardIterator<T> &operator=(const ForwardIterator<T> &other) noexcept {
        if (this != &other) {
            currentNode = other.currentNode;
        }
        return *this;
    }


    Iterator<T> &operator++() override {
        if (currentNode != nullptr) {
            currentNode = currentNode->next;
        }
        return *this;
    };

    bool operator!=(const Iterator<T> &other) const noexcept override {
        return this->getCurrent() != other.getCurrent();
    };

    bool operator==(const Iterator<T> &other) const noexcept override {
        return this->getCurrent() == other.getCurrent();
    };

    T *getCurrent() const override {
        return this->currentNode;
    };
};

#endif //LINKED_LIST_LIST_ITERATOR_H
