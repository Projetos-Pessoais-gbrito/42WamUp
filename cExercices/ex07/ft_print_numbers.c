/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:32:23 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 20:31:35 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	char	int_to_show;

	int_to_show = a + '0';
	write(1, &int_to_show, 1);
}

void	ft_print_alphabet(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar(i);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
