CC = gcc

SRC = ft_display_file.c

DEPENDENCY = $(SRC:.o)

CFLAGS = -Werror -Wall -Wextra

all: ft_display_file.o

ft_display_file.o: $(SRC)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o