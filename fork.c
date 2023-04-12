#include <stdio.h>
#include <unistd.h>

int main() {
	
		
	if (fork() == 0) {
		for (int i = 0; i < 2000; i+=2) {
			printf("pid:%d, ppid:%d, %d - parzyste\n", getpid(), getppid(), i);
		}
	}
	else if (fork() == 0) {
		for (int i = 1; i < 2000; i+=2) {
			printf("pid:%d, ppid:%d, %d - nie parzyste\n", getpid(), getppid(), i);
		}
	}
}
