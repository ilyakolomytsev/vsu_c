/*Создание нового процесса с помощью fork()*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(){
	pid_t pid;
	int ex;
	switch (pid=fork()){
		case 0:
			printf("Текущий PID: %d \n", (int)getpid());
			printf("Родительский PID: %d \n", (int)getppid());
			exit(ex);
			break;
		default:
			printf("Текущий PID: %d \n", (int)getpid());
			printf("Родительский PID: %d \n", (int)getppid());
			wait(0);
		       	break;
	}
	return 0;	
}
