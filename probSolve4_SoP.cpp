#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, tester, sum = 0;
	printf("Enter the respective numbers for m, n: \n");
	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		tester = 0;
		for (int j = 2; j <= i / 2; j++) {
			if (i%j == 0) {
				tester++; //tester = 1;
				break;
			}
		}
		printf("\n");
		if (tester == 0 && i != 1) {
			sum += i;
		}
	}

	printf("SoP is: %d", sum);
	return 0;
}
