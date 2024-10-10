/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:16:32 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/09 20:05:17 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

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
