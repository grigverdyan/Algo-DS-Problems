/*
    Write a function that takes n and d integers as arguments, 
    and left-rotates n by d bits. 
    Example: input: n=16, i.e. (000...00010000)2 d=2 
            output: 64, i.e. (000...01000000)2
*/

#include <iostream>

int     leftRotate(int n, int d)
{
    return (n << d);
}

int main()
{
    int n, d;

    std::cout << "Input n and d: ";
    std::cin >> n >> d;
    if (n > 0 && d > 0)
        std::cout << "(n << d) is " << leftRotate(n, d);
    else
        std::cout << "Unpropriate input!";

    return 0;
}