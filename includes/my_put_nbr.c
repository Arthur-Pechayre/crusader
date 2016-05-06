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

void    my_put_nbr(int nb)
{
  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
  {
    if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
    if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
    else
      my_putchar(nb + 48);
  }
}
