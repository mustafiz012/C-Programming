#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int L;
    while (cin >> L, L != 0)
    {
        string S;
        cin >> S;

        int minDistance = L;
        int lastR = -L, lastD = -L;
        // Linearly scan the highway.
        for (int i = 0; i < L; ++i)
        {
            // Restaurant and drugstore.
            if (S[i] == 'Z')
            {
                minDistance = 0;
                printf("%d", minDistance);
                break;
            }
            // Restaurant.
            else if (S[i] == 'R')
            {
                minDistance = min(minDistance, i - lastD);
                printf("%d", minDistance);
                lastR = i;
            }
            // Drugstore.
            else if (S[i] == 'D')
            {
                minDistance = min(minDistance, i - lastR);
                printf("%d", minDistance);
                lastD = i;
            }
        }
        cout << minDistance << endl;
    }
    return 0;
}
