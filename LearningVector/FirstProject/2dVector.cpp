#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	//vector<vector<int> > vec(N, vector<int>(N));
	int vec[100][100];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> vec[i][j];
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d ", vec[i][j]);
		}
	}
	cout << "Press any key to continue..." << endl;
	cin.get();
	return 0;
}