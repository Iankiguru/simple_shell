#include "shell.h"

/**
* appending_path -adds a path to the command
* @apath: the path of command
* @cmd: command entered by user
* Return:returns buffer containing command with path on success
* NULL on failure
*/
char *appending_path(char *apath, char *cmd)
{
	char *buffer;
	size_t index = 0, counter = 0;

	if (cmd == 0)
		cmd = "";

	if (apath == 0)
		apath = "";

buffer = malloc(sizeof(char) * (_strlen(apath) + _strlen(cmd) + 2));

	if (!buffer)
		return (NULL);

	while (apath[index])
	{
		buffer[index] = apath[index];
		index++;
	}

	if (apath[index - 1] != '/')
	{
		buffer[index] = '/';
		index++;
	}
	while (cmd[counter])
	{
		buffer[index + counter] = cmd[counter];
		counter++;
	}
	buffer[index + counter] = '\0';
	return (buffer);
}

