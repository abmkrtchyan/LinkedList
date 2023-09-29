#ifndef LINKEDLIST_ALGORITHM_H
#define LINKEDLIST_ALGORITHM_H

template<class InputIterator, class T>
InputIterator find(InputIterator first, InputIterator last, const T &val) {
    while (first != last) {
        if (first->data == val) return first;
        ++first;
    }
    return last;
}

#endif //LINKEDLIST_ALGORITHM_H
