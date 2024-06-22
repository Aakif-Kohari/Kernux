#include "kernux.h"


int own_cd(char **args)
{
	if(args[1] == NULL)
	{
		fprintf(stderr, "Expected argument to \"cd\"\n");
	}
	else
	{
		if(chdir(args[1]) != 0)
		{
			perror("Error in own_cd.c: changing dir\n");
		}
	}
	return (-1);
}
