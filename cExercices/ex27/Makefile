# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 12:24:47 by gustavo-lin       #+#    #+#              #
#    Updated: 2024/10/11 12:24:49 by gustavo-lin      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Werror -Wall -Wextra

SRCS = ft_display_file.c

TARGET := ft_display_file

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o

fclean:
	rm -f *.o $(TARGET)

re:
	@$(MAKE) fclean
	@$(MAKE) all