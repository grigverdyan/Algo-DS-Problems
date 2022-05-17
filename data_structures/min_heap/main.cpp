#include "min_heap.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    Heap::MinHeap<int>  h;
    int                 element;
    size_t  size;
    cout << "Insert number of elements to be inserted : ";
    cin >> size;
    cout << "Insert elements in heap\n";
    for (size_t i = 0; i < size; i++)
    {
        cin >> element;
        h.Insert(element);
    }

    cout << "Displaying Min Heap\n";
    h.DisplayHeap();

    cout << "Extract Minimum Element : "<< h.ExtractMin() << std::endl;
    cout << "Delete Minimum Element\n";
    h.DeleteMin();

    cout << "Displaying Min Heap after deleting Min Element\n";
    h.DisplayHeap();
    return 0;
}