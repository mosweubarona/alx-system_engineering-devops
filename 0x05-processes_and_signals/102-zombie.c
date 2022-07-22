#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - creates an infinite loop
 * Return: always 0 when success
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - creates 5 zombie processes
 * Return: always 0 if sucesses
 */
int main(void)
{
	int i;
	pid_t zombie;

	for (i = 0; i < 5; i++)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);
	}

	infinite_while();
	return (0);
}
