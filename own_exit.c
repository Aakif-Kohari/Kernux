#include "kernux.h"

int own_exit(char **args)
{

	/* exit with status */
	if (args[1])
	{
		return (atoi(args[1]));
	}
	
	/* exit success */
	else
	{
		return (0);
	}
}
