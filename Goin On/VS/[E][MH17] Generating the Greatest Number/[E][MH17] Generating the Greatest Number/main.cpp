#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
	int T, N; cin >> T;
	string cards;
	while (T--){
		cin >> N;
		int totalSize = N * 3;
		int total[totalSize];
		for (int i = 0; i < N; i++){
			cin >> cards;
			for (int j = 0; j < 3; j++){
				if (cards[0] != '*' && cards[2] != '*'){

				}
			}
		}
	}
	return 0;
}