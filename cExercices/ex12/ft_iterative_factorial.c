/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:38:36 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/10 23:58:43 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	res;

	if (nb < 0 || nb > 12)
		return (0);
	i = 2;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		++i;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(12));
// 	return (0);
// }