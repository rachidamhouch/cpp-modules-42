# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 16:36:30 by ramhouch          #+#    #+#              #
#    Updated: 2023/04/18 20:31:06 by ramhouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=BraiiiiiiinnnzzzZ
CC	= g++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ) 
fclean: clean
		rm -f $(NAME) $(BONUS)

re: fclean all

run: all
	@./$(NAME)

.PHONY: clean all fclean re