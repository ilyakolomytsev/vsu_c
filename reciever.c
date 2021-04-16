/*Выводит строку "Ожидание сигнала"
  При получении каждого из сигналов меняет выводимую строку.*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>

char str[60] = "Ожидание сигнала \n";
void hdl (int sig) {
	switch (sig) {
	case SIGUSR1:
		strcpy(str, "Получен сигнал SIGUSR1 \n");
		break;
	case SIGUSR2:
		strcpy(str, "Получен сигнал SIGUSR2 \n");
		break;
	}
}

int main() {
	signal(SIGUSR1, hdl);
	signal(SIGUSR2, hdl);
	while (1) {
		printf("PID: %d и %s", (int)getpid(), str);
		sleep(1);
	}
	return 0;
}
