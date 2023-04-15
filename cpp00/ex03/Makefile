# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 16:36:30 by ramhouch          #+#    #+#              #
#    Updated: 2023/04/15 16:57:13 by ramhouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=account
CC	= g++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC = tests.cpp  Account.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
		@rm -f $(OBJ) $(BONUS_OBJ)
fclean: clean
		@rm -f $(NAME) $(BONUS)

re: fclean all

run: all
	@./$(NAME)

.PHONY: clean all fclean re