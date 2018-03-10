/*
** EPITECH PROJECT, 2017
** my_start_map.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

int	my_start_map(char *str)
{
  int	i;

  i = 0;
  while (str[i] >= '0' && str[i] <= '9')
    i = i + 1;
  return (i);
}
