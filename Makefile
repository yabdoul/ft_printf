NAME	= libftprintf.a

CC	= cc

CFLAGS	= -Wall -Werror -Wextra 

ARCHIVE	= ar -rcs

SRCS	=   ft_printf.c ft_putchar.c ft_putnbr.c ft_strlen.c ft_putstr.c ft_tohexa.c ft_unsigned.c


OBJS	= $(SRCS:.c=.o)


B_OBJS	= $(B_SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS) 


	
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
	ar rcs $(NAME) $@
	
	
clean:
	rm -rf $(OBJS) $(B_OBJS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
