#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
using namespace std;

char encodedMessage[9999999], currentSub[101];
char result[12], done[9999999][11];
int N, Ans, gIndex;
bool ok(int index){
	bool flag = true;
	int ii = 0;
	for (int i = index; i < N+index; i++){
		if (encodedMessage[i] != currentSub[ii])
		{
			flag = false;
			break;
		}
		ii++;
	}
	if (flag)
		return true;
	else 
		return false;
}
bool returnOk(int index){
	bool flag = true;
	int ii = 0;
	for (int i = index; i < N + index; i++){
		if (encodedMessage[i] != currentSub[ii])
		{
			flag = false;
			break;
		}
		ii++;
	}
	if (flag)
		return true;
	else
		return false;
}
bool returnChecking(int index){
	int flag = true;
	for (int i = 0; i < index; i++){
		if (ok(i))
			flag = false;
		else 
			return false;
	}
}
void checking(int index){
	int counter = 0, ii = 0;
	for (int i = index; i < N + index; i++)
	{
		done[gIndex][ii] = currentSub[ii] = encodedMessage[i];
		ii++;
	}
	if (returnChecking(index))
		return;
	for (int i = 0; encodedMessage[i] != NULL; i++){
		if (ok(i))
			counter++;
	}
	if (counter > Ans)
	{
		Ans = counter;
		for (int i = 0; i < N; i++)
			result[i] = currentSub[i];
	}
	gIndex++;
}
int main()
{
	//freopen("input.txt", "r", stdin);
	while (scanf("%d%s", &N, encodedMessage) == 2){
		//printf("%d %s\n", N, encodedMessage);
		Ans = 0;
		gIndex = 0;
		for (int i = 0; encodedMessage[i] != NULL; i++)if (encodedMessage[i + N] != NULL){
			checking(i);
		}
		//printf("%d\n", Ans);
		printf("%s\n", result);
	}
	return 0;
}