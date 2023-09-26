#ifndef LINKEDLIST_ITERATOR_H
#define LINKEDLIST_ITERATOR_H

template<typename C, typename T>
class Iterator {
public:
    virtual Iterator<C, T> &operator++() = 0;

    virtual bool operator!=(const Iterator<C, T> &other) const noexcept = 0;

    virtual bool operator==(const Iterator<C, T> &other) const noexcept = 0;

    virtual const T *getCurrent() const = 0;

    virtual const T &operator*() const = 0;
};

#endif //LINKEDLIST_ITERATOR_H
