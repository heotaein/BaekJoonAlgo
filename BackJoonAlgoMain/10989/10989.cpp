// 10989.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int count = 0;
	cin >> count;
	int Nums[10000]{0};
	for (int i = 0; i < count; i++)
	{
		int num;
		cin >> num;
		num -= 1;
		Nums[num] += 1;
	}

	for (int i = 0; i < 10000; i++)
	{
		if (Nums[i] > 0)
		{
			for(int j = 0; j<Nums[i]; j++)
				cout << i+1 << "\n";
		}
	}
}