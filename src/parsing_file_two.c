/*
** EPITECH PROJECT, 2017
** parsing_file_two.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

int	**my_init_tab_two(int line, int column)
{
  int	**tab;
  int   i;

  i = -1;
  tab = malloc(sizeof(int *) * (line + 1));
  while (++i < (line + 1))
    tab[i] = malloc(sizeof(int) * (column + 1));
  return (tab);
}

int	**my_put_in_tab_two(char **tab_str, int line, int column)
{
  int	i;
  int	j;
  int	**tab;

  i = -1;
  j = -1;
  tab = my_init_tab_two(line, column);
  while (++i < line)
    {
      while (++j < column)
	{
	  if (tab_str[i][j] == '.')
	    tab[i][j] = 1;
	  else if (tab_str[i][j] == 'o')
	    tab[i][j] = 0;
	}
      j = -1;
    }
  return (tab);
}
