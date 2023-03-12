/*
 * problem1.cpp
 * Bronson Lim
 * Sum of positive multiples of 3 or 5 below 1000.
 * 3/12/23
 */
#include <iostream>

int main()
{
	//compute number of multiples of 3, 5, and 15 less than 1000
	int n_multiples3 = 1000/3;
	int n_multiples5 = 1000/5-1;
	int n_multiples15 = 1000/15;

	//compute sum of all multiples of 3, 5, and 15
	int total_multiples3 = 3*(n_multiples3*(n_multiples3+1)/2);
	int total_multiples5 = 5*(n_multiples5*(n_multiples5+1)/2);
	int total_multiples15 = 15*(n_multiples15*(n_multiples15+1)/2);

	//use principle of inclusion/exclusion to find total
	int total = total_multiples3+total_multiples5-total_multiples15;
	//output total
	std::cout << total << std::endl;

	return 0;
}
