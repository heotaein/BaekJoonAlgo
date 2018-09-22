// 2775.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>

int func(int floar, int hosile)
{
	int *x = new int[hosile];
	for (int i = 0; i < hosile; i++)
	{
		x[i] = i+1;
	}

	for (int i = 0; i < floar; i++)
	{	
		for (int j = 0; j < hosile - 1; j++)
		{
			x[j+1] = x[j] + x[j + 1];
		}
	}
	return x[hosile - 1];
}

int main()
{
	int count;
	std::cin >> count;


	int *k = new int[count]; //층 
	int *x = new int[count]; //호
	int *result = new int[count]; //결과값저장
	for (int i = 0; i < count; i++)
	{
		std::cin >> k[i];
		std::cin >> x[i];

		if (x[i] == 1)
			result[i] = 1;
		else
		{
			result[i] = func(k[i], x[i]);
		}
	}

	//resultPrint
	for (int i = 0; i < count; i++)
	{
		std::cout << result[i] << std::endl;
	}
}

