/*
** my_putstr.c for my_putstr.c in /home/pechay_a/Desk/myLib/pechay_a/libmy_01
** 
** Made by PECHAYRE Arthur
** Login   <pechay_a@etna-alternance.net>
** 
** Started on  Sat Oct  3 21:10:54 2015 PECHAYRE Arthur
** Last update Sat Oct  3 21:11:28 2015 PECHAYRE Arthur
*/

#include "crusader.h"

int 	main(int argc, char **argv)
{
	t_data 		*data;

	my_putstr("\033c");
	if (check_args(argc) == TRUE && openables(argv) == TRUE)
	{
		if ((data = malloc(sizeof(t_data*))) == NULL)
			return (-1);
		data = init(argv, data);
		solve(data);
		display_soluce(data);
		freedata_word(data->words_list->first);
		freedata_grid(data->grid);
		return (0);
	}
	return (-1);
}
