#include <iostream>
 
long gcd(int a, int b);
long lcm(int a, int b);
  
int main()
{
    int a;
    int b;

    std::cout << "\nInput 2 integers: ";
    std::cin >> a >> b;
    std::cout <<"\nLowest common multiple of " << a
	    << " and " << b << " is " << lcm(a, b) << std::endl;
    return 0;
}

long gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
