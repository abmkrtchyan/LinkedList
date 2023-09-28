#include "algorithm"
#include "LinkedList.h"

int main() {
    LinkedList<int> list1;
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);

    for (auto &it: list1) {
        std::cout << it.data << " -> ";
    }
    std::cout << "/\n";

    LinkedList<int> list2;
    list2.push_back(2);
    list2.push_back(4);
    list2.push_back(6);
    list2.push_back(8);
    list2.push_back(10);

    for (auto &it: list2) {
        std::cout << it.data << " -> ";
    }
    std::cout << "/\n";

    LinkedList<int> *margeList = LinkedList<int>::merge(&list1, &list2);
    for (auto &it: *margeList) {
        std::cout << it.data << " -> ";
    }
    std::cout << "/\n";

    std::find(list1.begin(), list1.end(), 1);
    return 0;
}
