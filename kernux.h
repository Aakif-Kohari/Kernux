#ifndef KERNUX_H
#define KERNUX_H

/*** Libraries ***/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>

/*** Macros ***/
#define TOK_DELIM " \t\r\n\a\""
extern char **environ;

/*** Prototypes ***/
/* main.c */
void shell_interactive(void);
void shell_not_interactive(void);

/* shell_interactive.c */
char *read_line(void);
char **split_line(char *line);
int execute_args(char **args);

/* execute_args.c */
int new_process(char **args);

/* shell_not_interactive */
char *read_stream(void);

/*** BuiltIn Func ***/
int own_cd(char **args);
int own_exit(char **args);
int own_env(char **args);
int own_help(char **args);

#endif