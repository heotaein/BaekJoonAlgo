// 2941.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

//작성시간 :: 20180927 [13:34 ~ 13:48] -> 14분

#include <iostream>
#include <string>

using namespace std;
int main()
{
	string inputText;
	cin >> inputText;
	int count = 0;
	for (int i = 0; i < inputText.size(); i++)
	{
		//c
		if (inputText[i] == 'c' && i < inputText.size() - 1)
		{
			//c=
			if (inputText[i + 1] == '=')
				i++;
			//c-
			else if(inputText[i + 1] == '-')
				i++;
			count++;
		}
		//d
		else if (inputText[i] == 'd' && i < inputText.size() - 1)
		{
			//dz=
			if (inputText[i + 1] == 'z' && i < inputText.size() - 2)
			{
				//dz-
				if (inputText[i + 2] == '=')
					i += 2;
			}
			//d-
			else if (inputText[i + 1] == '-')
				i++;
			count++;
		}
		//lj
		else if (inputText[i] == 'l' && i < inputText.size() - 1)
		{
			//lj
			if (inputText[i + 1] == 'j')
				i++;
			count++;
		}
		//n
		else if (inputText[i] == 'n' && i < inputText.size() - 1)
		{
			//nj
			if (inputText[i + 1] == 'j')
				i++;
			count++;
		}
		//s
		else if (inputText[i] == 's' && i < inputText.size() - 1)
		{
			//s=
			if (inputText[i + 1] == '=')
				i++;
			count++;
		}
		//z
		else if (inputText[i] == 'z' && i < inputText.size() - 1)
		{
			//z=
			if (inputText[i + 1] == '=')
				i++;
			count++;
		}
		else
			count++;
	}
	cout << count;
}
