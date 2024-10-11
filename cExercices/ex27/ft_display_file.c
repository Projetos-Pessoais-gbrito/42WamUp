/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:02:04 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/11 17:22:51 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char *a)
{
	write(1, a, 1);
}

void	ft_display_file(char *argv[])
{
	int		fd;
	char	c;

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &c, 1))
	{
		ft_putchar(&c);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		write(2, "Too many arguments.", 19);
		write(2, "\n", 1);
		return (0);
	}
	else if (argc < 2)
	{
		write(2, "File name missing.", 18);
		write(2, "\n", 1);
		return (0);
	}
	ft_display_file(argv);
	return (0);
}
