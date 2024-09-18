NAME = libftprintf.a
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_put_unsigned_nbr.c ft_putptr.c ft_puthex.c\
	ft_atoi.c ft_itoa.c ft_strncmp.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAG = -Wall -Wextra -Werror
#CPPFLAGS = -Ift_printf.h
RM = rm -f

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all:$(NAME)

.c.o:
	$(CC) $(CFLAG)  -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all