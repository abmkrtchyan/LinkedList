#ifndef LINKED_LIST_LIST_ITERATOR_H
#define LINKED_LIST_LIST_ITERATOR_H

#include "Iterator.h"

template<typename T, typename value_type>
class ForwardIterator : public Iterator<T, value_type> {
private:
    T *currentNode;
public:
    explicit ForwardIterator(T *node = nullptr) noexcept: currentNode(node) {}

    value_type &operator*() override {
        return (this->currentNode->getValue());
    };

    const value_type &operator*() const override {
        return (this->currentNode->getValue());
    };


    T *operator->() override {
        return currentNode;
    };

    ForwardIterator<T, value_type> &operator=(const ForwardIterator<T, value_type> &other) noexcept {
        if (this != &other) {
            currentNode = other.currentNode;
        }
        return *this;
    }


    Iterator<T, value_type> &operator++() override {
        if (currentNode != nullptr) {
            currentNode = currentNode->next;
        }
        return *this;
    };

    bool operator!=(const Iterator<T, value_type> &other) const noexcept override {
        return this->getCurrent() != other.getCurrent();
    };

    bool operator==(const Iterator<T, value_type> &other) const noexcept override {
        return this->getCurrent() == other.getCurrent();
    };

    T *getCurrent() const override {
        return this->currentNode;
    };
};

#endif //LINKED_LIST_LIST_ITERATOR_H
