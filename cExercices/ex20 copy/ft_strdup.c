/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:05:04 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/09 20:06:22 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*src_dup;

	i = 0;
	while (src[i])
	{
		i++;
	}
	src_dup = malloc((i + 1) * sizeof(char));
	if (src_dup == 0)
	{
		return (0);
	}
	i = 0;
	while (src[i])
	{
		src_dup[i] = src[i];
		i++;
	}
	src_dup[i] = '\0';
	return (src_dup);
}

// int	main(void)
// {
// 	char	*src;
// 	char	*str_dup;

// 	src = "Teste";
// 	str_dup = ft_strdup(src);
// 	if (str_dup != 0)
// 	{
// 		printf("%s", str_dup);
// 		free(str_dup);
// 	}
// 	else
// 	{
// 		return (0);
// 	}
// 	return (0);
// }
