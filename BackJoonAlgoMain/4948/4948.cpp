// 4948.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

//4948_베르트랑공준
//풀이시간 : 20180927 [14:51 ~ 15:08] -> 17분 -> 효율성을 못품

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num;
	vector<int> counts;
	while (true)
	{
		cin >> num;
		if (num == 0)
			break;

		int count = 0;
		for (int i = num+1; i < num * 2; i++)
		{
			if (num == 1)
			{
				count = 1;
				break;
			}

			for (int j = 2; j <= i; j++)
			{
				if (j == i)
					count++;
				else if (i%j == 0)
					break;
			}
		}
		counts.push_back(count);
	}

	for (int i = 0; counts.size(); i++)
	{
		cout << counts[i] << "\n";
	}
		
}
