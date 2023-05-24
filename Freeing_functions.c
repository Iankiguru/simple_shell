#include "shell.h"

/**
* free_buffers - frees the buffers
* @buffer:The buffer to be freed.
* Return: void
*/
void free_buffers(char **buffer)
{
	int index = 0;

	if (!buffer || buffer == NULL)
		return;
	while (buffer[index])
	{
		free(buffer[index]);
		index++;
	}
	free(buffer);
}

