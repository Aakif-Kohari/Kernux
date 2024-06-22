#include "kernux.h"


char *read_line(void)
{
    char *line = NULL;
    size_t bufsize = 0;

    if (getline( &line, &bufsize, stdin) == -1) /* if getline fails */
    {
        if (feof(stdin)) /* test for EOF */
        {
            free(line);
            exit(EXIT_SUCCESS); /* we received EOF*/
        }
        else
        {
            free(line);
            perror("Error while reading the line from stdin");
            exit(EXIT_FAILURE);
        }
    }
    return(line);
}