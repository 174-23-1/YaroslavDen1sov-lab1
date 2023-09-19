#include<iostream>

int main()
{
	const int x{ 11 * 10 ^ -2 }, y{ 46 };
	const float z{ 3.5 };

	const float result{ (12 * x - x / y) + ((0.011 * y + z * 1.0 / x - 12) / (11)) };
	std::cout << "Result = " << result;
}

