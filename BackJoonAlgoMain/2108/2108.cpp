// 2108.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int sasulAver(int *arr,int count)
{
	int sumNum = 0;
	for (int i = 0; i < count; i++)
	{

		sumNum += arr[i];
	}
	int num = floor(((float)sumNum / (float)count) + 0.5f);
	return num;
}

int center(int *arr, int count)
{
	sort(arr, arr + count);
	return arr[count / 2];
}

int chaoiBinResult(int *arr, int count)
{
	int temparr[8001]{ 0 };
	int resultNum = -4000, Counting = 0;
	bool Sec = false;
	for (int i = 0; i < count; i++)
	{
		temparr[arr[i] + 4000] += 1;
	}

	for (int i = 0; i < 8001; i++)
	{
		if (temparr[i] != 0)
		{
			//리셋하기
			if (temparr[i] > Counting)
			{
				Sec = false;
				Counting = temparr[i];
				resultNum = i - 4000;
			}
			else if (!Sec && temparr[i] == Counting)
			{
				Sec = true;
				resultNum = i - 4000;
			}
		}
	}

	return resultNum;
}

int maxMin(int *arr, int count)
{
	sort(arr, arr + count);
	return arr[count - 1] - arr[0];
}


int main()
{
	int count = 0;
	cin >> count;
	int *Nums = new int[count];
	for (int i = 0; i < count; i++)
	{
		cin >> Nums[i];
	}

	cout << sasulAver(Nums,count) << "\n";
	cout << center(Nums, count) << "\n";
	cout << chaoiBinResult(Nums, count) << "\n";
	cout << maxMin(Nums, count);

	delete Nums;
}