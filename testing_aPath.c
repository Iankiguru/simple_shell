#include "shell.h"

/**
 * testing_aPath - Checks whether the path is valid.
 * @aPath: The relevant tokenized path.
 * @cmd: A user-entered command.
 * Return: The path appended with the command on success, NULL on failure.
 */
char *testing_aPath(char **aPath, char *cmd)
{
	int s = 0;
	char *opt;

	while (aPath[s])
	{
		opt = appending_aPath(aPath[s], cmd);
		if (access(opt, F_OK | X_OK) == 0)
			return (opt);
		free(opt);
		s++;
	}

	return (NULL);
}

