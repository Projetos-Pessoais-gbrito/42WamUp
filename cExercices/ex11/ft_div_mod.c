/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:19:44 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 21:37:00 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	div_to_point;
// 	int	mod_to_point;
// 	int	*pointer_to_get_divisor;
// 	int	*pointer_to_get_module;

// 	pointer_to_get_divisor = &div_to_point;
// 	pointer_to_get_module = &mod_to_point;
// 	ft_div_mod(15, 5, pointer_to_get_divisor, pointer_to_get_module);
// 	return (0);
// }
