// 2490.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main()
{
	char result[3]{ 'A','A','A' };

	for (int i = 0; i < 3; i++) 
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if ((a + b + c + d) == 4)
			result[i] = 'E';
		else if ((a + b + c + d) == 3)
			result[i] = 'A';
		else if ((a + b + c + d) == 2)
			result[i] = 'B';
		else if ((a + b + c + d) == 1)
			result[i] = 'C';
		else
			result[i] = 'D';
	}	
	for (int i = 0; i < 3; i++)
	{
		cout << result[i] << "\n";
	}
}

