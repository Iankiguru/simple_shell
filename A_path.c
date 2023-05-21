#include "shell.h"

/**
* finding_path - this function finds the path from the global env
* Return: returns NULL if path is not found or path if path is found.
*/
char *finding_path(void)
{
	int z;
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

