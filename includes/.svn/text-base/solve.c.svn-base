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

int 	my_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int 	explore(t_grid *grid, t_words_list *list, t_coord coord)
{
	int 						i;
	t_word_tf 					*tmp;
	t_checkers_menu		checks[8] = {
		{0, &check_next_u}, {1, &check_next_d}, {2, &check_next_l},
		{3, &check_next_r}, {4, &check_next_ul}, {5, &check_next_ur},
		{6, &check_next_dl}, {7, &check_next_dr}
	};

	for (tmp = list->first; tmp; tmp = tmp->next)
	{
		if (grid->tab[coord.y][coord.x] == tmp->str[0])
		{
			for (i = 0; i != 8; ++i)
			{
				if (checks[i].function(grid, coord, tmp, 1) == TRUE)
				{
					tmp->locations_list->first->start = coord;
				}
			}
		}			
	}
	return (0);
}

int 	solve(t_data *data)
{
	t_coord 		curs;
	
	for (curs.y = 0; curs.y != data->grid->l; curs.y++)
	{
		for (curs.x = 0; curs.x < my_strlen(data->grid->tab[curs.y]); curs.x++)
			explore(data->grid, data->words_list, curs);
	}
	return (0);
}