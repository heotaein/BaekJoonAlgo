// 2751.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int count = 0;
	cin >> count;
	int *Nums = new int[count];
	for (int i = 0; i < count; i++)
	{
		cin >> Nums[i];
	}


	for (int i = 0; i < count; i++)
	{
		cout << Nums[i] << endl;
	}
}
