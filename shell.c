#include "shell.h"
/**
* main -this main function  carries out the read, execute then print output loop
* @ac:the relevant  argument count
* @av:the relevant  argument vector
* @envp:the certain environment vector
* Return: 0 for success
*/

int main(int ac, char **av, char *envp[])
{
	char *line = NULL, *pathcommand = NULL, *path = NULL;
	size_t bufsize = 0;
	ssize_t linesize = 0;
	char **command = NULL, **paths = NULL;
	(void)envp, (void)av;
	if (ac < 1)
		return (-1);
	signal(SIGINT, handling_signal);
	while (1)
	{
		free_buffers(command);
		free_buffers(paths);
		free(pathcommand);
		prompting_aUser();
		linesize = getline(&line, &bufsize, stdin);
		if (linesize < 0)
			break;
		info.ln_count++;
		if (line[linesize - 1] == '\n')
			line[linesize - 1] = '\0';
		command = the_tokenizer(line);
		if (command == NULL || *command == NULL || **command == '\0')
			continue;
		if (checked(command, line))
			continue;
		path = finding_path();
		paths = the_tokenizer(path);
		pathcommand = testing_aPath(paths, command[0]);
		if (!pathcommand)
			perror(av[0]);
		else
			the_execution(pathcommand, command);
	}
	if (linesize < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(line);
	return (0);
}

