/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:02:04 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/09 17:18:04 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_display_file()
{
	int fd;
	int sz;
	char c[100];

	fd = open("text.txt", O_RDONLY);
	if (fd < 0) {
		perror("r1");
		exit(1);
	}

	sz = read(fd, c, 9);
	printf("called read(% d, c, 10). returned that"" %d bytes were read.\n",fd, sz);
	c[sz] = '\0';
	printf("Those bytes are as follows: %s\n", c);

	return 0;
}


int	main(void)
{
	ft_display_file();
	return (0);
}