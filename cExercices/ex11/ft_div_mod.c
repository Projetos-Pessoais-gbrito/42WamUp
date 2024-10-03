/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:19:44 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/03 00:28:35 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int divToPoint;
	int modToPoint;
	int *pointerToGetDivisor;
	int *pointerToGetModule;
	

	pointerToGetDivisor = &divToPoint;
	pointerToGetModule = &modToPoint;
	ft_div_mod(15, 5, pointerToGetDivisor, pointerToGetModule);
	return (0);
}