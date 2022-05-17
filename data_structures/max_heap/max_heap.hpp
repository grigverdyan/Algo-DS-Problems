#ifndef HEAP_H
#define HEAP_H

#include <vector>

namespace Heap {
    template<typename T>
    class MaxHeap {
        public:
            MaxHeap();
            void            Insert(T element);
            void            DeleteMin();
            void            DisplayHeap();
            void            HeapSort();
            T               ExtractMin();
            size_t          Size();
            ~MaxHeap();
        private:
            std::vector<T>  heap;
            size_t          left(size_t parent);
            size_t          right(size_t parent);
            size_t          parent(size_t child);
            void            heapifyup(size_t index);
            void            heapifydown(size_t index);
    };
}

#include "min_heap_impl.hpp"

#endif /* HEAP_H */