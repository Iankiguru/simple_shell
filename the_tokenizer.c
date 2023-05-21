#include "shell.h"

/**
 * count_tokens - Counts the number of tokens in a string.
 * @str: The string to count tokens from.
 * @delim: The delimiter used to tokenize the string.
 * Return: The number of tokens.
 */
static int count_tokens(char *str, char *delim)
{
	int count = 0;
	int is_token = 0;

	while (*str)
	{
		if (strchr(delim, *str) && !is_token)
		{
			count++;
			is_token = 1;
		}
		else if (!strchr(delim, *str))
		{
			is_token = 0;
		}
		str++;
	}

	return (count);
}

/**
 * tokenize_string - Tokenizes a string into an array of tokens.
 * @str: The string to tokenize.
 * @delim: The delimiter used to tokenize the string.
 * @token_count: The number of tokens.
 * Return: The array of tokens.
 */
static char **tokenize_string(char *str, char *delim, int token_count)
{
	char **tokens;
	char *token;
	int i = 0;

	tokens = malloc(sizeof(char *) * (token_count + 1));
	if (tokens == NULL)
		return (NULL);

	token = strtok(str, delim);
	while (token)
	{
		tokens[i] = strdup(token);
		if (tokens[i] == NULL)
		{
			free_tokens(tokens, i);
			return (NULL);
		}
		token = strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;

	return (tokens);
}

/**
 * the_tokenizer - Creates tokens from a given input.
 * @aline: The source to be tokenized.
 * Return: The array of tokens.
 */
char **the_tokenizer(char *aline)
{
	char *buffer;
	char **tokened;
	int token_count;

	buffer = _strdup(aline);
	if (buffer == NULL)
		return (NULL);

	token_count = count_tokens(buffer, " :\t\r\n");
	tokened = tokenize_string(buffer, " :\t\r\n", token_count);
	free(buffer);

	return (tokened);
}

