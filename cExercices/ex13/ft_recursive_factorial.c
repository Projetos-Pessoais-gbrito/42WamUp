/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:13:03 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 21:38:28 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	a;

	a = nb;
	if (a <= 1)
	{
		return (nb);
	}
	nb = nb * ft_recursive_factorial(a - 1);
	return (nb);
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(7));
	return (0);
}
