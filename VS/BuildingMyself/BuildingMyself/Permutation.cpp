#define _CRT_SECURE_NO_WARNINGS
#define SIZE 101
#include<iostream>
#include<cstdio>
using namespace std;
int T, N, perm[SIZE], perm2d[SIZE][SIZE], numbers[SIZE], done[SIZE], gRow;
void initDone(){
	for(int i=0;i<N;i++)
		done[i]=0;
}
void solve(int ii){
	if(ii==N){
		for(int i=0;i<N;i++)
		{
			//printf("%d ", perm[i]);
			perm2d[gRow][i] = perm[i];
		}
		//cout<<endl;
		gRow++;
		return;
	}
	for(int j=0;j<N;j++)if(0==done[j]){
		done[j]=1;
		perm[ii]=numbers[j];
		solve(ii+1);
		done[j]=0;
	}
}
void print(){
	for(int i=0;i<gRow;i++){
		for(int j=0;j<N;j++)
			printf("%d ",perm2d[i][j]);
		cout<<endl;
	}
}
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> T;
	while (T--)
	{
		cin>>N;
		for(int i=0;i<N;i++)
			cin>>numbers[i];
		gRow=0;
		initDone();
		solve(0);
		print();
		//printf("%d\n", N);
	}
	return 0;
}