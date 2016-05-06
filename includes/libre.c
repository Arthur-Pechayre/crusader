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

void	freedata_word(t_word_tf	*data)
{
	if (data)
	{
		freedata_word(data->next);
		free(data);
	}
}

void	freedata_grid(t_grid	*data)
{
	int i;

	for (i = 0; i < data->l; ++i)
		free(data->tab[i]);
}
