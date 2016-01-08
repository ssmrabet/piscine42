/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/25 13:58:42 by smrabet           #+#    #+#             */
/*   Updated: 2015/12/29 22:47:09 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_stdin(void)
{
	int		fd;
	char	*buffer;
	int		ret;

	buffer = (char*)malloc(sizeof(char) * 4096);
	if (buffer == NULL)
		return (-1);
	fd = open("stdin_map", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0666);
	if (fd == -1)
		return (-1);
	while ((ret = read(0, buffer, sizeof(buffer) - 1)))
	{
		buffer[ret] = '\0';
		write(fd, buffer, ft_strlen(buffer));
	}
	if (close(fd) == -1)
		return (-1);
	if (buffer == NULL)
		return (-1);
	free(buffer);
	return (1);
}

int		bsq(int fd, int nb_lines, int nb_cols, t_max *max)
{
	char			*tmp;
	unsigned int	*ptr1;
	unsigned int	*ptr2;
	int				i;

	i = 0;
	tmp = (char*)malloc(sizeof(char) * (nb_cols + 2));
	ptr1 = (unsigned int*)malloc(sizeof(unsigned int) * (nb_cols + 1));
	ptr2 = (unsigned int*)malloc(sizeof(unsigned int) * (nb_cols + 1));
	if (tmp == NULL || ptr1 == NULL || ptr2 == NULL)
		return (-1);
	if (init_first_line(fd, ptr1, tmp, max) == -1)
		return (-1);
	while (++i < nb_lines)
	{
		if (read(fd, &tmp[0], nb_cols + 1) != nb_cols + 1)
			return (put_map_error());
		if ((put_int_tab(&tmp[0], ptr1, ptr2, max)) == -1)
			return (-1);
		swap_ptr(&ptr1, &ptr2);
	}
	if (read(fd, &tmp[0], nb_cols + 1) > 0)
		return (put_map_error());
	free_ptr(&ptr1, &ptr2, &tmp);
	return (0);
}

int		prepare_bsq(char *file)
{
	int		nb_lines;
	int		nb_cols;
	t_max	maximum;
	int		fd;

	maximum.size = 0;
	maximum.new = 1;
	if ((nb_lines = get_nb_lines(&fd, file)) == -1)
		return (-1);
	if ((nb_cols = get_nb_cols(file)) == -1)
		return (-1);
	if (nb_lines == 0 || nb_cols == 0)
		return (put_map_error());
	if ((bsq(fd, nb_lines, nb_cols, &maximum)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	fd = disp_bsq(file, &maximum, nb_lines, nb_cols);
	return ((fd == -1) ? (-1) : (close(fd)));
}

void	verif(char *file)
{
	int		fd;

	if ((fd = open(file, O_RDONLY)) < 0)
		ft_putstr("map error\n");
	close(fd);
}

int		main(int argc, char **argv)
{
	int		tail;
	int		max;
	int		i;

	tail = 0;
	max = 0;
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			verif(argv[i]);
			if ((prepare_bsq(argv[i])) == -1 && i == argc - 1)
				return (-1);
			i++;
		}
	}
	else if (ft_stdin() == 1)
	{
		if ((prepare_bsq("stdin_map")) == -1)
			return (-1);
	}
	else
		return (put_map_error());
	return (0);
}
