#ifndef LINKEDLIST_ITERATOR_H
#define LINKEDLIST_ITERATOR_H

template<typename T>
class Iterator {
public:
    virtual Iterator<T> &operator++() {};

    virtual bool operator!=(const Iterator<T> &other) const noexcept {};

    virtual bool operator==(const Iterator<T> &other) const noexcept {};

    virtual const T *getCurrent() const {};

    virtual T &operator*() {};

    virtual T *operator->() {};

    virtual const T &operator*() const {};
};

#endif //LINKEDLIST_ITERATOR_H
