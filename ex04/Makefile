# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 13:58:26 by mwagner           #+#    #+#              #
#    Updated: 2023/06/23 14:05:56 by mwagner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VAL 		:= valgrind -s --leak-check=full --show-leak-kinds=all
RUN 		:= ./sed_is_for_losers

GREEN 		:= \033[0;32m
RED 		:= \033[0;31m
RESET_COL 	:= \033[0m

NAME 		:= sed_is_for_losers
CC 			:= c++
CFLAGS 		:= -Wall -Werror -Wextra -std=c++98
SRC 		:=	main.cpp \
				errors.cpp

all: $(NAME)

$(NAME): $(SRC)
	@echo "$(RED)Compiling $(NAME)...$(RESET_COL)"
	$(CC) $(CFLAGS) $^ -o $@
	@echo "$(GREEN) $(NAME)!$(RESET_COL)"

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

val:
	$(VAL) $(RUN)

test1:
	@echo Test without arguments
	$(RUN)
test2:
	@echo Test with to many arguments
	$(RUN) text.txt DUNCAN Maximilian doesntbelong
test3:
	@echo Test with filename
	$(RUN) wrongfile old new
test4:
	@echo Test with correct arguments
	$(RUN) test.txt DUNCAN Maximilian

.PHONY: all clean fclean re
