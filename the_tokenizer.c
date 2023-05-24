#include "shell.h"

/**
* the_tokenizer - this function creates the tokens from the given input
*@aline: the given string to be tokenized
*Return: it returns an array of strings (tokens)
*/
char **the_tokenizer(char *aline)
{
	char *buffer = NULL, *bufferm = NULL, *token = NULL, *denim = " :\t\r\n";
	char **tokens = NULL;
	int tokensize = 1;
	size_t index = 0, flags = 0;

	buffer = _strdup(aline);
	if (!buffer)
		return (NULL);
	bufferm = buffer;

	while (*bufferm)
	{
		if (_strchr(denim, *bufferm) != NULL && flags == 0)
		{
			tokensize++;
			flags = 1;
		}
		else if (_strchr(denim, *bufferm) == NULL && flags == 1)
			flags = 0;
		bufferm++;
	}

	tokens = malloc(sizeof(char *) * (tokensize + 1));

	token = strtok(buffer, denim);
	while (token)
	{
		tokens[index] = _strdup(token);
		if (tokens[index] == NULL)
		{
			free(tokens);
			return (NULL);
		}
		token = strtok(NULL, denim);
		index++;
	}
	tokens[index] = NULL;
	free(buffer);
	return (tokens);
}

