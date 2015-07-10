#include<iostream>
#include<cstdio>
using namespace std;

void example2(){
    int n, sum =0;
    printf("\nUpto: ");
    cin>>n;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    printf("\nSummation: %d", sum);
}

void example3(){
    int n;
    printf("\nUpto: ");
    cin>>n;
    for(int i =1; i <=n; i++){
        for(int j =0; j<i; j++){
            printf("* ");
        }
        cout<<endl;
    }
}

void example3(){

}

int main()
{
    int m, n;
    cin>>m>>n;
    if(m>n){
    for(int i =n; i<=m; i++){
        printf("%d ", i);
        }
    }
    else{
         for(int i =m; i<=n; i++){
        printf("%d ", i);
        }
    }

    example2();
    example3();
    example4();
}
