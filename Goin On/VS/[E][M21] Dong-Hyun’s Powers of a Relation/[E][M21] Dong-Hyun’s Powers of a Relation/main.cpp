#include <iostream>
#include<stdio.h>
using namespace std;
long long powerr(long long b, long long p){
	long long pwr = 1;
	for (int i = 1; i <= p; i++)
		pwr *= b;
	return pwr;
}
int main()
{
	int T;
	long long a, k, p;
	cin >> T;
	while (T--){
		cin >> a >> k;
		for (int i = 0; i<k; i++){
			if (i == 0)
				p = a;
			p = powerr(a, p);
		}
		printf("%lld\n", p % (a + 1));
	}
	return 0;
}
