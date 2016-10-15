#include <cmath>
#include <cstdio>
#include<stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	vector <int> v;
	int N, val, pos;
	cin >> N;
	for (int i = 0; i<N; i++) {
		cin >> val;
		v.push_back(val);
	}
	cin >> pos;
	int r1, r2;
	cin >> r1 >> r2;
	v.erase(v.begin()+ (pos-1));
	N = v.size();
	for (int i = 0; i<N; i++)
		printf("%d ", v[i]);
	v.erase(v.begin() + (r1-1), v.begin() + (r2-1));
	N = v.size();
	printf("%d\n", N);
	for (int i = 0; i<N; i++)
		printf("%d ", v[i]);
	return 0;
}
