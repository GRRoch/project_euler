/*
 * problem6.cpp
 * Bronson Lim
 * Sum squre difference first 100 numbers
 */

#include <iostream>

//use closed form to compute sum of squares
int sum_squares(int n)
{
	return n*(n+1)*(2*n+1)/6;
}

//use closed form to comput square of sum
int square_sum(int n)
{
	return (n*(n+1)/2)*(n*(n+1)/2);
}

int main()
{
	int num {100};
	std::cout << square_sum(100)-sum_squares(100) << std::endl;


	return 0;
}
