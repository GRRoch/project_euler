/*
 * problem7.cpp
 * Bronson Lim
 * Compute the 10001st prime
 */

#include <iostream>
#include <cmath>
#include <vector>

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

//create a vector of primes until we reach the desired size (inefficient
//spatially)
int nth_prime(int n)
{
	std::vector<int> primes;
	int i = 2;
	while(primes.size()<10002)
	{
		if (is_prime(i))
			primes.push_back(i);
		i++;
	}
	return primes[n-1];
}

int main()
{
	int num = 10001;
	std::cout << nth_prime(num) << std::endl;
	return 0;
}
