#ifndef PR_QUEUE_H
#define PR_QUEUE_H

#include <vector>

namespace Pr_Qu {

    template <typename T>
    class Prior_Queue {
        public:
            Prior_Queue()   {}
            ~Prior_Queue()  {}
            void            insert(T element);
            void            changePriority(size_t index, T elem);
            void            remove(size_t index);
            void            swap(T& elem1, T&elem2);
            void            display();
            T               extractMax();
            T               getMax();
            size_t          getSize();
        private:
            std::vector<T>  p_queue;
            size_t          parent(size_t index);
            size_t          left(size_t index);
            size_t          right(size_t index);
            void            shiftUp(size_t index);
            void            shiftDown(size_t index);

    };
}

#include "priority_queue_impl.hpp"

#endif  /* PR_QUEUE_H */