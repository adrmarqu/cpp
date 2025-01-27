# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/10 13:04:35 by adrmarqu          #+#    #+#              #
#    Updated: 2025/01/21 10:39:36 by adrmarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CC = c++ -fsanitize=address
RM = rm -rf
STD = -std=c++98
CPPFLAGS = -Wall -Wextra -Werror -pedantic

MSG_CRT = "Created $(NAME)"
MSG_DLT = "Deleted $(NAME)"

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ_DIR = build
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
DEP = $(OBJ:%.o=%.d)

$(shell mkdir -p $(OBJ_DIR))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(STD) $(OBJ) -o $(NAME)
	@echo $(MSG_CRT)

$(OBJ_DIR)/%.o: %.cpp Makefile
	@$(CC) $(CPPFLAGS) $(STD) -MMD -MP -c $< -o $@
	@echo "Compiling $<"

clean:
	@$(RM) $(OBJ_DIR)
	@echo "Deleted build"

fclean: clean
	@$(RM) $(NAME)
	@echo $(MSG_DLT)

re: fclean $(NAME)

-include $(DEP)

.PHONY: all clean fclean re
