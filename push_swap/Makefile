NAME = push_swap

CC = gcc

CFLAGS = -Werror -Wall -Wextra -g3 -fsanitize=address -static-libasan

RM = rm -rf

HEADER = -Iinc

SRCS = 	src/algorithm.c\
		src/push.c\
		src/swap.c\
		src/rotate.c\
		src/rev_rotate.c\
		src/ft_check_args.c\
		src/ft_rotate_type.c\
		src/ft_sort_big.c\
		src/ft_sort_three.c\
		src/ft_split.c\
		src/ft_stack_new.c\
		src/ft_strdup.c\
		src/push_swap.c\
		src/rotate_and_push.c\
		src/solver_utils_ab.c\
		src/solver_utils_ba.c\
		src/utils.c\
		src/utils2.c\
		src/utils3.c\
		src/ft_isdigit.c\

all: $(NAME)
	@echo "\033[0;32mbuild: ok!\033[0m"

$(NAME):
	@gcc $(CFLAGS) $(HEADER) $(SRCS) -o $(NAME)

fclean: clean
	@$(RM) $(NAME)

clean:
	@$(RM) $(NAME)
	@echo "\033[0;31mcleaned!\033[0m"

re: fclean all

.PHONY: all fclean clean re
