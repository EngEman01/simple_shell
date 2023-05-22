Simple Shell
A brief overview of the functions used in the simple shell.

Function List
main(): The main entry point of the program. It contains the main loop of the shell where commands are read, parsed, and executed.

print_prompt(): Prints the shell prompt to indicate that it is ready to accept commands.

read_command(): Reads a command entered by the user from the standard input.

parse_command(): Parses the command string into individual tokens and stores them in an array.

execute_command(): Executes the command by searching for the corresponding executable file in the system's directories and executing it using the execv system call.

search_path(): Searches for the full path of an executable file by checking the directories listed in the PATH environment variable.

print_environment(): Prints the current environment variables by iterating through the environ array.

handle_exit(): Handles the built-in exit command, which terminates the shell.

Usage
The functions listed above are used in the shell code to provide basic shell functionality. The main function is the entry point of the program and controls the overall flow of the shell. The print_prompt function displays the shell prompt, and the read_command function reads user input.

The parse_command function splits the command string into tokens, and the execute_command function handles the execution of commands, including searching for the executable file and executing it.

The search_path function searches for the full path of an executable file by checking the directories listed in the PATH environment variable. The print_environment function prints the current environment variables.

The handle_exit function handles the built-in exit command, allowing the user to exit the shell.
