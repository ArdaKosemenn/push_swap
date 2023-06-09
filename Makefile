NAME = push_swap

SRCS = swap.c error.c rotate.c reverse_rotate.c push_swap.c push.c arg_to_int.c arg_control.c utils.c utils2.c radix.c error2.c push2.c\

LIBFT_SRCS = ./ft_libft/libft.a
OBJS = $(SRCS:.c=.o)
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)

RM = rm -rf
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_OBJS)
	@$(CC) $(FLAGS) $(OBJS) $(LIBFT_OBJS) -o $(NAME)

$(LIBFT_OBJS):
	@make -C ./ft_libft
clean:
	@$(RM) $(OBJS)
	@make clean -C ./ft_libft

fclean: clean
	@$(RM) $(NAME)
	@$(RM) ./ft_libft/libft.a

re: fclean all

.PHONY: all clean fclean re