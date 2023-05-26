#include "shell.h"

/**
*handling_signal-keeps track of the interactive mode
*@J: this is the signal number.
*Return:  returns void
*/

void handling_signal(int J)
{
	(void)J;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
