#include <iostream>
#include <vector>

template <typename T>
size_t  Heap::MinHeap<T>::left(size_t parent)
{
    return (parent << 1);
}

template <typename T>
size_t  Heap::MinHeap<T>::right(size_t parent)
{
    return (parent << 1 + 1);
}

template <typename T>
size_t  Heap::MinHeap<T>::parent(size_t child)
{
    return (child >> 1);
}

template <typename T>
size_t  Heap::MinHeap<T>::Size()
{
    return heap.size();
}

template <typename T>
void    Heap::MinHeap<T>::Insert(T element)
{
    heap.push_back(element);
    heapifyup(heap.size() - 1);
}

template <typename T>
void    Heap::MinHeap<T>::DeleteMin()
{
    if (!heap.size())
    {
        std::cout << "Min Heap is empty!\n";
        return ;
    }
    heap[0] = heap.at(heap.size() - 1);
    heap.pop_back();
    heapifydown(0);
    std::cout << "Element deleted in Min Heap\n";
}

template <typename T>
T  Heap::MinHeap<T>::ExtractMin()
{
    if (!heap.size())
        return (-1);
    return heap.front();
}

template <typename T>
void    Heap::MinHeap<T>::DisplayHeap()
{
    std::cout << "Min heap : ";   
    for (size_t i = 0; i < heap.size(); i++)
        std::cout << heap[i] << " ";
    std::cout << std::endl;
}

template <typename T>
void    Heap::MinHeap<T>::heapifyup(size_t i)
{
    if (i >= 0 && parent(i) >= 0 && heap[parent(i)] > heap[i])
    {
        T   temp = heap[i];
        heap[i] = heap[parent(i)];
        heap[parent(i)] = temp;
        heapifyup(parent(i));
    }
}

template <typename T>
void    Heap::MinHeap<T>::heapifydown(size_t i)
{
    size_t  child1 = left(i);
    size_t  child2 = right(i);
    if (child1 >= 0 && child2 >= 0
        && heap[child1] > heap[child2])
        child1 = child2;
    if (child1 > 0)
    {
        T   temp = heap[i];
        heap[i] = heap[child1];
        heap[child1] = temp;
        heapifydown(child1);
    }
}

template <typename T>
Heap::MinHeap<T>::MinHeap(){}

template <typename T>
Heap::MinHeap<T>::~MinHeap(){}
