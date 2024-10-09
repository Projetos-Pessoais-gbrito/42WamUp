/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:47:17 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/08 22:34:25 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_count_elements(char *a)
// {
// 	int	i;

// 	i = 0;
// 	while (a[i])
// 	{
// 		if (a[i] == 'a')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	element_final_count;

	i = 0;
	element_final_count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			element_final_count++;
		i++;
	}
	return (element_final_count);
}

// int	main(void)
// {
// 	char *tab[] = {"staring", "straing", NULL};

// 	printf("%d", ft_count_if(tab, &ft_count_elements));
// 	return (0);
// }