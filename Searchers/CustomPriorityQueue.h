//
// Created by yekaterina on 10/01/2020.
//

#ifndef MILESTONE_2_CUSTOMPRIORITYQUEUE_H
#define MILESTONE_2_CUSTOMPRIORITYQUEUE_H

#include <queue>

template<
        class T,
        class Container = std::vector<T>,
        class Compare = std::less<typename Container::value_type>
>
class CustomPriorityQueue : public std::priority_queue<T, Container, Compare> {
public:
    typedef typename
    std::priority_queue<
            T,
            Container,
            Compare>::container_type::const_iterator const_iterator;

    const_iterator find(const T &val) const {
        auto first = this->c.cbegin();
        auto last = this->c.cend();
        while (first != last) {
            if (*first == val) return first;
            ++first;
        }
        return last;
    }

    bool contains(const T &val) const {
        return find(val) != this->c.cend();
    }
};

#endif //MILESTONE_2_CUSTOMPRIORITYQUEUE_H
