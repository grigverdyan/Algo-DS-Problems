#include <iostream>
#include <cmath>

double sqrt(int number);

int main()
{
	int number;

        std::cout << "\nInput integer, to calculate square root of it: ";
        std::cin >> number;

        if (number > 0)
                std::cout << "\nSquare root of " << number << " is " << sqrt(number) << std::endl;
        else
                std::cout << "\nThere is no square root for negative numbers! Study!!!" << std::endl;
	
}


// This functions calculates square root of integer by Newton's
// method, but it has little disadvantages (e.g sqrt(25) = 5.01525)
double sqrt(int number)
{
    double x = number; 
    double l = 0.00001;
    double sqrt;
 
    while (true) {
        sqrt = 0.5 * (x + (number / x));
 
        if (abs(sqrt - x) < l)
            break;
        x = sqrt;
    }
 
    return sqrt;
}

