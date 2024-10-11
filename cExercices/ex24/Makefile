CC = gcc

HEADER = ./includes/

SRCS = srcs/ft_putchar.c	srcs/ft_putstr.c	srcs/ft_strcmp.c	\
				srcs/ft_strlen.c	srcs/ft_swap.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Werror -Wall -Wextra -I $(HEADER)

LIBFT = libft.a

all: $(LIBFT)

$(LIBFT): $(OBJS)
	ar rcs $(LIBFT) $(OBJS)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(LIBFT)

re:
	@$(MAKE) fclean
	@$(MAKE) all