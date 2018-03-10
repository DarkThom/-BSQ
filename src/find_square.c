/*
** EPITECH PROJECT, 2017
** find_square.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

int	find_square(int **tab, int line, int column)
{
  int	i;
  int	j;
  int	square;

  i = -1;
  j = -1;
  square = 0;
  while (++i < line)
    {
      while (++j < column)
	{
	  if (tab[i][j] > square)
	    square = tab[i][j];
	}
      j = -1;
    }
  return (square);
}
