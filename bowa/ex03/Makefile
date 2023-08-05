# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 15:24:17 by yakhay            #+#    #+#              #
#    Updated: 2023/07/02 16:42:07 by yakhay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src =  main.cpp DiamondTrap.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ = $(src:.cpp=.o)
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow  -Wno-shadow
NAME  =  DiamondTrap

all: $(NAME)
$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
