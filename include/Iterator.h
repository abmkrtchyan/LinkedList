#ifndef LINKEDLIST_ITERATOR_H
#define LINKEDLIST_ITERATOR_H

template<typename T, typename value_type>
class Iterator {
public:
    virtual Iterator<T, value_type> &operator++() = 0;

    virtual bool operator!=(const Iterator<T, value_type> &other) const noexcept = 0;

    virtual bool operator==(const Iterator<T, value_type> &other) const noexcept = 0;

    virtual const T *getCurrent() const = 0;

    virtual value_type &operator*() = 0;

    virtual T *operator->() = 0;

    virtual const value_type &operator*() const = 0;
};

#endif //LINKEDLIST_ITERATOR_H
