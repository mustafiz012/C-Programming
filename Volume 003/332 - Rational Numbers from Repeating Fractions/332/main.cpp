#include<bits/stdc++.h>
#define ll  unsigned long long int
using namespace std;


int main()
{
     ll j,k,d,n,g,len,t=1;
     double pw;
      string p;
      while(cin>>j)
      {
            if(j==-1)
                  break;
            cin>>p;
            //len=p.length()-2;

            len=p.length()-p.find(".")-1;
             string c=p.substr(p.length()-j);
            //cout<<c<<endl;
            //cout<<len<<endl;
            if(j!=0)
            {k=len-j;

            d=ceil(pow(10,len)-pow(10,k));}
            else
                  d=ceil(pow(10,len));


            p+=c+c+c+c+c+c;
            pw=atof(p.c_str());
           //cout<<pw<<endl;
            n=ceil(d*pw);
           // cout<<n<<endl;
            g=__gcd(n,d);
            cout<<"Case "<<t<<": "<<(ll)n/g<<"/"<<(ll)d/g<<endl;
            t++;
      }


 }
