#include <iostream>

int smallestPowerOfTwo(int n);

int main()
{
    int n;
    std::cout << "\n\tInput positive integer number: ";
    do {
        std::cin >> n;
    } while (n <= 0);

    std::cout << "\n\tSmallest power of 2 larger than n is "
              << smallestPowerOfTwo(n);

    return 0;
}

/**
 * @brief Complexity O(1)
 * 
 * @param n 
 * @return int 
 */
int smallestPowerOfTwo(int n)
{
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    
    return n + 1;
}
