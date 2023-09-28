#pragma once

#include <iostream>
#include "LinkedListNode.h"
#include "ListIterator.h"

template<typename T>
class LinkedList {
private:
    LinkedListNode<T> *head;
    LinkedListNode<T> *tail;

public:
    ForwardIterator<LinkedListNode<T>> begin() const {
        return ForwardIterator<LinkedListNode<T>>(this->head);
    };

    ForwardIterator<LinkedListNode<T>> end() const {
        return ForwardIterator<LinkedListNode<T>>();
    };

    LinkedList<T>() : head(nullptr), tail(nullptr) {}

    void push_back(LinkedListNode<T> *node);

    void push_back(const T &data);

    static LinkedList<T> *merge(LinkedList<T> *, LinkedList<T> *);

    void print() {
        LinkedListNode<T> *node = this->head;
        while (node) {
            node->print();
            node = node->next;
        }
        std::cout << "/" << std::endl;
    }
};

template<typename T>
void LinkedList<T>::push_back(LinkedListNode<T> *node) {
    if (!this->head) {
        this->head = node;
    } else {
        this->tail->next = node;
    }
    this->tail = node;
}

template<typename T>
void LinkedList<T>::push_back(const T &data) {
    auto *node = new LinkedListNode<T>(data);
    push_back(node);
}

template<typename T>
LinkedList<T> *LinkedList<T>::merge(LinkedList<T> *list1, LinkedList<T> *list2) {
    LinkedListNode<T> *node1 = list1->head;
    LinkedListNode<T> *node2 = list2->head;
    auto mergedList = new LinkedList<T>();
    while (node1 && node2) {
        if (node1->data <= node2->data) {
            mergedList->push_back(node1->data);
            node1 = node1->next;
        } else {
            mergedList->push_back(node2->data);
            node2 = node2->next;
        }
    }
    while (node1) {
        mergedList->push_back(node1->data);
        node1 = node1->next;
    }
    while (node2) {
        mergedList->push_back(node2->data);
        node2 = node2->next;
    }
    return mergedList;
}