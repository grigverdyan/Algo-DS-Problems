/*
    Write a function that takes n and d integers as arguments,
    where d is necessarily a power of 2, and computes 
    "n modulo d", namely the remainder, using bitwise operations,
    i.e. without % or /.
*/

#include <iostream>

/**
 * @brief 
 *  The powers of 2 have only one set bit in their binary representation.
 *  So when subtracting 1 from a power of 2 what we get is 1s till the last
 *  unset bit and if we apply bitwise AND(&) operator we should get only 0s.
 *  Complexity is O(1).
 * @param n 
 * @return true 
 * @return false 
 */
bool    isPowerOfTwo(unsigned int n)
{
    return (!(n & (n - 1)));
}

/**
 * @brief 
 * Counts "n modulo d" using bitwise AND(&) operator.
 * @param n 
 * @param d 
 * @return int 
 */
unsigned int    bitwiseModulo(unsigned int n, unsigned int d)
{
    return (n & (d - 1));
}

int main()
{
    int n, d;

    std::cout << "Input n and d: ";
    std::cin >> n >> d;
    if (n > 0 && d > 0 && n >= d && isPowerOfTwo(d))
        std::cout << "(n modulo d) is " << bitwiseModulo(n, d);
    else
        std::cout << "Unpropriate input!";

    return 0;
}