// 1157.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	string inputStr;
	cin >> inputStr;

	vector<char> word;
	vector<int> count;
	

	for (int i = 0; i < inputStr.size(); i++)
	{
		char checkWord = toupper(inputStr[i]);
		int wordCount = 0;
		bool sameCheck = false;
		for (int j = 0; j < word.size(); j++)
		{
			if (checkWord == word[j])
			{
				sameCheck = true;
				break;
			}
		}

		if (!sameCheck)
		{
			for (int j = i; j < inputStr.size(); j++)
			{
				if (checkWord == toupper(inputStr[j]))
					wordCount++;
			}

			//cout << checkWord << "," << wordCount << endl;
			word.push_back(checkWord);
			count.push_back(wordCount);
		}
	}

	int high = count[0], selNum = 0;
	bool same = false;
	for (int i = 1; i < count.size(); i++)
	{
		if (high < count[i])
		{
			same = false;
			selNum = i;
		}
		else if (high == count[i])
			same = true;
	}

	if (same)
		cout << "?";
	else
		cout << word[selNum];
}

