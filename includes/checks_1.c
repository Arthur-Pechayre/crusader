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

bool 	check_next_u(t_grid *grid, t_coord curpos, t_word_tf *word, int curs)
{
	if (word->str[curs] == '\0')
	{
		stack_location(word->locations_list, curpos);
		return (TRUE);
	}
	if (curpos.y != 0 && 
		grid->tab[curpos.y - 1][curpos.x] == word->str[curs])
	{
		curpos.y--;
		if (check_next_u(grid, curpos, word, ++curs) == TRUE)
			return (TRUE);
	}
	return (FALSE);
}

bool 	check_next_d(t_grid *grid, t_coord curpos, t_word_tf *word, int curs)
{
	if (word->str[curs] == '\0')
	{
		stack_location(word->locations_list, curpos);
		return (TRUE);
	}
	if (curpos.y != grid->l - 1 &&
		grid->tab[curpos.y + 1][curpos.x] == word->str[curs])
	{
		curpos.y++;
		if (check_next_d(grid, curpos, word, ++curs) == TRUE)
			return (TRUE);
	}
	return (FALSE);
}

bool 	check_next_l(t_grid *grid, t_coord curpos, t_word_tf *word, int curs)
{
	if (word->str[curs] == '\0')
	{
		stack_location(word->locations_list, curpos);
		return (TRUE);
	}
	if (curpos.x != 0 &&
		grid->tab[curpos.y][curpos.x - 1] == word->str[curs])
	{
		curpos.x--;
		if (check_next_l(grid, curpos, word, ++curs) == TRUE)
			return (TRUE);
	}
	return (FALSE);
}

bool 	check_next_r(t_grid *grid, t_coord curpos, t_word_tf *word, int curs)
{
	if (word->str[curs] == '\0')
	{
		stack_location(word->locations_list, curpos);
		return (TRUE);
	}
	if (grid->tab[curpos.y][curpos.x + 1] == word->str[curs])
	{
		curpos.x++;
		if (check_next_r(grid, curpos, word, ++curs) == TRUE)
			return (TRUE);
	}
	return (FALSE);
}
