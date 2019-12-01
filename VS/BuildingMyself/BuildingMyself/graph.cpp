#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<iostream>
#include<cstdio>
using namespace std;
int T, N, M, sR, sC, dR, dC;
char grid[SIZE][SIZE];
void calculation(int sr, int sc, int dr, int dc){
	int flag = false;
	for(int i=sr;i<N;i++)if(!flag){
		for(int j=sc;j<M; j++){
			if(grid[i][j] =='@')
				printf("(i, j)\t%d %d\n", i, j);
			if(i==dr && j==dc)
			{
				flag = true;
				break;
			}
		}
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin>>T;
	while(T--){
		cin>>N>>M;
		for(int i=0;i<N;i++)
			scanf("%s", grid[i]);
		cin>>sR>>sC>>dR>>dC;
		/*for(int i=0;i<N;i++)
			printf("%s\n", grid[i]);*/
		calculation(sR, sC, dR, dC);
	}
	return 0;
}