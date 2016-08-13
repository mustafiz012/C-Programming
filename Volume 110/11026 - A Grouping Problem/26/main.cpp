#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    printf("Hello 11026\n");
    int N, M;
    while(scanf("%d %d", &N, &M))
    {
        if(N == 0 && M == 0)
            break;
        int arr[N], sum[N];
        for(int i=0; i<N; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(int i =0; i<N; i++){
            int arr2[N], summ =0;
            for(int k =0; k<N; k++){
                arr2[k] = (arr[i]*10)+arr[i+1];
            }
            for(int j=0; j<N; j++){
                //summ += arr[j];
            }
                printf("%d ", arr2[j]);
            //sum[i] = summ;
        }
        printf("\n");
    }
    return 0;
}
