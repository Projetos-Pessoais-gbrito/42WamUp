/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:38:36 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/09 20:35:21 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	while (i >= 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(13));
// 	return (0);
// }