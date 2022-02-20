/****************************************************
 *					Problem 1637B					*
 * https://codeforces.com/problemset/problem/1637/B *
 ****************************************************/

#include <iostream>
#include <vector>
#include <stdint.h>

int main()
{
	uint8_t nCases;
	std::cin >> nCases;
	for (uint8_t i = 0; i < nCases; ++i)
	{
		//Capture Data
		uint8_t inputSize;
		std::vector<unsigned long int> inputArr;
		std::cin >> inputSize;
		for (uint8_t j = 0; j < inputSize; ++j)
		{
			unsigned long int temp;
			std::cin >> temp;
			inputArr.emplace_back(temp);
		}
		//Capture Complete
	}
	return 0;
}