#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
    pid_t pid;

    pid = fork();

    if(pid < 0){    //error occurred
        fprintf(stderr, "Forking failed!!\n");
        return 1;
    }
    else if(pid == 0){  //child process
        execlp("/bin/ls", "ls", NULL);
    }
    else{
        wait(NULL);
        printf("Child process!!\n");
    }
    return 0;
}
