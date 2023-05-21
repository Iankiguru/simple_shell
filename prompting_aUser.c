#include "shell.h"

/**
* prompting_aUser - this function prints $ to let the user know the program is
* ready to take their input
* prints the prompt, if the shell is in the interactive mode
* Return: void
*/
void prompting_aUser(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}

