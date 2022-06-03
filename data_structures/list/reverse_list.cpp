#include <iostream>
#include "list.hpp"

using namespace DataStructures;

/*
 *  Program to reverse doubly list.
 *  TODO: fix error
 */
void    reverse(List<int>*);

int main()
{
    List<int> lst;
    size_t  lstMembers = 13;

    for (int i = 0; i < lstMembers; ++i) {
        lst.push_back(i);
    }
     
    std::cout << "Original Linked list: ";
    for (List<int>::iterator it = lst.begin(); it != lst.end(); it++) {
        std::cout << *it << " ";
    }
    reverse(&lst);
     
    std::cout << "\nReversed Linked list: " << std::endl;
    for (List<int>::iterator it = lst.begin(); it != lst.end(); it++) {
        std::cout << *it << " ";
    }

    return 0;
}

void    reverse(List<int>* p)
{
    List<int>   *temp = NULL;
    List<int>   *current = p;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if(temp != NULL ) {
        p = temp->prev;
    }
}
