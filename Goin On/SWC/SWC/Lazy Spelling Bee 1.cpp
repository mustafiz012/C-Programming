#define  _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans, cases = 0;
char input[6];
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin >> T;
	while (T--){
		scanf("%s", input);
		Ans = 1;
		cases++;
		for (int i = 0; input[i] != NULL; i++){
			if (input[i] == input[i - 1] && input[i] == input[i + 1] && i - 1 >= 0 && input[i + 1] != NULL)
				Ans *= 1;
			else if (i - 1 >= 0 && input[i - 1] != input[i] && input[i + 1] != input[i] && input[i + 1] != input[i-1] && input[i + 1] != NULL)
				Ans *= 3;
			else if (input[i] != input[i - 1] && input[i - 1] == input[i + 1] && i - 1 >= 0 && input[i + 1] != NULL)
				Ans *= 2;
			else if (input[i] == input[i - 1] && input[i] != input[i + 1] && i - 1 >= 0 && input[i + 1] != NULL)
				Ans *= 2;
			else if (input[i] != input[i - 1] && input[i] == input[i + 1] && i - 1 >= 0 && input[i + 1] != NULL)
				Ans *= 2;
			else if (i - 1<0 && input[i + 1] == NULL)
				Ans *= 1;
			else if (i == 0 && input[i + 1] != input[i])
				Ans *= 2;
			else if (input[i + 1] == NULL && input[i - 1] != input[i])
				Ans *= 2;
			else if (input[i + 1] == NULL && input[i - 1] != input[i])
				Ans *= 2;
		}
		printf("Case #%d: %d\n", cases, Ans);
	}
	return 0;
}
