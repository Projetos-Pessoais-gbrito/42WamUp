/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:10:21 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/09 18:24:23 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/header.h"

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
