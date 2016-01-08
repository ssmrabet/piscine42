/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 11:47:40 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/29 12:03:14 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct	s_max
{
	int			x_max;
	int			y_max;
	int			size;
	int			new;
}				t_max;

void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			swap_ptr(unsigned int **ptr1, unsigned int **ptr2);
int				save_max(t_max *max, int i, int line, int current);
void			free_ptr(unsigned int **ptr1,
					unsigned int **ptr2, char **tmp);
int				minimum(unsigned int a, unsigned int b, unsigned int c);
int				get_nb_lines(int *fd, char *file);
int				disp_bsq(char *file, t_max *max, int nb_lines, int nb_cols);
int				get_nb_cols(char *file);
int				go_first_line(char *file, int *fd);
int				ft_atoi(char *str);
int				check_nb_lines(char *str);
int				init_first_line(int fd, unsigned int *first, char *tmp,
					t_max *max);
int				init_first_car(char *tmp, unsigned int *ptr2, t_max *max,
					int line);
int				put_int_tab(char *tmp, unsigned int *ptr1, unsigned int *ptr2,
					t_max *max);
void			print_line(char *tmp, t_max *max, int nb_cols);
int				put_map_error(void);

#endif
