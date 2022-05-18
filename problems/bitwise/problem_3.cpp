/*
    Write a function that takes an integer and 
    checks if it's a power of 4 in O(1).
*/


/**
 * @brief 
 *  Checking first if there is only one set 
 *  bit in the binary representation of the 
 *  number and that there are even number of 
 *  zeros to the right of the set bit. 
 *  If yes, than n is power of 4
 * @param n 
 * @return true 
 * @return false 
 */
bool    isPowerOfFour(unsigned int n)
{
	int bits = 3;  // 3 -> 11 in binary
	
	if ((n & (n - 1)) != 0)
		return false;
	
	// left shift n by 2 bits and checking if last two bits are zeros.
	while (!(bits & n))
		n >>= 2;
	// Return true iff the last bit is set.
	return ((n & bits) == 1 ? true : false);
}


# include <iostream>

int main()
{
    int n;

    std::cout << "Input n: ";
    std::cin >> n;
    if (n > 0 && isPowerOfFour(n))
        std::cout << "n = " << n << " is power of 4\n";
    else
        std::cout << "n = " << n << " is NOT power of 4\n";
    
    return 0;
}