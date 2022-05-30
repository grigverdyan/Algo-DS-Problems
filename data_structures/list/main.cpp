#include <iostream>
#include "list.hpp"

using namespace DataStructures;

int main()
{
    List<int> lst;

    size_t  lstMembers = 13;

    for(int i = 0; i < lstMembers; ++i) {
        lst.push_back(i);
    }
    std::cout << "List begin: " <<  *lst.begin() << "\n";

    std::cout << "List size: " << lst.size() << "\n"; 
    std::cout << "List: ";
    for(List<int>::iterator it = lst.begin(); it != lst.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}
