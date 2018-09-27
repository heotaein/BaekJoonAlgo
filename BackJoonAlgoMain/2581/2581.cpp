// 2581.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

//2581_소수
//풀이시간 : 20180927 [14:16 ~ 14:27] -> 11분

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int m=0, n=0;
	cin >> m >> n;

	int min=0, max=0;
	if (m > n)
	{
		max = m;
		min = n;
	}
	else
	{
		max = n;
		min = m;
	}

	vector<int> sosus;
	for (int i = min; i <= max; i++)
	{
		if (i == 2)
		{
			sosus.push_back(2);
		}
		else if (i % 2 != 0 && i != 1)
		{
			for (int j = 2; j <= i; j++)
			{
				if (j == i)
				{
					sosus.push_back(i);
					break;
				}
				else if (i%j == 0)
					break;
			}
		}
	}

	if (sosus.size() == 0)
		cout << -1;
	else
	{
		int total = 0;
		for (int i = 0; i < sosus.size(); i++)
		{
			total += sosus[i];
		}
		cout << total << "\n";
		cout << sosus[0];
	}
}

