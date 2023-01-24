# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 23:07:50 by amoubare          #+#    #+#              #
#    Updated: 2023/01/24 02:02:02 by amoubare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Wextra -Werror -std=c++98 -g -o searchAndReplace 

SRC = main.cpp

NAME = searchAndReplace

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

clean:
	rm -f $(NAME) 

fclean: clean	
	rm -f $(NAME) 

re : fclean all
		@rm -r *.dSYM