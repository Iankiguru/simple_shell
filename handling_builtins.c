#include "shell.h"

/**
 * handling_builtins - Handles the execution of built-in commands.
 * @cmd: The relevant tokenized commands.
 * @aline: The relevant input read from stdin.
 * Return: 1 if the built-in command is executed, 0 if not.
 */
int handling_builtins(char **cmd, char *aline)
{
	struct built_ins built_ins = {"enve", "exited"};

	if (_strcmp(*cmd, built_ins.enve) == 0)
	{
		printing_env();
		return (1);
	}
	else if (_strcmp(*cmd, built_ins.exited) == 0)
	{
		exiting_cmd(cmd, aline);
		return (1);
	}

	return (0);
}

