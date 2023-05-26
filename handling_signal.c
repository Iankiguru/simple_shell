#include <dirent.h>
#include "shell.h"

/**
*handling_signal-keeps track of the interactive mode
*@J: this is the signal number.
*Return:  returns void
*/

void handling_signal(int J)
{
	(void)J;
	DIR *d;
	struct dirent *dir;
	d = opendir(".");
	if (d)
	{
		while ((dir = readdir(d)) != NULL)
		{
			printf("%s\n", dir->d_name);
		}
		closedir(d);
	}
}

