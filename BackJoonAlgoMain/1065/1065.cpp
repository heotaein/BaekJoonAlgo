// 1065.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
int HanNum(int num);
int main(void)
{
	int input;
	std::cin >> input;
	std::cout << HanNum(input);
}
int HanNum(int num)
{
	int result = 0;
	if (num < 100)
	{
		result = num;
		return result;
	}

	result = 99;
	for (int i = 100; i <= num; i++)
	{
		int a[4];
		int k = 0, t = i;
		while (t > 0)
		{
			a[k] = t % 10;
			t /= 10;
			k++;
		}
		if (i == 1000)
		{
			break;
		}
		else if(a[0]-a[1] == a[1]-a[2])
		{
			result++;
		}
	}

	return result;
}

