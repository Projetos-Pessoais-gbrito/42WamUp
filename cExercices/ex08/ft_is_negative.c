/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:49:36 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/02 23:54:30 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else{
		ft_putchar('P');
	}
}

int main(void)
{
	ft_is_negative(-0);
	return 0;
}