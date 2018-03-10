/*
** EPITECH PROJECT, 2017
** utilities.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0');
  return (i);
}

char	*my_buff_strdup(char *buffer, int size)
{
  int	i;
  char	*str;

  i = 0;
  str = malloc(sizeof(char) * (size + 1));
  while (i < size)
    {
      str[i] = buffer[i];
      i = i + 1;
    }
  str[i] = '\0';
  return (str);
}

char	*my_strncpy(char *str)
{
  char	*new_str;
  int	n;
  int	i;

  i = 0;
  n = my_start_map(str) + 1;
  new_str = malloc(sizeof(char) * (my_strlen(str) + 1));
  while (n < my_strlen(str))
    {
      new_str[i] = str[n];
      n = n + 1;
      i = i + 1;
    }
  new_str[i] = '\0';
  return (new_str);
}
