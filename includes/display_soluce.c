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

void 	ascii_art()
{
	my_putstr("\033[0;32m   _____                          _           \n");
	my_putstr("  / ____|                        | |          \n");
	my_putstr(" | |     _ __ _   _ ___  __ _  __| | ___ _ __ \n");
	my_putstr(" | |    | '__| | | / __|/ _` |/ _` |/ _ \\ '__|\n");
	my_putstr(" | |____| |  | |_| \\__ \\ (_| | (_| |  __/ |   \n");
	my_putstr("  \\_____|_|   \\__,_|___/\\__,_|\\__,_|\\___|_|   \n\033[0m");
}

void 	display_tab(t_grid *grid)
{
	int 	i;
	int 	j;

	ascii_art();
	my_putstr("\n\n");
	for (i = 0; i != grid->l; ++i)
	{
		my_putstr("       |");
		for (j = 0; grid->tab[i][j] != '\0';j++)
		{
			my_putchar(grid->tab[i][j]);
			my_putchar('|');
		}
		my_putchar('\n');
	}
	my_putstr("\n\n");
}

void	display_non_find(t_word_tf *info)
{
	my_putstr("The word \033[0;31m");
	my_putstr(info->str);
	my_putstr("\033[0m was not found in this grid!\n");
}

void	display_info(t_word_tf *info)
{
	t_location	*pos = info->locations_list->first;

	my_putstr("The word \033[0;34m");
	my_putstr(info->str);
	my_putstr("\033[0m was found at the indexes : ");
	for (; pos; pos = pos->next)
	{
		my_putstr("\033[0;36m(");
		my_put_nbr(pos->start.x);
		my_putstr(",");
		my_put_nbr(pos->start.y);
		my_putstr(")\033[0m to ");
		my_putstr("\033[0;31m(");
		my_put_nbr(pos->end.x);
		my_putstr(",");
		my_put_nbr(pos->end.y);
		my_putstr(")\033[0m ");
		if (pos->next)
			my_putstr("; ");
	}
	my_putstr("\n");
}

void	display_soluce(t_data *data)
{
	t_word_tf		*tmp;
	t_words_list	*non_find;

	non_find = init_words_list();
	display_tab(data->grid);
	for (tmp = data->words_list->first; tmp; tmp = tmp->next)
	{
		if (tmp->locations_list->first)
			display_info(tmp);
		else
			stack_words_list(non_find, tmp->str);
	}
	for (tmp = non_find->first; tmp; tmp = tmp->next)
		display_non_find(tmp);
}
