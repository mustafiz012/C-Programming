#include <iostream>
#include<cstdio>
using namespace std;

void primeNum(int range){
    printf("2 ");
    for(int i = 3; i<range; i++){
            int check = 0;
        for(int j = 2; j<i; j++){
            if(i%j == 0)
                {
                    check = 0;
                    break;
                }
            else
                check = 1;
        }
        if(check == 1)
            printf("%d ",i);
    }
    printf("\n");
}

int primaryCase(){
    int sm, up, nom, minNom, input;
    cin>>sm>>up>>nom>>minNom;
    int counter1 = (up-sm)+1;
    int looper = counter1;
    int nomArray[nom];
		for(int k = 0; k<nom; k++){
            cin>>nomArray[k];
		}

    while(looper--){
        input = sm;
        int tempInput = input;
		int digits = 0, divider = 1;
		while(input){
			input = input/10;
			digits++;
		}

		input = tempInput;
		int inputArray[digits];
		for(int i=0; i<digits;i++){
			inputArray[i] = (input/divider)%10;;
			divider *= 10;
		}

		int counter2 =0;
		for(int j =0; j<digits; j++){
            //printf("%d ", inputArray[j]);
			for(int l = 0; l<nom; l++){
                if(nomArray[l] == inputArray[j])
                    counter2++;
			}
            if(counter2 == 2)
                counter1--;
		}
          sm++;
          }


		printf("%d", counter1);

}

int functionn(int x){
    printf("%d\n", x);

    if(x<=1)
        return 1;
    else
        return functionn(x-1)+functionn(x-2);
}

void arraySizeFact(int arr[], size_t arr_size){
    //int arr_size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<arr_size; i++){
        arr[i] = i+1;
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sizedArray(){
    int M = 2;
    int arr[M][M] = {{2, 3},{4,5}};
    for(int i=0; i<M; i++){
        for(int j=0; j<M; j++){
                printf("%d ", arr[i][j]*arr[i][j]);
        }
        printf("\n");
    }
}

void gcd(){
    int n1,n2, gcdd, minn, maxx;

    while(EOF)
    {
        gcdd = 0;
        cin>>n1>>n2;
        if(n1>n2)
        {
            minn = n2;
            maxx = n1;
        }
        else
        {
            minn = n1;
            maxx = n2;
        }
        for(int i=1; i<=minn; i++)
        {
            if(maxx%i == 0 && minn%i == 0)
                gcdd = i;
        }
        printf("GCD: %d\n", gcdd);
    }

}

void checkingEroor(int range, int counter =0){
    int sum, avg; //logical error : assigning value to sum
    for(int i =0; i<range; i++){
        sum += i;
        counter++;
    }
    avg = sum/counter;
    printf("%d %d", sum, avg);
}
int main()
{

    /*
    int inpRang;

    while(1)
        {
            cin>>inpRang;
            primeNum(inpRang);
        }
    */


    //functionn(10);
    //primaryCase();
    //checkingEroor(10);

//    int arr[4] = {0,0,3,0};
//    arraySizeFact(arr, 4);
//    for(int i =0; i<sizeof(arr)/sizeof(arr[0]); i++){
//        printf("%d ", arr[i]);
//    }

    sizedArray();

    return 0;
}
