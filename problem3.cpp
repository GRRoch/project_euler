/*
 * problem3.cpp
 * Bronson Lim
 * Find largest prime factor of 600851475143
 */

#include <iostream>
#include <cmath>

//Check if number is prime
bool is_prime(long int n)
{
	//numbers less than 2 are not prime
	if (n<2)
		return false;
	for (long int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}


int main()
{
	//define num and initialize largest factor
	long int num {600851475143};
	long int largestPrimeFactor = 1;

	//iterate through factors and check if prime
	for (long int i = 2; i <= num; i++)
	{
		if (num %i == 0 and is_prime(i))
		{
			largestPrimeFactor = i;
			num /= i;
		}
	}
	//output largest prime factor
	std::cout << largestPrimeFactor << std::endl;
	return 0;

}
