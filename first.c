/*Выводит ID текущего и родительского процессов*/

#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Текущий PID: %d \n", (int)getpid());
	printf("Родительский PID: %d \n", (int)getppid());
	return 0;
}
