#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n;)
        {
            if (array[j] == array[j+1])
            {
                for(int k =j; k < n; k++)
                {
                    array[k] = array[k+1];
                }
                n--;
            }
            else j++;
        }
    }


    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

}
