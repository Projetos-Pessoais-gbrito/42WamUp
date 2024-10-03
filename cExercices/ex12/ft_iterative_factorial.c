/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:38:36 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/03 00:49:31 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb < 0)
	{
		return 0;
	}
	while (i > 1)
	{
		nb = nb * i;
		i--;
	}
	return nb;
}

int main(void)
{
	ft_iterative_factorial(1000000);
	return (0);
}