//wap to show a orphan process
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int x = fork();
    if(x>0){
     printf("parent process \n ");    
     exit(0);
    }
    else{
    sleep(2);
    printf("child process \n");
    }
    return 0;
}
