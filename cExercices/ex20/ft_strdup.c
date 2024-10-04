/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:05:04 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 13:05:55 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strdup(char *src)
{
	int	i;
	char	*srcDup;
	
	i = 0;
	while(src[i])
	{
		i++;
	}
	srcDup = malloc((i + 1) * sizeof(char));
	if (srcDup == NULL)
	{
		return 0;
	}
	i = 0;
	while (src[i])
	{
		srcDup[i] = src[i];
		i++;
	}
	srcDup[i] = '\0';
	return srcDup;
}
/*
int main(void)
{
	char	*src;
	char	*strDup;
	src = "Teste";

	strDup = ft_strdup(src);
	if(strDup != NULL)
	{
		printf("%s", strDup);
		free(strDup);
	}
	else{
		return 0;
	}
	return (0);
}
*/