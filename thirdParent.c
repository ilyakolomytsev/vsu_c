/*Программа, которая вызывает функцию main из файла thirdChild.c*/

#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    char *args[] = {NULL};
    printf("Старый PID: %d\n", getpid());
    execv("./tc", args);
    return 0; 
} 
