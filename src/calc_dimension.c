/*
** EPITECH PROJECT, 2017
** calc_dimension.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

int	calc_dimension(int **tab, int i, int j)
{
  int	square;
  int	height;
  int	width;

  if (i != 0 && j != 0)
    {
      square = tab[i - 1][j - 1];
      height = tab[i - 1][j];
      width = tab[i][j - 1];
    }
  if (square <= height && height <= width)
    return (square + 1);
  else if (height <= square && height <= width)
    return (height + 1);
  else if (width <= square && width <= square)
    return (width + 1);
  return (0);
}
