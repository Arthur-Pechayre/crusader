/*
** my_putstr.c for my_putstr.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 21:10:54 2015 PECHAYRE Arthur
** Last update Sat Oct  3 21:11:28 2015 PECHAYRE Arthur
*/

#include "../crusader.h"

char 	*get_string_from_file(int handle)
{
	char *str;

	if ((str = malloc(sizeof(char) * SIZE_MAX_ARRAY)) == NULL)
		return (NULL);
	read(handle, str, SIZE_MAX_ARRAY);
	close(handle);
	return (str);
}