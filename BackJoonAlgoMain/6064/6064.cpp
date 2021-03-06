// 6064.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
long gcd(long a, long b) {

	while (b != 0) {
		long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int count;
	std::cin >> count;

	int *M = new int[count]; //층 
	int *N = new int[count]; //호
	int *x = new int[count];
	int *y = new int[count];
	long *result = new long[count];
	for (int i = 0; i < count; i++)
	{
		std::cin >> M[i];
		std::cin >> N[i];
		std::cin >> x[i];
		std::cin >> y[i];
	}

	for (int i = 0; i < count; i++)
	{
		int temp_x = x[i], temp_y = x[i];
		result[i] = x[i];

		int lcm;
		if (M[i] > N[i])
			lcm = M[i] * N[i] / gcd(M[i], N[i]);
		else
			lcm = M[i] * N[i] / gcd(N[i], M[i]);
		
		while (true)
		{
			if (result[i] > M[i] * N[i] / gcd(M[i], N[i]))
			{
				result[i] = -1;
				break;
			}
			else if (x[i] == temp_x && y[i] == temp_y)
			{
				break;
			}
			result[i] += M[i];
			temp_y = (temp_y + M[i]) % N[i];
		}
	}

	//resultPrint
	for (int i = 0; i < count; i++)
	{
		std::cout << result[i] << std::endl;
	}
}

