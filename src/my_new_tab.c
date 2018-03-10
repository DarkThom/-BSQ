/*
** EPITECH PROJECT, 2017
** my_new_tab.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

int	my_put_in_new_tab(int **tab, int abscisse, int ordonate, int square)
{
  int   i;
  int   j;
  int   tmp;

  i = abscisse + square;
  j = ordonate + square;
  tmp = abscisse;
  while (ordonate < j)
    {
      while (abscisse < i)
	{
	  tab[ordonate][abscisse] = -1;
	  abscisse = abscisse + 1;
	}
      abscisse = tmp;
      ordonate = ordonate + 1;
    }
  return (0);
}

int	create_tab(int **tab, int line, int column, int square)
{
  int   i;
  int   j;
  int   ordonate;
  int   abscisse;

  i = -1;
  j = -1;
  abscisse = 0;
  ordonate = 0;
  while (++j < line && tab[j][i] != square)
    {
      while (++i < column && tab[j][i] != square);
      if (i + 1 <= column  && tab[j][i] == square)
	break;
      i = -1;
    }
  abscisse = (i - square + 1);
  ordonate = (j - square + 1);
  my_put_in_new_tab(tab, abscisse, ordonate, square);
  return (0);
}
