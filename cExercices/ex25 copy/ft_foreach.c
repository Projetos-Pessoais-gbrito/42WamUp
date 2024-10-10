/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:10:45 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/08 22:37:28 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void ft_putchar(int a){
// 	char numberToShow;

// 	numberToShow = a + '0';

// 	write(1, &numberToShow, 1);
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int main(void)
// {
// 	int sla[] = {1, 2, 4, 2, 3, '\0'};
// 	int lenght;

// 	lenght = 0;
// 	while(sla[lenght])
// 	{
// 		lenght++;
// 	}
// 	ft_foreach(sla, lenght, &ft_putchar);
// 	return(0);
// }