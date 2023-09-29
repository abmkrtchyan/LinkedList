#include <vector>
#include "algorithm"
#include "LinkedList.h"

void test_iterator();

void test_merge();

int main() {
    test_merge();
    test_iterator();
    return 0;
}

void test_merge() {
    LinkedList<int> list1;
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);

    for (auto it: list1) {
        std::cout << it << " -> ";
    }
    std::cout << "/\n";

    LinkedList<int> list2;
    list2.push_back(2);
    list2.push_back(4);
    list2.push_back(6);
    list2.push_back(8);
    list2.push_back(10);

    for (auto it: list2) {
        std::cout << it << " -> ";
    }
    std::cout << "/\n";

    LinkedList<int> *margeList = LinkedList<int>::merge(&list1, &list2);
    for (auto it: *margeList) {
        std::cout << it << " -> ";
    }
    std::cout << "/\n";
}

void test_iterator() {
    LinkedList<int> list1;
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    for (auto it: list1) {
        std::cout << it << " -> ";
    }
    std::cout << "/\n";

    std::vector<int> arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(10);
    for (auto it: arr) {
        std::cout << it << " -> ";
    }
    std::cout << "/\n";

    auto list_iter = find(list1.begin(), list1.end(), 3);
    if (list_iter != list1.end()) {
        std::cout << *list_iter << std::endl;
    }

    auto vector_iter = find(arr.begin(), arr.end(), 10);
    if (vector_iter != arr.end()) {
        std::cout << *vector_iter << std::endl;
    }
}
