// 2908.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void changeNum(string &inputNum);

int main()
{
	string inputNum1, inputNum2;
	cin >> inputNum1 >> inputNum2;

	changeNum(inputNum1);
	changeNum(inputNum2);

	int *nums = new int[2];

	nums[0] = atoi(inputNum1.c_str());
	nums[1] = atoi(inputNum2.c_str());


	if (nums[0] > nums[1])
		cout << nums[0];
	else
		cout << nums[1];
	
}

void changeNum(string &inputNum)
{
	char tempChar = inputNum.c_str()[0];
	inputNum[0] = inputNum.c_str()[2];
	inputNum[2] = tempChar;
}

