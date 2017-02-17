#define _CRT_SECURE_NO_WARNINGS
#define SIZE 21
#include<stdio.h>
#include<iostream>
using namespace std;
int T, N, cases = 0;
long long int SoP, PoS, sum1, sumM1, sumM2, sum2;
int BinT[SIZE], InputBinT[SIZE], input[SIZE], done[SIZE];
long long int minDiff(long long int s1, long long int s2){
	if (s1 > s2)
		return (s1 - s2);
	else
		return (s2 - s1);
}
void generateBinT(int i){
	sum1 = 0; sum2 = 0; sumM1 = 1; sumM2 = 1;
	if (i == N){
		for (int ii = 0; ii < N; ii++)
		{
			if (BinT[ii] == 0)
			{
				sumM1 *= input[ii];
				sum1 += input[ii];
			}
			else {
				sumM2 *= input[ii];
				sum2 += input[ii];
			}
		}
		if (sum1 >= sum2)
			if (minDiff(sum1, sum2)<SoP)
				SoP = minDiff(sum1, sum2);
			else
				if (minDiff(sum1, sum2)<SoP)
					SoP = minDiff(sum1, sum2);
		if (sumM1 >= sumM2)
			if (minDiff(sumM2, sumM1)< PoS)
				PoS = minDiff(sumM1, sumM2);
			else
				if (minDiff(sumM2, sumM1) < PoS)
					PoS = minDiff(sumM2, sumM1);
		//printf("%lld %lld :: %lld %lld :: %lld %lld\n", sum1, sum2, sumM1, sumM2, SoP, PoS);
		return;
	}
	//BinT[i] = input[j];
	BinT[i] = 0;
	generateBinT(i + 1);
	//BinT[i] = input[j];
	BinT[i] = 1;
	generateBinT(i + 1);
}
int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> T;
	while (T--){
		cin >> N;
		cases++;
		for (int i = 0; i < N; i++)
		{
			done[i] = 0;
			cin >> input[i];
		}
		PoS = 93485093840953;
		SoP = 29083490823094;
		generateBinT(0);
		//printf("%d\n", PoS + SoP);
		cout << "#" << cases << " " << PoS + SoP << endl;
	}
	return 0;
}