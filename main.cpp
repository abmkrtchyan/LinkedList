#include "LinkedList.h"
#include "algorithm"

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
    for (auto it: list) {
        std::cout << it << " -> ";
    }
    auto itr1 = std::find(list.begin(), list.end(), 7);
    auto itr2 = std::find(itr1, list.end(), 7);
    std::cout << "\n" << *itr2;
    return 0;
}
