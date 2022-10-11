#pragma once

#include <iostream>
#include "LinkedListNode.h"

template<class T>
class LinkedList {
private:
    LinkedListNode<T> *head;
    LinkedListNode<T> *tail;
public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    void insert(LinkedListNode<T> *node);

    void insert(const T &data);

    static void merge(LinkedList<T> &, LinkedList<T> &);

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
void LinkedList<T>::insert(LinkedListNode<T> *node) {
    if (!this->head) {
        this->head = node;
    } else {
        this->tail->next = node;
    }

    this->tail = node;
}

template<class T>
void LinkedList<T>::insert(const T &data) {
    auto *node = new LinkedListNode<T>(data);
    insert(node);
}

template<class T>
void LinkedList<T>::merge(LinkedList<T> &list1, LinkedList<T> &list2) {
    LinkedListNode<T> *node1 = list1.head;
    LinkedListNode<T> *node2 = list2.head;
    LinkedList<T> mergedList;
    while (node1 && node2) {
        if (node1->data <= node2->data) {
            mergedList.insert(node1->data);
            node1 = node1->next;
        } else {
            mergedList.insert(node2->data);
            node2 = node2->next;
        }
    }
    while (node1) {
        mergedList.insert(node1->data);
        node1 = node1->next;
    }
    while (node2) {
        mergedList.insert(node2->data);
        node2 = node2->next;
    }
}