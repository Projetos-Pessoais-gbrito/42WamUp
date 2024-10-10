/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:37:17 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/09 20:05:39 by gserafio         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char *argv[])
{
	char	*temp;
	int		i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = temp;
			i = 1;
		}
		else
		{
			i++;
		}
	}
	ft_print_params(argc, argv);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
	}
	return (0);
}
