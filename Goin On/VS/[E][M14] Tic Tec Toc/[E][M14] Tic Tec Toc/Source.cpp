#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int T, N, h, d, v, k;
	char output;
	cin >> T;
	while (T--)
	{
		cin >> N;
		char input[30][30];
		for (int i = 0; i<N; i++)
		{
			for (int j = 0; j<N; j++)
			{
				cin >> input[i][j];
				//getchar();
			}
		}
		h = 0;
		d = 0;
		v = 0;
		for (int i = 0; i <= N; i++)
		{
			for (int j = 0; j <= N; j++)
			{
				k = j;
				if (i == j && i == (N - 1)){
					if (input[0][0] == input[i + 1][j + 1])
					{
						d++;
						output = input[i + 1][j + 1];
					}
				}
				else if (input[i][j] == input[i + 1][j + 1] && i == j && N>= i+1)
				{
					d++;
					output = input[i][j];
				}
			}
		}

		if (d == N)
		{
			//printf("%d %c\n", d, output);
			cout << output;
			break;
		}
		else if (h == N)
		{
			printf("%c\n", output);
			break;
		}
		else if (v == N)
		{
			printf("%c\n", output);
			break;
		}
		else
		{
			printf("ongoing\n");
		}


	}
	cin >> N;
	return 0;
}
