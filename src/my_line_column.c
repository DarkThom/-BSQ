/*
** EPITECH PROJECT, 2017
** my_line_column.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

int	my_nbr_line(char *str)
{
  int   i;
  int   line;

  i = 0;
  line = 0;
  while (i < my_strlen(str))
    {
      if (str[i] == '\n' || str[i] == '\0')
	line = line + 1;
      i = i + 1;
    }
  return (line);
}

int	my_nbr_column(char *str)
{
  int   column;
  int   i;

  i = 0;
  column = 0;
  while (i < my_strlen(str))
    {
      if (str[i] == '.' || str[i] == 'o')
	column = column + 1;
      else if (str[i] == '\n' || str[i] == '\0')
	column = column + 0;
      i = i + 1;
    }
  column = column / my_nbr_line(str);
  return (column);
}
