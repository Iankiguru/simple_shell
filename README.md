Simple Shell Project.
Welcome to the Simple Shell project! This project aims to develop a basic shell implementation written in the C programming language. It is designed to challenge your skills in programming, C language fundamentals, engineering thinking, teamwork, and the ability to learn

Features

•	Supports basic commands such as cd, ls, pwd, echo, and exit.
•	Supports input and output redirection.
•	Supports pipes.
•	Does not have any memory leaks.
•	No more than 5 functions per file.
•	All header files are included guarded.
•	Only uses system calls when necessary.

Usage

To compile the shell, run the following command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
To run the shell, run the following command:
./hsh
The shell will prompt you for a command. Enter a command and press Enter. The shell will execute the command and print the output.

Commands

The following commands are supported by the shell:
1.	cd - Change directory.
2.	ls - List files in the current directory.
3.	pwd - Print the current working directory.
4.	echo - Print a message.
5.	exit - Exit the shell.

Implementation Details

•	The Simple Shell project is implemented using the C programming language, adhering to the following guidelines:
•	Memory management: The shell is designed to prevent memory leaks by carefully managing memory allocation and deallocation throughout the code.
•	Modular structure: Each file contains no more than 5 functions, ensuring a modular and organized codebase.
•	Header files: All header files are include guarded to prevent multiple inclusion and potential compilation issues.
•	Minimal system calls: System calls are used only when necessary to maintain efficiency and minimize dependencies on the operating system.
•	User-centered design: The shell is designed to provide a user-friendly and intuitive command-line interface.

Limitations

This shell is a simple shell and does not support all of the features of a full-featured shell. Some of the limitations of this shell include:
•	It does not support background processes.
•	It does not support environment variables.
•	It does not support complex commands such as if, while, and for loops.
•	Further Development

This shell can be further developed to support additional features. Some of the features that could be added include:
•	Background processes
•	Environment variables
•	Complex commands

Credits

This shell was developed by Ian Kiguru and Derick Mokua.

Authors 

This contains a list of  individuals who have contributed to the development of this project. 
1.	Ian Kiguru.
Email: iankiguru72@outlook.com

2.	Derick Mokua.
Email: derickmokua@outlook.com
