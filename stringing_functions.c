#include "shell.h"

/**
* _strcmp - this function compares two strings together
* @s1: the string being compared to s2;
* @s2: the string being compared to s1;
* Return:it returns difference between strings
*/
int _strcmp(char *s1, char *s2)
{
	int s = 0, output;

	while (*(s1 + s) == *(s2 + s) && *(s1 + s) != '\0')
		s++;

	output = (*(s1 + s) - *(s2 + s));

	return (output);
}

/**
* _strlen - this function returns the length of a given string
* @s: the being string passed
* Return:it returns length of string passed
*/
int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);
}

/**
* _strncmp - this function compares two strings up to n bytes
* @s1: the given string being compared to s2
* @s2: the given string being compared to s1
* @n: the given number of bytes
* Return: it returns the difference between s1 and s2
*/
int _strncmp(char *s1, char *s2, int n)
{
	int m;

	for (m = 0; s1[m] && s2[m] && m < n; m++)
	{
		if (s1[m] != s2[m])
			return (s1[m] - s2[m]);
	}
	return (0);
}

/**
* _strdup - this function dupicates a given string
* @s: thegiven string to be duplicated
* Return: it returns a pointer to duplicate string
*/
char *_strdup(char *s)
{
	char *pointer;
	int k, length;

	if (s == NULL)
		return (NULL);

	length = _strlen(s);

	pointer = malloc(sizeof(char) * (length + 1));
	if (!pointer)
		return (NULL);
	for (k = 0; *s != '\0'; s++, k++)
		pointer[k] = s[0];

	pointer[k++] = '\0';
	return (pointer);
}

/**
* _strchr - this function locates a character in a given string
* @s: the given string to be checked
* @c: the given character to be located
* Return: it returns pointer to the first instance of the relevant character
*or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}

