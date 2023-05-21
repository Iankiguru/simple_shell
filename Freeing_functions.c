#include "shell.h"

/**
* free_buffers - this fuction frees the buffers
* @buffer:the buffer to be freed
* Return: void
*/
void free_buffers(char **buffer)
{
	int j = 0;

	if (!buffer || buffer == NULL)
		return;
	while (buffer[j])
	{
		free(buffer[j]);
		j++;
	}
	free(buffer);
}

