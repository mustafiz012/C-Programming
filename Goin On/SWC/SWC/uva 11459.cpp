#define _CRT_SECURE_NO_WARNINGS
#define SIZE 11
#define PLAYER 1000000
#define ROLL 1000000
#include<iostream>
#include<cstdio>
using namespace std;
int T, NoP, NoSL, NoDR;
int player[PLAYER], diceRolls[ROLL];
int endTop[PLAYER][3];
bool hundred ;
int calculation(int index){
	/*if (hundred)
		return 1;*/
	int total = 0;
	if (total + player[index] <= 100)
		total += player[index];
	for (int i = index; i < NoDR;i = i+NoP) if(total<100){
		if (i > NoDR)
			break;
		if (total + diceRolls[i] <= 100)
			total += diceRolls[i];
		if (total == 100)
			break;
		for (int j = 0; j < NoSL; j++){
			if (total == endTop[j][0])
				total = endTop[j][1];
		}
	}
	if (total == 100)
		hundred = true;
	return total;
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &T);
	while (T--){
		scanf("%d%d%d", &NoP, &NoSL, &NoDR);
		hundred = false;
		for (int i = 0; i < NoSL; i++){
			for (int j = 0; j < 2; j++)
				scanf("%d", &endTop[i][j]);
		}
		for (int i = 0; i < NoDR; i++)
			scanf("%d", &diceRolls[i]);
		for (int i = 0; i < NoP; i++)
			player[i] = 1;
		for (int i = 0; i < NoP; i++){
			printf("Position of player %d is %d.\n", i+1, calculation(i));
		}
	}
	return 0;
}