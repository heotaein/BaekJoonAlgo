// 완주하지못한선수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> genres;
	genres.push_back("classic");
	genres.push_back("pop");
	genres.push_back("classic");
	genres.push_back("pop");
	genres.push_back("classic");
	genres.push_back("classic");

	//500, 600, 150, 800, 2500 
	vector<int> plays;
	plays.push_back(400);
	plays.push_back(600);
	plays.push_back(150);
	plays.push_back(2500);
	plays.push_back(500);
	plays.push_back(500);

	vector<int> answer;

	vector<string> countGenres;
	countGenres.push_back(genres[0]);
	vector<int> countPlays;
	countPlays.push_back(plays[0]);

	//넣어서 장르별 판매개수 확인
	for (int i = 1; i < genres.size(); i++)
	{
		for (int j = 0; j < countGenres.size(); j++)
		{
			if (genres[i] == countGenres[j])
			{
				countPlays[j] += plays[i];
				break;
			}
			else if (j == countGenres.size() - 1)
			{
				countGenres.push_back(genres[i]);	
				countPlays.push_back(plays[i]);
			}
		}
	}

	//판매개수가 높은것이 앞으로 오도록 설정
	for (int i = 0; i < countGenres.size()-1; i++)
	{
		for (int j = 1; j < countGenres.size(); j++)
		{
			if (countPlays[i] < countPlays[j])
			{
				string tempStr = countGenres[i];
				countGenres[i] = countGenres[j];
				countGenres[j] = tempStr;

				int tempInt = countPlays[i];
				countPlays[i] = countPlays[j];
				countPlays[j] = tempInt;
			}
		}
	}

	for (int i = 0; i < countGenres.size(); i++)
	{
		
		int *tempScoreNum = new int[2]{-1,-1};
		for (int j = 0; j < genres.size(); j++)
		{
			cout << countGenres[i] << " ==  " << genres[j] << endl;
			if (countGenres[i] == genres[j])
			{
				if (tempScoreNum[0] == -1)
					tempScoreNum[0] = j;
				else if (tempScoreNum[0] != -1 && plays[tempScoreNum[0]] < plays[j])
				{
					tempScoreNum[1] = tempScoreNum[0];
					tempScoreNum[0] = j;
				}
				else if (tempScoreNum[1] == -1)
					tempScoreNum[1] = j;
				else if (tempScoreNum[1] != -1 && plays[tempScoreNum[1]] < plays[j])
					tempScoreNum[1] = j;
			}
			cout << ">>>>>>>>>>>>>>>>>>>> " << tempScoreNum[0] << "," << tempScoreNum[1] << endl;
		}
		answer.push_back(tempScoreNum[0]);
		if(tempScoreNum[1] != -1)
			answer.push_back(tempScoreNum[1]);
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << ",";
	}
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
