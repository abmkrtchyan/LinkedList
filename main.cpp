#include "LinkedList.h"

int main() {
    LinkedList<int> list;
    list.print();
    list.insert(9);
    list.print();
    list.insert(8);
    list.print();
    list.insert(7);
    list.print();
    list.insert(6);
    list.print();
    list.insert(4);
    list.print();
    list.insert(3);
    list.print();
    list.insert(5);
    list.print();
    list.insert(7);
    list.print();
    list.insert(0);
    list.print();
    for (const auto &item: list) {
        std::cout << item << " -> ";
    }
    return 0;
}
