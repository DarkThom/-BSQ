/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

int	my_digits(int nb)
{
  int	div;

  div = 1;
  while (nb > 9)
    {
      nb = nb / 10;
      div = div * 10;
    }
  return (div);
}

int	my_put_nbr(int nb)
{
  int	div;

  if (nb < 0 && nb != -2147483648)
    {
      nb = nb * -1;
      write(1, "-", 1);
    }
  if (nb == -2147483648)
    write(1, "-2147483648", 11);
  div = my_digits(nb);
  while (div != 0 && nb != -2147483648)
    {
      my_putchar(nb / div + 48);
      nb = nb % div;
      div = div / 10;
    }
  return (0);
}
