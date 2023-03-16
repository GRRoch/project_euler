/*
 * problem9.cpp
 * Bronson Lim
 * Find Pythagorean Triples that add up to 100
 */
#include <iostream>
#include <vector>

bool is_pythagorean_triple(const std::vector<int>& myvec)
{
	if (myvec.size() != 3)
		throw ("Vector is not of correct size");
	if (myvec[0]*myvec[0] + myvec[1]*myvec[1] == myvec[2]*myvec[2])
		return true;
	return false;
}

int multiplyEntries(const std::vector<int>& myvec)
{
	if (myvec.size() == 0)
		throw("No entries");
	int prod = 1;
	for (auto i: myvec)
	{
		prod *= i;
	}
	return prod;
}

//compute a vector of all possible triples with given sum
std::vector<std::vector<int> > computeTriplesWithSum(int n)
{
	std::vector<std::vector<int>> possibleTriples;
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			if (n-i-j > 0)
			{
				std::vector<int> temp {i,j,n-i-j};
				possibleTriples.push_back(temp);
			}
		}
	}

	return possibleTriples;
}

int main()
{
	std::vector<std::vector<int>> possibleTriples {computeTriplesWithSum(1000)};

	//initialize found vector with failure conditions
	std::vector<int> foundIt {-1,-1,-1};

	//iterate until pythagorean triple is found
	for (auto triple: possibleTriples)
	{
		if (is_pythagorean_triple(triple))
		{
			foundIt = triple;
		}
	}
	std::cout << "The product is " << multiplyEntries(foundIt) << std::endl;

	return 0;
		
}
