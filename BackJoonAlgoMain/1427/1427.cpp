// 1427.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	long num = 0;
	cin >> num;
	
	string s = to_string(num);

	long count = s.length();
	char *result = new char[count];
	for (long i = 0; i < count; i++)
	{
		result[i] = s[i];
	}

	sort(result, result + count);
	
	for (long i = count-1; i > -1; i--)
	{
		cout << result[i];
	}
	
}
