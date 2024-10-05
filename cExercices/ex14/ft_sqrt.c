/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:40:00 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 21:44:04 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	while (a < nb)
	{
		if (a * a == nb)
		{
			return (a);
		}
		if (a * a > nb)
		{
			return (1);
		}
		a++;
	}
	return (a);
}

int	main(void)
{
	return (0);
}
