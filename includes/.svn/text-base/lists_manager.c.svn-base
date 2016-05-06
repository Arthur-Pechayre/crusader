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

t_locations_list*     init_locations_list()
{
    t_locations_list*      pile;
    t_location*            neo_elem;

    if ((pile = malloc(sizeof(*pile))) == NULL)
        return (0);
    if ((neo_elem = malloc(sizeof(*neo_elem))) == NULL)
      return (0);
    neo_elem = NULL;
    pile->first = neo_elem;
    return (pile);
}

int    stack_location(t_locations_list *pile, t_coord end)
{
    t_location             *neo_elem;

    if ((neo_elem = malloc(sizeof(*neo_elem))) == NULL)
      return (0);
    neo_elem->end.x = end.x;
    neo_elem->end.y = end.y;
    neo_elem->next = pile->first;
    pile->first = neo_elem;
    return (1);
}  

t_words_list*     init_words_list()
{
    t_words_list*          pile;
    t_word_tf*             neo_elem;

    if ((pile = malloc(sizeof(*pile))) == NULL)
        return (0);
    if ((neo_elem = malloc(sizeof(*neo_elem))) == NULL)
      return (0);
    neo_elem = NULL;
    pile->first = neo_elem;
    return (pile);
}

int    stack_words_list(t_words_list *pile, char *str)
{
    t_word_tf             *neo_elem;

    if ((neo_elem = malloc(sizeof(*neo_elem))) == NULL)
      return (0);
    neo_elem->str = str;
    neo_elem->locations_list = init_locations_list();
    neo_elem->next = pile->first;
    pile->first = neo_elem;
    return (1);
}
