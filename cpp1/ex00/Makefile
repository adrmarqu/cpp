# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/10 13:04:35 by adrmarqu          #+#    #+#              #
#    Updated: 2024/11/02 14:56:00 by adrmarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC = g++
RM = rm -rf
STD = -std=c++98
CPPFLAGS = -Wall -Wextra -Werror -pedantic

MSG_CRT = "Created Zombie"
MSG_DLT = "Deleted Zombie"

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(STD) $(OBJ) -o $(NAME)
	@echo $(MSG_CRT)

%.o: %.cpp Makefile Zombie.hpp
	@$(CC) $(CPPFLAGS) $(STD) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "Deleted all '.o'"

fclean: clean
	@$(RM) $(NAME)
	@echo $(MSG_DLT)

re: fclean $(NAME)

.PHONY: all clean fclean re
