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

t_words_list* 		stack_words(char **strs, int number_of_words)
{
	t_words_list	 	*words_list;
	int 				i;

	words_list = init_words_list();
	for (i = 0; i != number_of_words; ++i)
		stack_words_list(words_list, strs[i]);
	return (words_list);
}

t_data 				*init(char **argv, t_data *data)
{
	t_grid 		*grid;
	char 		*words;
	char		*grid_string;

	if ((grid = malloc(sizeof(t_grid*))) == NULL)
		return (NULL);
	words = get_string_from_file(my_open(argv[2]));
	grid_string = get_string_from_file(my_open(argv[1]));
	data->words_list = stack_words(my_explode(words, '\n'),
					   my_count_words(words, '\n'));
	grid->tab = my_explode(grid_string, '\n');
	grid->l = my_count_words(grid_string, '\n');
	data->grid = grid;
	return (data);
}