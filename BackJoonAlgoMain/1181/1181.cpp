// 1181.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	cin >> count;

	string *words = new string[count];
	for (int i = 0; i < count; i++)
	{
		cin >> words[i];
	}

	//개수정령
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			//같은단어확인
			if (words[i] == words[j])
			{
				words[j].pop_back();
				count--;
			}
			//크기가 큰단어임?
			if (words[i].length() > words[j].length())
				swap(words[i], words[j]);
			else if(words[i].length() == words[j].length() && words[i] > words[j])
				swap(words[i], words[j]);
		}
	}

	//뿌리기
	for (int i = 0; i < count; i++)
	{
		cout << words[i] << "\n";
	}
}

void quicksort(int low, int high, int s[]) {
	int pivotpoint; if (high > low) 
	{
		partition(low, high, pivotpoint, s); 
		quicksort(low, pivotpoint - 1, s); 
		// 정렬되지 않은 배열을 나눠서 재호출한다. 
		quicksort(pivotpoint+1, high, s); 
	}
} 

void partition(int low, int high, int& pivotpoint, int s[])
{
	int i, j;
	int temp;
	int pivotitem;
	pivotitem = s[low];
	j=low; for(i=low+1;
		i<=high; i++) if(s[i]<pivotitem){ // pibot값과 [i]값 비교하여 [j]값과 서로 교환한다. j++; temp=s[i]; s[i]=s[j]; s[j]=temp; } pivotpoint=j; // pibot값과 [j]값을 바꾼후 [j]에 있는 값을 pibot을 값을 선택 한다. temp=s[low]; s[low]=s[pivotpoint]; s[pivotpoint]=temp; }
