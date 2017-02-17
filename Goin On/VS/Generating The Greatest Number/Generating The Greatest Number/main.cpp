#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
	int T, N;
	cin >> T;
	string cards;
	while (T--)
	{
		cin >> N;
		int twoStarsLeft = 0, twoStarsRight = 0, totals = 0, leftStar = 0, rightStar = 0, leftStartRight = 0;
		int totalSize = N * 3;
		for (int i = 0; i < N; i++)
		{
			cin >> cards;
			if (cards[0] == '*' && cards[1] == '*' && twoStarsLeft<(cards[2] - '0'))
				{
					twoStarsLeft = cards[2] - '0';
				}
				else if (cards[1] == '*' && cards[2] == '*' && twoStarsRight<(cards[0] - '0'))
				{
					twoStarsRight = cards[0] - '0';
				}
				else if (cards[0] == '*' && leftStar < ((cards[1] - '0') + (cards[2] - '0')))
				{
					leftStar = ((cards[1] - '0') + (cards[2] - '0'));
				}
				else if (cards[2] == '*' && rightStar < ((cards[0] - '0') + (cards[1] - '0')))
				{
					rightStar = ((cards[0] - '0') + (cards[1] - '0'));
				}
				else if (cards[1] == '*')
				{
					if (twoStarsRight<(cards[0] - '0'))
						twoStarsRight = (cards[0] - '0');
					else if (twoStarsLeft<(cards[2] - '0'))
						twoStarsLeft = (cards[2] - '0');
				}
				else if (cards[0] == '*' && cards[2] == '*' && leftStartRight < (cards[1] - '0'))
				{
					leftStartRight = (cards[1] - '0');
				}
				else
				{
					totals += ((cards[0] - '0') + (cards[1] - '0') + (cards[2] - '0'));
					printf("%d\n", totals);
					//break;
				}

			
		}
		totals += twoStarsLeft + twoStarsRight + leftStar + rightStar;
		if (leftStartRight>totals)
			totals = leftStartRight;
		//printf("%d\n%d\n", twoStarsLeft, twoStarsRight);
		printf("%d\n", totals);
	}
	return 0;
}
