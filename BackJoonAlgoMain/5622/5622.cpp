
#include "pch.h"

//시작 13:20 ~ 13:32
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Text;
	cin >> Text;
	
	int count = 0;
	for (int i = 0; i < Text.size(); i++)
	{
		if (Text[i] == 'A' || Text[i] == 'B' || Text[i] == 'C')
			count += 3;
		else if (Text[i] == 'D' || Text[i] == 'E' || Text[i] == 'F')
			count += 4;
		else if (Text[i] == 'G' || Text[i] == 'H' || Text[i] == 'I')
			count += 5;
		else if (Text[i] == 'J' || Text[i] == 'K' || Text[i] == 'L')
			count += 6;
		else if (Text[i] == 'M' || Text[i] == 'N' || Text[i] == 'O')
			count += 7;
		else if (Text[i] == 'P' || Text[i] == 'Q' || Text[i] == 'R' || Text[i] == 'S')
			count += 8;
		else if (Text[i] == 'T' || Text[i] == 'U' || Text[i] == 'V')
			count += 9;
		else if (Text[i] == 'W' || Text[i] == 'X' || Text[i] == 'Y' || Text[i] == 'Z')
			count += 10;
		else if (Text[i] == '0')
			count += 11;
		else
			count += 2;
	}

	cout << count;
}

