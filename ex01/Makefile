# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 23:07:23 by amoubare          #+#    #+#              #
#    Updated: 2023/01/24 00:01:10 by amoubare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -Wall -Wextra -Werror -std=c++98 -g -o ZombieHorde

SRC =  Zombie.cpp main.cpp zombieHorde.cpp

NAME = ZombieHorde

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

clean:
	rm -f $(NAME) 

fclean: clean	
	rm -f $(NAME) 

re : fclean all
		@rm -r *.dSYM