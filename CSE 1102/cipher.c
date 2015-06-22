#include <stdio.h>

int main()
{
    char c[100];
    printf("Plain text input:\n");
    gets(c);
    int i = 0;
    printf("Encrypted : ");
    while(1) {
            if(c[i] == '\0') {
                break;
            }
        c[i] = c[i] - 65;
        c[i] = c[i] + 3;
        c[i] = c[i] % 26;
        c[i] = c[i] + 65;
        if(c[i] == 61){
            c[i] = c[i] - 29;
        }
        printf("%c",c[i]);
        i++;
    }
    printf("\nDecrypted : ");
    i = 0;
        while(1) {
            if(c[i] == '\0') {
                break;
            }
        c[i] = c[i] - 65;
        c[i] = c[i] - 3;
        if(c[i] < 0){
            c[i] = c[i] + 26;
        }
        //c[i] = c[i] % 26;
        c[i] = c[i] + 65;
        if(c[i] == 55){
            c[i] = c[i] - 23;
        }
        printf("%c",c[i]);
        i++;
}

}
