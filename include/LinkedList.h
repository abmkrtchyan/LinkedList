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
    ForwardIterator<T> begin() const {
        return ForwardIterator<T>(this->head);
    };

    ForwardIterator<T> end() const {
        return ForwardIterator<T>();
    };

    LinkedList() : head(nullptr), tail(nullptr) {}

    void push_back(LinkedListNode<T> *node);

    void push_back(const T &data);

    static void merge(LinkedList<T> *, LinkedList<T> *);

    void print() {
        LinkedListNode<T> *node = this->head;
        while (node) {
            node->print();
            node = node->next;
        }
        std::cout << "/" << std::endl;
    }
};


template<class T>
void LinkedList<T>::push_back(LinkedListNode<T> *node) {
    if (!this->head) {
        this->head = node;
    } else {
        this->tail->next = node;
    }
    this->tail = node;
}

template<class T>
void LinkedList<T>::push_back(const T &data) {
    auto *node = new LinkedListNode<T>(data);
    push_back(node);
}

template<class T>
void LinkedList<T>::merge(LinkedList<T> *list1, LinkedList<T> *list2) {
    LinkedListNode<T> *node1 = list1->head;
    LinkedListNode<T> *node2 = list2->head;
    LinkedList<T> mergedList;
    while (node1 && node2) {
        if (node1->data <= node2->data) {
            mergedList.push_back(node1->data);
            node1 = node1->next;
        } else {
            mergedList.push_back(node2->data);
            node2 = node2->next;
        }
    }
    while (node1) {
        mergedList.push_back(node1->data);
        node1 = node1->next;
    }
    while (node2) {
        mergedList.push_back(node2->data);
        node2 = node2->next;
    }
}