src = *.cpp
zombie = zombie
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = g++

all : zombie
	
$(zombie): $(src)	
	@$(CPP) $(FLAGS) $(src) -o zombie
	@tput setaf 2; echo "ZOMBIE IS READY"

clean :
	@rm -f zombie
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean

re: fclean all 