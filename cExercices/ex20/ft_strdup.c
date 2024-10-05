/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:05:04 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 21:52:01 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	if (src_dup == NULL)
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

int	main(void)
{
	char	*src;
	char	*str_dup;

	src = "Teste";
	str_dup = ft_strdup(src);
	if (str_dup != NULL)
	{
		printf("%s", str_dup);
		free(str_dup);
	}
	else
	{
		return (0);
	}
	return (0);
}
