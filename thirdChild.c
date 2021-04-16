/*Программа, которая будет вызвана функцией execv()*/

#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h>

int main() 
{ 
    printf("Новый PID: %d\n", getpid());
    return 0; 
} 
