/*
** EPITECH PROJECT, 2017
** parsing_file.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

char	*my_parsing_file(char *str, char *buffer, int size)
{
  char  *string;

  if (str == NULL)
    {
      string = my_buff_strdup(buffer, size);
      return (string);
    }
  string = my_str_concatenate(str, buffer);
  return (string);
}

char	*my_str_file(char *file)
{
  int   fd;
  int   size;
  char  *str;
  char	*new_str;
  char  buffer[65];

  str = NULL;
  if ((fd = open(file, O_RDONLY)) == -1)
    return (NULL);
  while ((size = read(fd, buffer, 64)) > 0)
    {
      buffer[size] = '\0';
      str = my_parsing_file(str, buffer, 65);
    }
  close(fd);
  new_str = my_strncpy(str);
  return (new_str);
}

char	**my_init_tab(char *str)
{
  char	**tab;
  int	i;

  i = -1;
  tab = malloc(sizeof(char *) * (my_nbr_line(str) + 1));
  while (++i < (my_nbr_line(str) + 1))
    tab[i] = malloc(sizeof(char) * (my_nbr_column(str) + 1));
  return (tab);
}

char	**my_put_in_tab(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	k;

  i = -1;
  j = -1;
  k = 0;
  tab = my_init_tab(str);
  while (str[++i] != '\0')
    {
      if (str[i] == '\n')
	{
	  k = k + 1;
	  i = i + 1;
	  j = -1;
	}
      tab[k][++j] = str[i];
    }
  tab[k + 1] = NULL;
  return (tab);
}
