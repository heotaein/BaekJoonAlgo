// 2577.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <string>;
using namespace std;
int main()
{
	int a, b, c;
	int nums[10]{ 0 };
	cin >> a >> b >> c;

	string s = to_string(a * b * c);
	for (int i = 0; i < s.length(); i++)
	{
		nums[((int)s[i] - '0')]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << nums[i] << "\n";
	}

}

