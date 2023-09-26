#include "LinkedList.h"
#include "algoritms.h"

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
    return 0;
}
