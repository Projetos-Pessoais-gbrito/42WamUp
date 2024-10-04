/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:06:23 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 13:36:31 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int* sizeOfArray = malloc((max - min) * sizeof(int));
	
	if (min >= max)
	{
		return (0);
	}
	
}

int	main(void)
{
	ft_range(0, 10);
	return (0);
}