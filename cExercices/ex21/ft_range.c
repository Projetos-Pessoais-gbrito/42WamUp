/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:06:23 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 21:52:19 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*dynamic_size_array;
	int	i;

	dynamic_size_array = malloc((max - min) * sizeof(int));
	i = 0;
	if (dynamic_size_array == NULL)
	{
		return (NULL);
	}
	if (min >= max)
	{
		free(dynamic_size_array);
		return (0);
	}
	while (min < max)
	{
		dynamic_size_array[i] = min;
		min++;
		i++;
	}
	return (dynamic_size_array);
}

int	main(void)
{
	int	*array_returned;

	array_returned = ft_range(8, 10);
	free(array_returned);
	return (0);
}
