// 1978.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

//1978_소수찾기
//풀이시간 : 20180927 [13:58 ~ 14:14] -> 16분

#include <iostream>

using namespace std;
int main()
{
	int N = 0, count = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num = 0;
		cin >> num;

		if (num != 1 && num % 2 != 0)
		{
			for (int j = 2; j <= num; j++)
			{
				if (j == num)
				{
					count++;
					break;
				}
				else if (num%j == 0)
					break;
			}
		}
		else if (num == 2)
			count++;
	}

	cout << count;

}
