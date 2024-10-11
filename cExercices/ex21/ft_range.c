/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:06:23 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/10 23:54:38 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dynamic_size_array;
	int	i;

	dynamic_size_array = malloc((max - min) * sizeof(int));
	i = 0;
	if (dynamic_size_array == 0)
		return (0);
	if (min >= max)
		return (0);
	while (min < max)
	{
		dynamic_size_array[i] = min;
		min++;
		i++;
	}
	return (dynamic_size_array);
}

// int	main(void)
// {
// 	int	*array_returned;

// 	array_returned = ft_range(8, 10);
// 	for (int i = 0; i < (10 - 8); i++)
// 	{
// 		printf("%d\n", array_returned[i]);
// 	}
// 	return (0);
// }