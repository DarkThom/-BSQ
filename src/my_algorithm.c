/*
** EPITECH PROJECT, 2017
** my_algorithm.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

int	**my_algorithm(int **tab, int line, int column)
{
  int   i;
  int   j;

  i = -1;
  j = -1;
  while (++i < line)
    {
      while (++j < column)
	{
	  if (tab[i][j] == 0)
	    tab[i][j] = 0;
	  else if ((j == 0 || i == 0) && tab[i][j] != 0)
	    tab[i][j] = 1;
	  else
	    tab[i][j] = calc_dimension(tab, i, j);
	}
      j = -1;
    }
  return (tab);
}
