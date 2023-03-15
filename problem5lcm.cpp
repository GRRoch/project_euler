/*
 * Alternate attempt with lcm, gcd stuff
 */
#include <vector>
#include <iostream>

//requires positive integers with a < b
int gcd(int a, int b)
{
	if (a <=0 || b <= 0)
		return -1;
	if (b % a == 0)
		return a;
	return gcd(b%a,a);
}

int lcm(int a, int b)
{
	if (a <=0 || b <= 0)
		return -1;
	return a*b/gcd(a,b);
}

int main()
{
	std::vector<int> vec;
	int current = 6;
	for (int i = 4; i <= 20; i++)
	{
		if (gcd(current,i) != 1)
		{
			current = lcm(i,current);
			std::cout << current << '\n';
		}
		else
		{
			current *= i;
			std::cout << current << '\n';
		}
	}

	return 0;
}
