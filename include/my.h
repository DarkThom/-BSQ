/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** Created by Thomas BLENEAU
*/

#ifndef MY_H_
# define MY_H_

/*
** Include de la libC
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*
** Prototypes de fonctions basique
*/

char	*my_buff_strdup(char *buffer, int size);
char	*my_strdup(char *buffer);
char	*my_str_concatenate(char *src, char *dest);
char	*my_strncpy(char *str);
int	my_strlen(char *str);
int	my_nbr_line(char *str);
int	my_nbr_column(char *str);
int	my_put_nbr(int nb);
void	my_putchar(char c);

/*
** Prototypes de fonctions BSQ
*/

char	**my_put_in_tab(char *str);
char	*my_parsing_file(char *str, char *buffer, int size);
char	*my_str_file(char *file);
int	**my_put_in_tab_two(char **tab, int line, int column);
int	my_put_in_new_tab(int **tab, int abscissa, int ordonate, int square);
int	my_start_map(char *str);
int	calc_dimension(int **tab, int i, int j);
int	**my_algorithm(int **tab, int line, int column);
int	**my_init_tab_two(int line, int column);
int	create_tab(int **tab, int line, int column, int square);
int	find_square(int **tab, int line, int column);
int	display_new_tab(int **tab, int line, int column);
void	display_tab(char **tab);
void	display_tab_two(int **tab, int line, int column);

#endif /* !MY_H_ */
