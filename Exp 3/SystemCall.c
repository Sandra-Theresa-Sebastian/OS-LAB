#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
	pid_t childpid = fork();

	if (childpid == 0) {
		printf("Current running process: CHILD PROCESS\n");
		printf("Process ID: %d\n", getpid());
		printf("Parent process ID: %d\n", getppid());
	}
	else if (childpid > 0) {
		printf("Current running process: PARENT PROCESS\n");
		printf("Process ID: %d\n", getpid());
		printf("Child process ID: %d\n", childpid);
		wait(NULL);
		printf("Parent Process is stopped at the moment.\n");
	}
	else if (childpid < 0) {
		printf("Parent process creation: UNSUCCESSFULL");
	}

	exit(0);
}
