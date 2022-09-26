# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pperol <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 11:37:55 by pperol            #+#    #+#              #
#    Updated: 2022/09/26 12:01:19 by pperol           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = 	parsing/ft_check_double.c \
		parsing/ft_check_sorted.c \
		parsing/ft_check_valid.c \
		libft/ft_atoi.c \
		loading/ft_fill_stack.c \
		loading/ft_free_stack.c \
		loading/ft_give_index.c \
		sorting/ft_sort_stack.c \
		loading/ft_count_arg.c \
		sorting/ft_sort_two.c \
		sorting/ft_sort_three.c \
		sorting/ft_sort_four.c \
		sorting/ft_sort_five.c \
		sorting/ft_largest_nbr.c \
		sorting/ft_smallest_nbr.c \
		sorting/ft_radix_sort.c \
		sorting/ft_get_bytes.c \
		operations/ft_swap.c \
		operations/ft_reverse_rotate.c \
		operations/ft_rotate.c \
		operations/ft_push.c \
		operations/sa.c \
		operations/ra.c \
		operations/rra.c \
		operations/pa.c \
		operations/pb.c \
		operations/rb.c \
		operations/rrb.c \
		operations/sb.c \
		push_swap.c 

CC = clang

CFLAGS =  -g3 #-fsanitize=address
CFLAGS = -Wall -Werror -Wextra -g3 #-fsanitize=address

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
