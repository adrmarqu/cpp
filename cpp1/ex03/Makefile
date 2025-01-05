# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/10 13:04:35 by adrmarqu          #+#    #+#              #
#    Updated: 2025/01/05 11:09:21 by adrmarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CC = c++ -fsanitize=address
RM = rm -rf
STD = -std=c++98
CPPFLAGS = -Wall -Wextra -Werror -pedantic

MSG_CRT = "Created $(NAME)"
MSG_DLT = "Deleted $(NAME)"

SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(STD) $(OBJ) -o $(NAME)
	@echo $(MSG_CRT)

%.o: %.cpp Makefile HumanA.hpp HumanB.hpp Weapon.hpp
	@$(CC) $(CPPFLAGS) $(STD) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "Deleted all '.o'"

fclean: clean
	@$(RM) $(NAME)
	@echo $(MSG_DLT)

re: fclean $(NAME)

.PHONY: all clean fclean re
