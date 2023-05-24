#include "shell.h"

/**
* appending_path - this function adds a path to the command
* @apath: the path of command
* @cmd: a user entered command
* Return: this function returns buffer containing command with path on success
* NULL on failure
*/
char *appending_path(char *apath, char *cmd)
{
	char *buffer;
	size_t i = 0, j = 0;

	if (cmd == 0)
		cmd = "";

	if (apath == 0)
		apath = "";

buffer = malloc(sizeof(char) * (_strlen(apath) + _strlen(cmd) + 2));

	if (!buffer)
		return (NULL);

	while (apath[i])
	{
		buffer[i] = apath[i];
		i++;
	}

	if (apath[i - 1] != '/')
	{
		buffer[i] = '/';
		i++;
	}
	while (cmd[j])
	{
		buffer[i + j] = cmd[j];
		j++;
	}
	buffer[i + j] = '\0';
	return (buffer);
}

