/*
** crusader for crusader in /home/pechay_a/Desk
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 09:00:00 2015 PECHAYRE Arthur
** Last update Sat Oct  3 16:42:42 2015 PECHAYRE Arthur
*/

#include "../crusader.h"

bool	openables(char **argv)
{
	int	i;
	int	handle;

	for (i = 1; i < 3; ++i)
	{
		if ((handle = open(argv[i], O_RDONLY)) == -1)
		{
			my_putstr("Cannot open the files\n");
			return (FALSE);
		}
		close(handle);
	}
	return (TRUE);
}
