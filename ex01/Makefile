# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yussato <yussato@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 17:23:47 by yussato           #+#    #+#              #
#    Updated: 2024/10/23 22:27:32 by yussato          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= crappy
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS	= main.cpp \
		  Contact.cpp \
		  PhoneBook.cpp
OBJS	= $(SRCS:.cpp=.o)
INCLUDE	= -I./

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(INCLUDE)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

build: all clean

__debug_configure__:
	$(eval CC := c++)
	$(eval CFLAGS := -g -fsanitize=address -Wall -Wextra -Werror -std=c++98 -pedantic)

debug: __debug_configure__ all

norminette: $(SRCS)
	norminette $^

norm: norminette

.PHONY: all clean fclean re build debug norminette norm
