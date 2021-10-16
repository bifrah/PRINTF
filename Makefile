# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 10:29:45 by bifrah            #+#    #+#              #
#    Updated: 2021/10/16 13:23:32 by bifrah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
PARAMS = -Wall -Werror -Wextra

SRCS =	ft_printf.c \
		ft_decimal_u.c \
		ft_hexa_case.c \
		ft_hexa_nocase.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_pointer.c \
		ft_parser.c
OBJ = $(SRCS:.c=.o)

AR = ar -rcs

GRN= \033[92m
YEL= \033[93m
DEF= \033[0m

%.o : %.c
	$(CC) $(PARAMS) -I. -c $< -o ${<:.c=.o}

.PHONY: all clean re fclean

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "$(YEL)[printf]$(DEF) : Compilation..."
	$(AR) $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(YEL)[printf]$(DEF) : Compilation                 $(GRN)[OK]$(DEF)"

clean:
	rm -f $(OBJ) $(OBJB)
	@echo "$(YEL)[printf]$(DEF) : Cleaning                    $(GRN)[OK]$(DEF)"

fclean: clean
	rm -f $(NAME)
	@echo "$(YEL)[printf]$(DEF) : Full Cleaning               $(GRN)[OK]$(DEF)"

re: fclean all

