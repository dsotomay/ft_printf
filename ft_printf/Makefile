NAME = libftprintf.a
HEADER = -c
FLAGS = -Wall -Wextra -Werror
CONFIG = gcc -g $(HEADER) $(FLAGS) $(SRC)
CONFIG2 = ar rc $(NAME) $(OBJ) $(LIBFT)
CONFIG3 = ranlib $(NAME)
LIBFT = libft/*.o
# INCLUDES = -I libft/ 
# CONFIG4 = gcc $(FLAGS) $(SRC) $(CONFIG2) $(LIBFT) -o $(NAME)
SRC = str_char_pointer.c dispatch_table.c num1.c helper.c length.c \
ft_printf.c dispatch.c flags.c
OBJ = $(patsubst %.c, %.o, $(SRC))

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft/

$(NAME):
	$(CONFIG)
	$(CONFIG2)
	$(CONFIG3)
	
clean:
	/bin/rm -f $(OBJ)
	make -C libft clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C libft fclean

re: fclean all
