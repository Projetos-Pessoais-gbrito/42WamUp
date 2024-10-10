/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:13:03 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/09 20:35:31 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb > 12)
		return (0);
	if (a <= 1)
		return (nb);
	nb = nb * ft_recursive_factorial(a - 1);
	return (nb);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(13));
// 	return (0);
// }
