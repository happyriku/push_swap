NAME = push_swap

LIBRARY_PRINTF = srcs/libftprintf.a
SRCS = push_swap.c get_ascending_arr.c free_node.c add_node.c coordinate_compression.c radix_sort.c delete_stack_top.c print_error.c sort_five_argm.c\
	swap_node.c rotate_node.c reverse_rotate_node.c push_node.c get_compressed_minimum_place.c

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Ift_printf.c -Ilibft.h
MAKE = make
RM = rm -f

all: $(NAME)

$(NAME):$(OBJS) $(LIBRARY_PRINTF)
	$(CC) $(CFLAGS) $^ -o $@

$(LIBRARY_PRINTF) :
	$(MAKE) -C ./srcs

clean:
	$(RM) $(OBJS)
	$(MAKE) -C ./srcs clean

fclean:
	$(RM) $(NAME) $(OBJS)
	$(MAKE) -C ./srcs fclean

re: fclean all

.PHONY: all clean fclean re