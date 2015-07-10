#include<bits/stdc++.h>
using namespace std;

typedef struct COMPLEX{
    float real_num, img_num;
}COMPLEX;

COMPLEX summation(COMPLEX num1, COMPLEX num2){
    COMPLEX temp;
    temp.real_num = num1.real_num+num2.real_num;
    temp.img_num = num1.img_num+num2.img_num;
    return temp;
}

int main()
{
    COMPLEX temp, n1, n2;
    scanf("%f%f%f%f",&n1.real_num, &n1.img_num, &n2.real_num, &n2.img_num);
    temp = summation(n1, n2);
    printf("Result: %.2f+%.2f i", temp.real_num, temp.img_num);

}
