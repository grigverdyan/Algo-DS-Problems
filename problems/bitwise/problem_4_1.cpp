/*
    Write a function that takes n, p, r as integer arguments 
    and swaps the bits of position p and r in n. 
    Example: Input: n=11, i.e. (0...01011)2, p=1, r=4 
             Output: 25, i.e. (0....11001)2
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <bitset>
using std::bitset;

#define N 16

bitset<N>  swapBits(int n, size_t p, size_t r)
{
    bitset<N> bits1(n);
    bitset<1> temp;
    temp[0] = bits1[p];
    bits1[p] = bits1[r];
    bits1[r] = temp[0];
    return bits1;
}

int main()
{
    int n, p, r;

    std::cout << "Input n and p and r: ";
    std::cin >> n >> p >> r;
    if (n > 0 && p > 0 && r > 0 && p <= N && r <= N)
        std::cout << n << " became  " << swapBits(n, p, r);
    else
        std::cout << "Unpropriate input!";
    return 0;
}