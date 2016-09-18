#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    while(1)
    {
        char w1[100], w2[100];
        scanf("%s", w1);
        scanf("%s", w2);

        int counter =0, i;
        for(i=0; w1[i] != '\0'; i++)
        {
            for(int j=0; w2[j] != '\0'; j++)
            {
                if(w1[i] == w2[j])
                {
                    counter++;
                    for(int k =j; w2[k] != '\0'; k++)
                    {
                        w2[k] = w2[k+1];
                    }
                }
            }
        }
        if(counter == i)
            printf("Possible!\n");
        else
            printf("Not Possible!\n");
    }
    return 0;
}
