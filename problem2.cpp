/*
 * problem2.cpp
 * Bronson Lim
 * Sum of even Fibonacci numbers less than 4 million.
 */
#include <iostream>

int even_fibonacci(int n)
{
	if (n == 0 || n == 1)
		return 2*n;
	return 4*even_fibonacci(n-1) + even_fibonacci(n-2);
}

int main()
{
	int end_term = 4000000;
	int sum = 0;
	int term = 0;
	while (even_fibonacci(term) < end_term)
	{
		sum += even_fibonacci(term);
		term++;
	}
	std::cout << sum << std::endl;

	return 0;
}
