/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:03:10 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/03 21:09:05 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(*str)
	{
		i++;
		str++;
	}
	
	return i;
}

int main(void)
{
	char *test = "testtest";
	printf("%d", ft_strlen(test));
	return(0);
}