/*
** EPITECH PROJECT, 2017
** display_tab.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

void	display_tab(char **tab)
{
  int   i;
  int   j;

  i = -1;
  while (tab[++i] != NULL)
    {
      j = -1;
      while (tab[i][++j] != '\0')
	write(1, &tab[i][j], 1);
    }
}

void	display_tab_two(int **tab, int line, int column)
{
  int   i;
  int   j;

  i = -1;
  while (++i < line)
    {
      j = -1;
      while (++j < column)
	my_put_nbr(tab[i][j]);
      write(1, "\n", 1);
    }
}

int	display_new_tab(int **tab, int line, int column)
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
	    write(1, "o", 1);
	  else if (tab[i][j] > 0)
	    write(1, ".", 1);
	  else if (tab[i][j] == -1)
	    write(1, "x", 1);
	}
      j = -1;
      write(1, "\n", 1);
    }
  return (0);
}
