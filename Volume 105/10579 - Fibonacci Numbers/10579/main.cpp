#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a =1, b =1, c, n, aa;
    cin>>n;
    for(int i =1; i<=n; i++)
    {
        if(i == n)
            aa = a;
        c = a+b;
        a = b;
        b = c;
    }
    printf("%ld ", aa);
    return 0;
}



/* //submitted by me

package temp;

import java.math.BigInteger;
import java.util.Scanner;

public class Fibonacci_Numbers_10579 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n;
		while(in.hasNext()){
			n = in.nextInt();
			BigInteger a = BigInteger.ONE;
			BigInteger b = BigInteger.ONE;
			BigInteger c = BigInteger.ZERO;
			BigInteger aa = BigInteger.ZERO;
			for(int i =1; i<=n;i++){
				if(i==n){
					aa = a;
				}
				c = a.add(b);
				a = b;
				b = c;
			}
			System.out.println(aa);
		}
	}
}


*/
