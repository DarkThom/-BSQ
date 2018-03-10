/*
** EPITECH PROJECT, 2017
** my_str_concatenate.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

char	*my_str_concatenate(char *src, char *dest)
{
  int	i;
  char	*str;
  int	size;
  int	size_two;

  i = 0;
  size = my_strlen(src);
  size_two = my_strlen(dest);
  if ((str = malloc(sizeof(char) * (size + size_two + 2))) == NULL)
    return (NULL);
  while (*src != '\0')
    {
      str[i] = *src;
      i = i + 1;
      src = src + 1;
    }
  while (*dest != '\0')
    {
      str[i] = *dest;
      i = i + 1;
      dest = dest + 1;
    }
  str[i] = '\0';
  return (str);
}
