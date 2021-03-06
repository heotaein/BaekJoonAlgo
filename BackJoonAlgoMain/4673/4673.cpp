// 4673.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int selfNum(int num)
{
	int tempNum = num;
	int perCheck[5]{10000,1000,100,10,1};
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		if (tempNum >= perCheck[i])
		{
			int value = (tempNum / perCheck[i]);
			if (value != 0)
			{
				tempNum -= (value * perCheck[i]);
				sum += value;
			}
		}
	}

	if (num + sum > perCheck[0])
		return 10001;
	else
		return num + sum;
}

int main()
{
	int * Nums = new int[10001]{ 0 };
	for (int i = 0; i < 10000; i++)
	{
		Nums[selfNum(i + 1)-1] = 1;
	}

	for (int i = 0; i < 10000; i++)
	{
		if (Nums[i] == 0)
		{
			cout << i + 1 << "\n";
		}
	}

    return 0;
}

