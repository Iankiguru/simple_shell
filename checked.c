#include "shell.h"
/**
*checked-this function checks to see whether its a builtin function
*@cdm: a tokenized user input
*@buffer: this is a line derived from the getline function
*Return: this function returns 1 if cdm is excuted, 0 if cdm is not executed
*/
int checked(char **cdm, char *buffer)
{
	if (handling_builtins(cdm, buffer))
		return (1);
	else if (**cdm == '/')
	{
		the_execution(cdm[0], cdm);
		return (1);
	}
	return (0);
}
