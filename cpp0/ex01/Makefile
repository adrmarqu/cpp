# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/10 13:04:35 by adrmarqu          #+#    #+#              #
#    Updated: 2024/10/14 15:05:56 by adrmarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

CC = g++
RM = rm -rf
STD = -std=c++98
CPPFLAGS = -Wall -Wextra -Werror -pedantic

MSG_CRT = "Created phonebook"
MSG_DLT = "Delete phonebook"

SRC = main.cpp Contact.cpp Phonebook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(STD) $(OBJ) -o $(NAME)
	@echo $(MSG_CRT)

%.o: %.cpp Makefile Contact.hpp Phonebook.hpp
	@$(CC) $(CPPFLAGS) $(STD) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "Delete all '.o'"

fclean: clean
	@$(RM) $(NAME)
	@echo $(MSG_DLT)

re: fclean $(NAME)

.PHONY: all clean fclean re
