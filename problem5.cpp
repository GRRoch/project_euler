/*
 * problem5.cpp
 * Bronson Lim
 * Computes smallest number that is evenly divisible by 1 to 20
 */
#include <unordered_map>
#include <cmath>
#include <iostream>
#include <vector>

//quick factorial function to compute largest multiple
int factorial(int n)
{
	if (n < 2)
		return 1;
	return factorial(n-1)*n;
}

//check if prime
bool is_prime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

//compute prime decomposition and store as a map
std::unordered_map<int,int> primeDecomposition(int n)
{
	std::unordered_map<int,int> primeDecomp;
	primeDecomp[-1] = -1;
	if (n < 2)
		return primeDecomp;
	for (int i = 2; i <= n/2; i++)
	{
		if (is_prime(i) && n % i == 0)
		{
			int m = n;
			while (m % i == 0)
			{
				primeDecomp[i] += 1;
				m = m/i;
			}
		}
	}
	return primeDecomp;
}


int main()
{
	//initialize the dumb guess
	//create a map of all primes dividing at least one of the integers between 2
	//and 20, key is prime, value will be highest factor
	std::vector<std::unordered_map<int,int>> primeDecompsAll;
	for (int i = 2; i <= 20; i++)
	{
		primeDecompsAll.push_back(primeDecomposition(i));
	}
	std::unordered_map<int,int> primeDecompositionNumsTo20;
	int prod = 1;
	for (auto const itr: primeDecompsAll)
	{
		
	}
	std::cout << prod << std::endl;

	/*
	for (auto const & pair: primeDecomp)
	{
		std::cout << pair.first << " " << pair.second << std::endl;
	}
	*/



	return 0;
	
}
