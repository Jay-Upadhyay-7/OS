//wap to show a jombie process
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int x = fork();
    if(x>0){
    sleep(2);
     printf("parent process \n ");    
    }
    else{
    printf("child process \n");
    exit(0);
    }
    return 0;
}
