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

int		my_open(char *path)
{
	int	handle;

	if ((handle = open(path, O_RDONLY)) == -1)
	{
		my_putstr("Cannot open the file");
		my_putstr(path);
		my_putstr(".\n");
		return (0);
	}
	return (handle);
}
