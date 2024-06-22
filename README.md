# Kernux
Kernux is simple shell made in C Language.It is only made for this project and is not made for regular use.

I made it on a Linux (Ubuntu) Operating System and it runs fine on it.

The code is similar to the `shell` tutorial mentioned in the credits.


## Limitations
- Commands must be on a single line.
- Arguments must be separated by whitespace.
- Only buildins are `cd`,`env`,`exit` and `help`.


## Running
To use the Program Either run `make` in same directory (for makefile).

OR

Run
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o kernux

and then
> ./kernux

For Non-Interactive Mode:
> echo "/bin/ls" | ./kernux

## Files

| Name | Description |
| ------------------------------ | -------------------------------------------- |
| kernux.h | Header file program. |
| kernux_main.c | Main function, interactive and non-interactive. |
| new_procees.c | Function that creates a new process. |
| own_cd.c | Change directory function. |
| own_env.c | Function that prints environment variables. |
| own_exit.c | Exit shell with a given state. |
| own_help.c | Function that prints help (get information about a command) |
| read_line.c | Read a line from stdin. |
| read_stream.c | Read a line from the stream. |
| shell_interactive.c | Run shell interactive mode. |
| shell_not_interactive.c | Run shell non-interactive mode. |
| split_line.c | Split a string into tokens. |
| execute_args.c | Number of builtin functions. |
| Makefile | Use to easily compile and run |

## Credits
I made this text editor as a project by following this tutorial 
[*_shell_*](https://medium.com/@santiagobedoa/coding-a-shell-using-c-1ea939f10e7e) .
 The source repository of this tutorial is [*_Repository_*](https://github.com/santiagobedoa/shell/tree/master).

P.S. If I need some Licensing then please show me what to do.

