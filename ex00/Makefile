# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/10 11:06:38 by lgasqui           #+#    #+#              #
#    Updated: 2024/12/10 11:06:40 by lgasqui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##########################################################
#######ARGUMENTS

NAME            = zombie
FLAGS          	= -Wall -Wextra -Werror -std=c++98
FILES           = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJECTS         = $(FILES:.cpp=.o)
CC              = c++
RM              = rm -f

##########################################################
#######RULES

all:	$(NAME)

.cpp.o:
			$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}
                
$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) -I ./ -o $(NAME) $(OBJECTS)    
                            
clean:
		$(RM) $(OBJECTS)                
fclean: clean
			$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re