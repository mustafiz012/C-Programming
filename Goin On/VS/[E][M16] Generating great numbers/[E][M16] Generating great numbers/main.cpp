#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int T, c = 0, test = 0;
	long long summ;
	char temp;
	cin >> T;
	string s;
	while (T--){
		test++;
		cin >> s;
		summ = 0;
		for (int i = 0; s[i] != '\0'; i++){
			for (int j = 0; s[j] != '\0'; j++){
				if (s[j] < s[j + 1]){
					temp = s[j];
					s[j] = s[j + 1];
					s[j + 1] = temp;
				}
			}
		}
		for (int i = 0; s[i] != '\0'; i++){
			summ = (summ * 10) + (s[i] - '0');
		}
		long long last = summ % 10;
		summ /= 10;
		printf("#%d %ld\n", test, summ + last);
	}

	return 0;
}
