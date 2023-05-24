#include "shell.h"

/**
* _putchar - this function writes the character c to stdout
* @c: The character to print
*
* Return: it returns On success 1.
* On error, -1 is returned and errno set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_s - this function prints a given string
* @s: the given string to be printed
*
* Return: it returns the number of characters printed
*/
int print_s(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		_putchar(s[k]);
		k++;
	}

	return (k);
}

