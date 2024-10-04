/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:40:00 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/03 20:51:50 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int a = 1;

	while (a < nb)
	{
		if (a * a == nb)
		{
			return a; 
		}
		if (a * a > nb)
		{
			return 1;
		}
		a++;
	}

	return a;
}

int main(void)
{
	printf("%d" , ft_sqrt(36));
	return (0);
}