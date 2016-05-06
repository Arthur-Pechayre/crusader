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

int 	my_count_words(char *str, char delimiter)
{
	int 	count;
	int 	i;
	bool 	already;

	for (i = 0, count = 0; str[i] != '\0'; ++i)
	{
	 	if (str[i] == delimiter && already != TRUE)
	 	{
	 		count++;
	 		already = TRUE;
	 	}
	 	else if (str[i] != delimiter)
	 		already = FALSE;
	}
	return (++count);
}
