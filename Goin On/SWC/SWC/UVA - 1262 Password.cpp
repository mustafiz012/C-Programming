//uva 1262

#define _CRT_SECURE_NO_WARNINGS
#define ROW 7
#define COLUMN 6
#include<iostream>
#include<cstdio>
using namespace std;
int T, N, counter, outputIndex, tempN;
char alphab[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
char alpha[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
char grid1[ROW][COLUMN], grid2[ROW][COLUMN], output[ROW][COLUMN];
int done[ROW][COLUMN];
bool returnAlphaIndex2(char ch, int index){
	bool flag = false;
	for (int i = 0; i < 6; i++)
		if (ch == grid2[i][index])
		{
			flag = true;
			break;
		}
	return flag;
}
int returnAlphaIndex(char ch, int counter){
	int i;
	if (ch == alpha[0])
		return 0;
	for (i = 0; i < 26; i++)
		if (ch == alpha[i])
		{
			counter == i;
			break;
		}
	return i;
}
void calculation(char ch, int i, int j){
	output[outputIndex][j] = ch;
	//printf("%c\n", ch);
	counter++;
	if (counter >= 5)
		done[outputIndex][j] = 1;

}
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		cin >> N;
		tempN = N;
		counter = 0;
		int whichOne;
		for (int i = 0; i < 6; i++)
			scanf("%s", grid1[i]);
		for (int i = 0; i < 6; i++)
			scanf("%s", grid2[i]);
		for (int i = 0; i < 6; i++)
			for (int j = 0; j < 5; j++)
				done[i][j] = 0;
		outputIndex = 0;
		while (N--){
			for (int j = 0; j < 5; j++){
				whichOne = 25;
				int i;
				for (i = 0; i < 6; i++) if (0 == done[i][j]){
					if (whichOne > returnAlphaIndex(grid1[i][j], 0) && returnAlphaIndex2(alpha[returnAlphaIndex(grid1[i][j], 0)], j))
						whichOne = returnAlphaIndex(grid1[i][j], 0);
					if (whichOne == 0)
						break;
				}
				calculation(alpha[whichOne], i, j);
			}
			outputIndex++;
		}
		for (int j = 0; j < tempN || output[j][0]; j++)if (j==tempN-1)
			printf("%s\n", output[j]);
		//printf("counter: %d\n", counter);
		/*for (int i = 0; i < 6; i++)
		printf("%s %s\n", grid1[i], grid2[i]);*/
	}
	return 0;
}
