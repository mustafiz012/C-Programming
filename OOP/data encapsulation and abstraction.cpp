#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

class Adder{
public:
    //constructor
    Adder(int i =0){
        total = i;
    }
    //interfacing to outside world
    void addNumm(int number){
        total += number;
    }
    //interfacing to outside world
    int getTotal(){
        return total;
    };
private:
    //hidden data from outside world
    int total;
};

class oneSelf{
private:
    char name[20], gender[6];
    int jobAge, salary;
public:
    int getSalary()
    {
        return jobAge*salary;
    }
    void getInfo()
    {
        cin>>name>>gender>>jobAge>>salary;
        printf("Name: \tGender: \tTotal Salary: \n");
        cout<<name<<"\t"<<gender<<"\t\t"<<getSalary()<<endl;
    }
};

int main()
{
    Adder a;
    int input, T;
    printf("how many number u wanna add? \n");
    cin>>T;
    while(T--){
            cin>>input;
            a.addNumm(input);
    }
    //a.addNumm(20);
    //a.addNumm(30);
    cout<<a.getTotal()<<endl;
    oneSelf one;
    one.getInfo();
    return 0;
}
