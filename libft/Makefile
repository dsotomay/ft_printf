NAME = libft.a
HEADER = -c
FLAGS = -g -Wall -Wextra -Werror
CONFIG = gcc $(HEADER) $(FLAGS) $(SRC)
CONFIG2 = ar rc $(NAME) $(OBJ)
CONFIG3 = ranlib $(NAME)
SRC = *.c
OBJ = $(patsubst %.c, %.o, $(SRC))

all: $(NAME)

$(NAME): $(SRC)
	$(CONFIG)
	$(CONFIG2)
	$(CONFIG3)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
