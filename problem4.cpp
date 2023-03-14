/*
 * problem3.cpp
 * Bronson Lim
 * Find largest palindrome from product of two 3-digit numbers
 * Brute force solution
 */

#include <iostream>
#include <sstream>
#include <string>

//convert integer to string
std::string intToString(int n)
{
	std::ostringstream os;
	os << n;
	return os.str();
}

//check if a string is a palindrome
bool is_palindrome(std::string str)
{
	int lengthOfString = str.length();
	if (lengthOfString == 0 || lengthOfString == 1)
		return true;
	if (str[0] == str[lengthOfString-1])
		return is_palindrome(str.substr(1,lengthOfString-2));
	return false;
}

int main()
{
	int largestPalindromeProduct = 0;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = i; j < 1000; j++)
		{
			std::string product {intToString(i*j)};
			if (is_palindrome(product) && i*j > largestPalindromeProduct)
			{
				largestPalindromeProduct = i*j;
			}
		}
	}

	std::cout << "Largest Palindrome Product: " << largestPalindromeProduct << std::endl;


	return 0;
}
