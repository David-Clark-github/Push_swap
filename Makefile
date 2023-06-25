# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dclark <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 16:05:48 by dclark            #+#    #+#              #
#    Updated: 2021/07/09 10:00:01 by dclark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c \
			srcs/taking_data.c \
			srcs/check_error.c \
			srcs/check_argument.c \
			srcs/size_arg.c \
			srcs/check_doublons.c \
			srcs/half_sort.c \
			srcs/sort.c \
			srcs/ft_error.c \
			srcs/sa.c \
			srcs/sb.c \
			srcs/ss.c \
			srcs/pa.c \
			srcs/pb.c \
			srcs/ra.c \
			srcs/rb.c \
			srcs/rr.c \
			srcs/rra.c \
			srcs/rrb.c \
			srcs/rrr.c \
			algo/ft_top_bot.c \
			algo/ft_bot_top.c \
			algo/small_val.c \
			algo/three_val.c \
			algo/chunk_2.c \

HEADER	=	includes/

NAME	=	push_swap

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Werror -Wextra -I $(HEADER)

CC		=	gcc

all:	$(NAME)

lib/libft.a:
	make -C lib/

clean:
	make clean -C lib/
	rm -f $(OBJS)

fclean: clean
	make fclean -C lib
	rm -f $(NAME)

re:		fclean
	make $(NAME)

$(NAME): $(OBJS) lib/libft.a
	$(CC) $(CFLAGS) $(OBJS) -L lib -lft -o $(NAME)

.PHONY: all clean fclean re
