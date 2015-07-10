#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, powrT2;
    while(scanf("%lld %lld", &n, &a) == 2){
            powrT2 = 0;
        for(int i =1; i<=n; i++){
            powrT2 += i*(pow(a, i));
        }
        printf("%d\n", powrT2);
    }
}


/*

package temp;

import java.math.BigInteger;
import java.util.Scanner;

public class Very_easy_10523 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while(in.hasNext()){
			int n = in.nextInt();
			int a = in.nextInt();
			BigInteger powerT = BigInteger.ZERO;
			BigInteger temp = BigInteger.valueOf(a);
			for(int i=1; i <= n; i++){
				powerT = powerT.add(BigInteger.valueOf(i).multiply(temp.pow(i)));
			}
			System.out.println(powerT);
		}
	}
}


*/
