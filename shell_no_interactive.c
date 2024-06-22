#include "kernux.h"

void shell_no_interactive(void)
{
    char *line;
    char **args;
    int status = -1;

    do
    {
        line = read_stream();
        args = split_line(line);
        status = execute_args(args);

        /* to avoid memory leaks*/
        free(line);
        free(args);

        /* exit with status */
        if (status >= 0)
        {
            exit(status);
        }
    } while (status == -1);
}