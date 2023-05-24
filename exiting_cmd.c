#include "shell.h"

/**
 * exiting_cmd - A command that handles the exit command.
 * @cmd: The relevant tokenized command.
 * @aline: The relevant input read from stdin.
 * Return: void.
 */
void exiting_cmd(char **cmd, char *aline)
{
	free(aline);
	free_buffers(cmd);
	exit(0);
}

