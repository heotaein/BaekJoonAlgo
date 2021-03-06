// 1929.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

//1929_소수구하기_효율성
//풀이시간 : 20180927 [14:31 ~ 14:49] -> 18분 -> 다른사람 코드 사용

#include<iostream>
using namespace std;
int buffer[1000001];
int main()
{
	int a, b;
	cin >> a >> b;
	long long int i;
	for (i = 2; i*i <= b; i++)
	{
		if (buffer[i] == true)continue;
		long long int j = i * i;
		for (; j <= b;)
		{
			buffer[j] = true;
			j += i;
		}
	}
	buffer[1] = true;
	for (int i = a; i <= b; i++)
	{
		if (buffer[i] == false)
		{
			cout << i << "\n";
		}
	}
	return 0;
}
