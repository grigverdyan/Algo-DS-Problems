#include <iostream>
#include "p_queue.hpp"

int main()
{
    Pr_Qu::Prior_Queue<int>    queue;

    size_t  size;
    std::cout << "Input size of your Priority Queue : ";
    std::cin >> size;

    int elem;
    std::cout << "\nInput " << size << " elements of your Priority Queue : ";
    for (auto i = 0; i < size; i++)
    {
        std::cin >> elem;
        queue.insert(elem);
    }
 
    std::cout << "\nPriority Queue before extracting Max : ";
    queue.display();

    std::cout << "\nNode with maximum priority : " << queue.extractMax();
 
    std::cout << "\nPriority queue after extracting Max : ";
    queue.display();

    size_t  idx;
    std::cout << "\nInput index and after element to which need change prority : ";
    std::cin >> idx >> elem;
    queue.changePriority(idx, elem);
    std::cout << "\nPriority queue after priority change : ";
     queue.display();

    std::cout << "\nInput index of the element which you wish to remove : ";
    std::cin >> idx;
    queue.remove(idx);
    std::cout << "\nPriority queue after removing the element at index " << idx << " : ";
    queue.display();

    return 0;
}
