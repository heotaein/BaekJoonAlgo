// 1022.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

void CreateTable(int **Table, const int RCMax);

int main()
{
	int pos[4]{ 0,0,0,0 };
	cin >> pos[0] >> pos[1] >> pos[2] >> pos[3];

	int RCMax = 0;
	for (int i = 0; i < 4; i++)
	{
		if (abs(pos[i]) > RCMax)
			RCMax = abs(pos[i]);
	}
	RCMax = RCMax * 2 + 1; //정사각형 모눈종이 칸 개수
	
	//정사각형 모눈종이 생성
	int **Table = new int*[pos[2] - pos[0]];
	for (int i = 0; i < RCMax; ++i)
	{
		Table[i] = new int[pos[3] - pos[1]]{0};
	}

	CreateTable(Table, RCMax);

	for (int i = (RCMax - 1) / 2 + pos[0]; i < (RCMax - 1) / 2 + pos[2] + 1; i++)
	{
		for (int j = (RCMax - 1) / 2 + pos[1]; j < (RCMax - 1) / 2 + pos[3] + 1; j++)
		{
			cout << Table[i][j] << " ";
		}
		cout << endl;
	}
}

void CreateTable(int **Table, const int RCMax)
{
	bool up = false, down = false, left = true, right = false;
	int inputNum = 1;
	int CenterNum = (RCMax - 1) / 2;
	int posX = CenterNum, posY = CenterNum;
	Table[posY][posX] = inputNum++;
	posX += 1;
	Table[posY][posX] = inputNum++;
	
	while(true)
	{
		//왼쪽으로 갈 수 있는지 체크
		if (left && Table[posY][posX - 1] == 0 && posX - 1 > -1)
		{
			Table[posY][posX - 1] = inputNum++;
			posX -= 1;
			left = false;
			down = true;
		}
		else if (left && posY - 1 > -1)
		{
			Table[posY-1][posX] = inputNum++;
			posY -= 1;
		}

		//아래로 갈 수 있는지 체크
		else if (down && Table[posY + 1][posX] == 0 && posY + 1 < RCMax)
		{
			Table[posY + 1][posX] = inputNum++;
			posY += 1;
			down = false;
			right = true;
		}
		else if (down && posX - 1 > -1)
		{
			Table[posY][posX - 1] = inputNum++;
			posX -= 1;
		}

		//오른쪽으로 갈 수 있는지 체크
		else if (right && Table[posY][posX + 1] == 0 && posX + 1 < RCMax)
		{
			Table[posY][posX + 1] = inputNum++;
			posX += 1;
			right = false;
			up = true;
		}
		else if (right && posY + 1 < RCMax)
		{
			Table[posY + 1][posX] = inputNum++;
			posY += 1;
		}

		//위쪽으로 갈 수 있는지 체크
		else if (up && Table[posY-1][posX] == 0 && posY - 1 > -1)
		{
			Table[posY-1][posX] = inputNum++;
			posY -= 1;
			up = false;
			left = true;
		}
		else if (up && posX + 1 < RCMax)
		{
			Table[posY][posX+1] = inputNum++;
			posX += 1;
		}
		else
		{
			break;
		}
	}

}
