/*
    Write a function that takes n, p, r, q as integer arguments 
    and swaps the bits of position p and r in n and q, indicating 
    the number of bits to swap. 
    Example: Input: n=47, i.e. (00101111)2, p=1, r=5, q=3 
             Output: 227, i.3. (11100011)2. 
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <bitset>
using std::bitset;
#include <cassert>

#define N 16

void  swapBits(bitset<N>& bits, size_t p, size_t r)
{
    bitset<1> temp;
    temp[0] = bits[p];
    bits[p] = bits[r];
    bits[r] = temp[0];
}

bitset<N>  swapBitsInCount(int n, size_t p, size_t r, size_t q)
{
    assert(p < N && r < N);
    bitset<N> bits1(n);
    bitset<1> temp;

    size_t i = 0;
    while (i < q && i < N)
    {
        swapBits(bits1, p, r);
        p++;
        r++;
        i++;
    }
    return bits1;
}

int main()
{
    int n, p, r, q;

    std::cout << "Input n and p, r and q: ";
    std::cin >> n >> p >> r >> q;
    if (n > 0 && p > 0 && r > 0 && p <= N && r <= N)
        std::cout << n << " became " << swapBitsInCount(n, p, r, q).to_ulong();
    else
        std::cout << "Unpropriate input!";
    return 0;
}