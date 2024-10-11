/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:02:04 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/11 12:24:21 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_display_file(char *argv[])
{
	int		fd;
	int		size;
	char	c[100];

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (0);
	size = read(fd, c, 99);
	c[size] = '\0';
	ft_putstr(c);
	close(fd);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
		write(1, "\n", 1);
		return (0);
	}
	else if (argc < 2)
	{
		write(1, "File name missing.", 18);
		write(1, "\n", 1);
		return (0);
	}
	ft_display_file(argv);
	return (0);
}
