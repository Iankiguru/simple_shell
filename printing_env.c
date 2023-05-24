#include "shell.h"

/**
*printing_env -this function prints the environment string to stdout
*Return: 0 for success
*/
void printing_env(void)
{
	int f = 0;
	char **enve = environ;

	while (enve[f])
	{
		write(STDOUT_FILENO, (const void *)enve[f], _strlen(enve[f]));
		write(STDOUT_FILENO, "\n", 1);
		f++;
	}
}

