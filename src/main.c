/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** Created by Thomas BLENEAU
*/

#include "../include/my.h"

int	check_params(int ac, char **av)
{
  int	i;
  int	fd;
  char	buffer[65];
  char	*str;

  i = -1;
  if ((fd = open(av[1], O_RDONLY)) == -1)
    return (1);
  else if (read(fd, buffer, 64) == 0)
    return (1);
  if (ac != 2)
    {
      write(2, "Usage : ./bsq file\n", 19);
      return (1);
    }
  str = my_str_file(av[1]);
  while (str[++i] != '\0')
    {
      if (str[i] != '\n' && str[i] != '.' && str[i] != 'o')
	return (1);
    }
  return (0);
}

int	main(int ac, char **av)
{
  char	*str;
  int	line;
  int	column;
  int	**tab;

  if (check_params(ac, av))
    return (84);
  str = my_str_file(av[1]);
  line = my_nbr_line(str);
  column = my_nbr_column(str);
  tab = my_algorithm(my_put_in_tab_two(my_put_in_tab(str),
				       line, column), line, column);
  create_tab(tab, line, column, find_square(tab, line, column));
  display_new_tab(tab, line, column);
  return (0);
}
