#include <iostream>

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

// This function is my approximate implementation of sqrt() function
double sqrt(int number)
{
	double temp;
	double sqrt;

	sqrt = number / 2;
	temp = 0;

	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (number / temp + temp) / 2;
	}
	return sqrt;
}
