#include "LinkedList.h"

int main() {
    LinkedList<int> list;
    list.insert(9);
    list.insert(8);
    list.insert(7);
    list.insert(6);
    list.insert(4);
    list.insert(3);
    list.insert(5);
    list.insert(7);
    list.insert(0);
    list.print();
    for (const LinkedListNode<int> *it: list) {
        std::cout << it->data << " -> ";
    }
    return 0;
}
