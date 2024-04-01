NAME = push_swap
BNAME = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c algo.c algo2.c libft1.c libft3.c list.c \
		moves.c moves1.c read_the_number.c helper1.c parsing.c \
		ft_exit.c algo3.c libft2.c change_number.c ft_exit_b.c
BSRCS = checker.c read_the_number.c libft2.c libft1.c list.c \
			get_next_line.c ft_moves_bonus.c moves.c \
			moves1.c helper1.c algo2.c  parsing.c libft3.c \
			ft_exit.c change_number.c  ft_exit_b.c moves_bonus.c

OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)
all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

bonus : $(BNAME)

$(BNAME) : $(BOBJS)
	$(CC) $(CFLAGS) -o $(BNAME) $(BOBJS)

clean :
	rm -rf $(OBJS) $(BOBJS)

fclean : clean
	rm -rf $(NAME) $(BNAME)

re : fclean all

.PHONY: all clean fclean re 