/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 10:16:39 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/15 14:04:58 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>

# define BUF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_cat(char *file);
void	ft_puterr(char *name, char *file, int no);
int		ft_tail(int sign, int tail, int size, char *file);
int		size_files(char *file);

#endif
