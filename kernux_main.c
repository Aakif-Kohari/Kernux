#include "kernux.h"


int main(void)
{
    if(isatty(STDIN_FILENO) == 1)
    /* determines if the file discriptor is 1 that is we are in interactive mode with the shell */
    {
        shell_interactive();
    } 
    else
    {
        shell_not_interactive();
    }

    return (0);
}