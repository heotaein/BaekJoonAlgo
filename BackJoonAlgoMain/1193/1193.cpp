// 1193.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
int Factorial(int a)
{
	int k = 0;
	for (int i = 1; i <= a; i++)
	{
		k += i;
	}
	return k;
}

int main()
{
	int N;
	std::cin >> N;
	for (int i = 1; i < N; i++)
	{
		if (N <= Factorial(i))
		{
			//짝수면
			if(i%2==0)
				std::cout << i - (Factorial(i) - N)<< "/" << (i+1) - (i - (Factorial(i) - N)) << std::endl;
			else
				std::cout << (i + 1) - (i - (Factorial(i) - N)) << "/" << i - (Factorial(i) - N) << std::endl;
			break;
		}
	}
}

