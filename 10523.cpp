#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, powr, powrT, powrT2;
    while(scanf("%lld%lld", &n, &a) != EOF){
            powrT2 = 0;
        for(int i =1; i<=n; i++){
            powr = pow(a, i);
            powrT = i*powr;
            powrT2 += powrT;
        }
        printf("%d\n", powrT2);
    }
}
/*

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            int N = in.nextInt();
            int A = in.nextInt();
            BigInteger ans = BigInteger.ZERO;
            ArrayList<BigInteger> powers = new ArrayList<BigInteger>(N);
            powers.add(BigInteger.ONE);

            for (int i = 1; i <= N; i++) {
                BigInteger S_i = powers.get(i - 1).multiply(new BigInteger("" + A));
                powers.add(S_i);
                ans = ans.add(S_i.multiply(new BigInteger(i + "")));
            }

            System.out.println(ans);
        }
    }
}

*/
