/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:10:06 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/03 21:28:00 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
			return s1[i] - s2[i];
		i++;
	}
	return s1[i] - s2[i];
}

int main(void)
{
	char	*str1 = "slasla";
	char	*str2 = "ssaslaab";
	printf("%d", ft_strcmp(str1, str2));
	printf("%d", strcmp(str1, str2));
	return (0);
}