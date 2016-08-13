#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    freopen("in.txt","r", stdin);
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
			inputArray[i] = (input/divider)%10;
			divider *= 10;
		}

		int counter2 =0;
		for(int j =0; j<digits; j++){
            //printf("%d ", inputArray[j]);
			for(int l = 0; l<nom; l++){
                if(nomArray[l] == inputArray[j])
                    counter2++;
			}
            if(counter2 >= minNom)
                counter1--;
		}
          sm++;
          }


		printf("%d", counter1);

}
