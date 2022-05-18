1. Write a function that takes n and d integers as arguments, where d is necessarily a power of 2, and computes "n modulo d", namely the remainder, using bitwise operations, i.e. without % or /.

2. Write a function that takes n and d integers as arguments, and left-rotates n by d bits.
        Example:
                input: n=16, i.e. (000...00010000)2
                       d=2
                output:
                       64, i.e. (000...01000000)2

3. Write a function that takes an integer and checks if it's a power of 4 in O(1).

4.1 Write a function that takes n, p, r as integer arguments and swaps the bits of position p and r in n.
        Example:
                Input: n=11, i.e. (0...01011)2, p=1, r=4
                Output: 25, i.e. (0....11001)2

4.2 Extend the swapping function so that it takes the 4th integer q, indicating the number of bits to swap.
Example:
        Input: n=47, i.e. (00101111)2, p=1, r=5, q=3
        Output: 227, i.3. (11100011)2
