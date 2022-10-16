/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:55:42 by vismaily          #+#    #+#             */
/*   Updated: 2022/10/16 12:02:19 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>

typedef struct s_matrix
{
	int	**map_matrix;
	int	**input_matrix;
	int	***helper_matrix;
}		t_matrix;

size_t	ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *s);
char	*ft_strchr(const char *str, int c);

int		parsing_argv(char *argv);
int		init_struct(t_matrix *matrixes, int size);
void	free_matrix_2d(int **matrix, int i);
void	free_matrix_3d(int ***matrix, int size);

void	fill_map_matrix(int **map_matrix, int size);
int		fill_input_matrix(char *argv, int **input_matrix, int size);

int		fill_helper_matrix(t_matrix *matrixes, int size);
int		optimizer_up(t_matrix *matrixes, int size);
int		optimizer_down(t_matrix *matrixes, int size);
int		optimizer_left(t_matrix *matrixes, int size);
int		optimizer_right(t_matrix *matrixes, int size);
int		pair_1_2(t_matrix *matrixes, int size);
void	pair_2_2(t_matrix *matrixes, int size);
int		cross_clear(t_matrix *matrixes, int size);
int		find_unique(t_matrix *matrixes, int size);

void	print_map(int **matrix);
int		check_map(t_matrix *matrixes, int size);
int		change_matrix(t_matrix *matrixes, int size);

void	cut_values(int *str, int val, int size);
void	cut_value(int *str, int val, int size);
int		*max_pos(int *str, int size);
int		if_in(int *str, int val, int size);

#endif
