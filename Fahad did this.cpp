#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    int lenga , lengb;

    while(cin>>a>>b){

        lenga=a.length();
        lengb=b.length();

       // cout<<lenga<<" "<<lengb<<endl;

        if(lenga!=lengb)
        {
            cout<<"the length is not same "<<endl;
        }
        else
        {

            char   temp;
            int tex=lenga;
            for(int j=0;j<lenga;j++){
            for(int i=0;i<tex;i++)
            {
                if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;

                }
            }
            tex--;
            }


            tex=lengb;
            for(int j=0;j<lengb;j++){
            for(int i=0;i<tex;i++)
            {
                if(b[i]>b[i+1]){
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
                }
            }
            tex--;
            }
           // cout<<a<<" "<<b<<endl;

            lenga=a.length();
        lengb=b.length();

     //   cout<<lenga<<" "<<lengb<<endl;

       if(a==b)cout<<"they are euual"<<endl;
       else cout<<"they are not equal "<<endl;

        }

    }


        return 0;
}

//  inspire sinpier
