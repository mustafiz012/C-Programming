#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main2()
{
//    int N, graphInput[100][100];
//    cin>>N;
//    for(int i=0; i<N; i++){
//        for(int j=0; j<N; j++){
//           cin>>graphInput[i][j];
//        }
//    }
//
//    for(int i=0; i<N; i++){
//        for(int j=0; j<N; j++){
//           cout<<graphInput[i][j]<<" ";
//        }
//        printf("\n");
//    }

    int node, edge;
    int GraphInput[100][100];
    cin>>node>>edge;
    for(int i=0; i<edge; i++){
        int n1, n2, cost;
        cin>>n1>>n2>>cost;
        GraphInput[n1][n2] = cost;
        GraphInput[n2][n1] = cost;
    }
    return 0;
}
