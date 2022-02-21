/****************************************************
 *					Problem 1637B					*
 * https://codeforces.com/problemset/problem/1637/B *
 ****************************************************/

#include <iostream>
#include <vector>
#include <stdint.h>

template<typename T>
unsigned short int GetElementValue(T e)
{
	return (e == 0 ? 2 : 1);
}

int main()
{
	unsigned short int nCases;
	std::cin >> nCases;
	for (unsigned short int i = 0; i < nCases; ++i)
	{
		//Capture Data
		unsigned short int inputSize;
		std::vector<unsigned long int> inputArr;
		std::cin >> inputSize;
		for (unsigned short int j = 0; j < inputSize; ++j)
		{
			unsigned long int temp;
			std::cin >> temp;
			inputArr.emplace_back(temp);
		}
		//Capture Complete

		//Process Data
		unsigned long long int cummulativeValueSum = 0; //!WIP! still have to determine the max size of the cummulative sum for optimization
														//For the time being we'll use the largest int container
		for (unsigned short int j = 0; j < inputSize; ++j)
		{
			cummulativeValueSum += ((j + 1) * (inputSize - j) * GetElementValue(inputArr[j]));
		}
		//Finished Processing

		//Print Results
		std::cout << cummulativeValueSum << std::endl;
		//Finished Printing
	}
	return 0;
}