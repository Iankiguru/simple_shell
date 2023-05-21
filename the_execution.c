#include "shell.h"

/**
*the_execution - this function Executes commands entered by the user.
* @pc: The actual command being executed.
* @command: The array of pointers to the commands.
* Return: void.
*/
void the_execution(char *pc, char **command)
{
	pid_t child_pid;
	int status;
	char **enve = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(pc);
	else if (child_pid == 0)
	{
		execve(pc, command, enve);
		perror(pc);
		free(pc);
		free_buffers(command);
		exit(98);
	}
	else
		wait(&status);
}

