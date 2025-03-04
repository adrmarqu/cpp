# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/10 13:04:35 by adrmarqu          #+#    #+#              #
#    Updated: 2025/02/11 14:16:12 by adrmarqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface

CXX = c++ -fsanitize=address
RM = rm -rf
STD = -std=c++98
CXXFLAGS = -Wall -Wextra -Werror -pedantic

MSG_CRT = "Created $(NAME)"
MSG_DLT = "Deleted $(NAME)"

SRC = main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp
OBJ_DIR = build
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
DEP = $(OBJ:%.o=%.d)

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $@

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(STD) $(OBJ) -o $(NAME)
	@echo $(MSG_CRT)

$(OBJ_DIR)/%.o: %.cpp Makefile
	@$(CXX) $(CXXFLAGS) $(STD) -MMD -MP -c $< -o $@
	@echo "Compiling $<"

clean:
	@$(RM) $(OBJ_DIR)
	@echo "Deleted build"

fclean: clean
	@$(RM) $(NAME)
	@echo $(MSG_DLT)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
