#include "LinkedList.h"
#include "algorithm"

int main() {
    LinkedList<int> list;
    list.push_back(9);
    list.push_back(8);
    list.push_back(7);
    list.push_back(6);
    list.push_back(4);
    list.push_back(3);
    list.push_back(5);
    list.push_back(7);
    list.push_back(0);
    list.print();
    for (auto it: list) {
        std::cout << it << " -> ";
    }
    auto itr1 = std::find(list.begin(), list.end(), 7);
    auto itr2 = std::find(itr1, list.end(), 7);
    std::cout << "\n" << *itr2;
    return 0;
}
