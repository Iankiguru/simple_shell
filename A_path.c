#include "shell.h"

/**
* finding_path - A function finds the path from the global env.
* Return: returns NULL if path not found or path if path is found.
*/
char *finding_path(void)
{
	size_t z;
	char **enve = environ, *apath = NULL;

	while (*enve)
	{
		if (_strncmp(*enve, "PATH=", 5) == 0)
		{
			apath = *enve;
			while (*apath && z < 5)
			{
				apath++;
				z++;
			}
			return (apath);
		}
		enve++;
	}
	return (NULL);
}

