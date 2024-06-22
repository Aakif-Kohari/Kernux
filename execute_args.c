#include "kernux.h"

int execute_args(char **args)
{
    char *builtin_func_list[] =
    {
        "cd",
        "env",
        "help",
        "exit"
    };
    int (*builtin_func[])(char **) =
    {
        &own_cd,
        &own_env,
        &own_help,
        &own_exit
    };
    int i = 0;

    if (args[0] == NULL)
    {
        /* empt command */
        return (-1);
    }
    
    /* find if command is bulitin */
    for(; i < sizeof(builtin_func_list) / sizeof(char *); i++)
    {
        if (strcmp(args[0], builtin_func_list[i]) == 0)
        {
            return ((*builtin_func[i])(args));
        }
    }
    return(new_process(args));
}