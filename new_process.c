#include "kernux.h"


int new_process(char **args)
{
    pid_t pid;
    int status;

    pid = fork();
    if(pid == 0)
    {
        /* child process */
        if(execvp(args[0], args) == -1)
        {
            perror("Error in new_process: child process");
        }
        exit(EXIT_FAILURE);
    }
    else if(pid < 0)
    {
        /* error forking */
        perror("Error in new_process: forking");
    }
    else
    {
        /* parent process */
        do
        {
            waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
    return (-1);
}