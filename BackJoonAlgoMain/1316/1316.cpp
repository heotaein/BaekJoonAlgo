// 1316.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

#include <iostream>
#include <string>

using namespace std;
int main()
{
	int count = 0;
	int N = 0;
	cin >> N;
	string *inputText = new string[N];
	for (int i = 0; i < N; i++)
	{
		cin >> inputText[i];
	}
	

	for (int j = 0; j < N; j++)
	{
		int abcCheck[26] = {0};
		for (int i = 0; i < inputText[j].size(); i++)
		{
			if (i == inputText[j].size() - 1 && abcCheck[(int)inputText[j][i] - 97] == false )
			{
				count++;
				break;
			}
			else if (i == inputText[j].size() - 1)
			{
				break;
			}
			
			if (inputText[j][i] != inputText[j][i + 1] && abcCheck[(int)inputText[j][i + 1] - 97] == true)
			{
				break;
			}
			else if (inputText[j][i] != inputText[j][i + 1])
			{
				abcCheck[(int)inputText[j][i] - 97] = true;
			}
		}
	}

	cout << count << endl;
}
