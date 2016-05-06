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

char 	**my_explode(char *src, char delimiter)
{
	char 	**buffer;
	int 	i;
	int 	z;
	int 	count;
	int 	cursor;

	count = my_count_words(src, delimiter);
	if ((buffer = malloc(count * sizeof(char*))) == NULL)
		return (NULL);
	for (i = 0; i != count; ++i)
	{
		if ((buffer[i] = malloc(256)) == NULL)
			return (NULL);
	}
	for (i = 0, z = 0, cursor = 0; src[cursor] != '\0'; ++cursor)
	{
		if (src[cursor] != delimiter)
			buffer[i][z++] = src[cursor];
	 	else if (z != 0)
	 	{
	 		i++;
	 		z = 0;
	 	}
	}
	return (buffer);
}
