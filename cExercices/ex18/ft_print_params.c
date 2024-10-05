/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:16:32 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 21:47:45 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i])
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		write(1, "\n", 1);
		a++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_print_params(argc, argv);
	}
	return (0);
}
