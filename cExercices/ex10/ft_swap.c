/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:10:21 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 21:34:52 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*pointer_a;
// 	int	*pointer_b;

// 	a = 0;
// 	b = 1;
// 	pointer_a = &a;
// 	pointer_b = &b;
// 	ft_swap(pointer_a, pointer_b);
// 	return (0);
// }
