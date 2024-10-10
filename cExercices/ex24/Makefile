CC = cc

PATH = srcs

SRCS = $(wildcard $(PATH)/*.c)

OBJS = $(SRCS:.c=.o)

CFLAGS = -Werror -Wextra -Wall

HEADER = ./srcs/includes

LIBFT = libft.a

all: $(LIBFT)

$(PATH)/%.o:$(PATH)/%.c
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

$(LIBFT) : $(OBJS)
	ar rcs $(LIBFT) $(OBJS)

clean:
	rm ex20/*.o

fclean:	clean
	rm

# sequencia de execução .c + .h -> .o (object file) -> para gerar p .a precisa utilzar o comando -c(Assembly) -> .out | .exe | binario executavel

#wildcard serve para utilizar o *
