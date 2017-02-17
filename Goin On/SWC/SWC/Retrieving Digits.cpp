#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int T, Ans;
char S[2000];
int digits[100];
void readCase(){
	scanf("%s", S);
}
void deletion(int i){
	for (int j = i; S[j] != '\0'; j++)
		S[j] = S[j + 1];
}
void traverse(char ch){
	for (int i = 0; S[i] != '\0'; i++){
		if (S[i] == ch)
		{
			deletion(i);
			break;
		}
	}
}
void traversed(){
	for (int i = 0; S[i] != '\0'; i++){
		printf("%c", S[i]);
	}printf("\n");
}
bool checkChar(char ch){
	for (int i = 0; S[i] != '\0'; i++){
		if (S[i] == ch)
		{
			deletion(i);
			return true;
		}
		return false;
	}
}
void solve(int index){
	for (int i = index; S[i] != '\0'; i++){
		if (S[i] == 'Z'){
			deletion(i);
			//traverse('Z');
			traverse('E');
			traverse('R');
			traverse('O');
			printf("0");
			//traversed();
		}
		else if (S[i] == 'W'){
			deletion(i);
			traverse('T');
			//traverse('W');
			traverse('O');
			printf("2");
			//traversed();
		}
		else if (S[i] == 'U'){
			deletion(i);
			traverse('F');
			traverse('O');
			//traverse('U');
			traverse('R');
			printf("4");
		}
		else if (S[i] == 'X'){
			deletion(i);
			traverse('S');
			traverse('I');
			//traverse('X');
			printf("6");
		}
		else if (S[i] == 'G'){
			deletion(i);
			traverse('E');
			traverse('I');
			//traverse('G');
			traverse('H');
			traverse('T');
			printf("8");
		}
	}

	for (int i = index; S[i] != '\0'; i++){
		if (S[i] == 'O' && checkChar('N') == true && checkChar('E') == true){
			deletion(i);
			//traverse('O');
			//traverse('N');
			//traverse('E');
			printf("1");
		}
		else if (S[i] == 'F' && checkChar('I') == true && checkChar('V') == true){
			//traverse('F');
			//traverse('I');
			//traverse('V');
			deletion(i);
			traverse('E');
			printf("6");
		}
		else if (S[i] == 'N' && checkChar('I') == true){
			//traverse('N');
			//traverse('I');
			deletion(i);
			traverse('N');
			traverse('E');
			printf("9");
		}
		else if (S[i] == 'S'){
			//traverse('S');
			deletion(i);
			traverse('E');
			traverse('V');
			traverse('E');
			traverse('N');
			printf("7");
		}
		else if (S[i] == 'T'){
			//traverse('T');
			deletion(i);
			traverse('H');
			traverse('R');
			traverse('E');
			traverse('E');
			printf("3");
		}
	}
	traversed();
}
void solveCase(){
	solve(0);
	printf("\n");
}

void printCase(){

}

int main(){
	//cin >> T;
	while (1){
		readCase();
		solveCase();
		printCase();
	}
	return 0;
}