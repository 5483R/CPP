src = main.cpp
main = main
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = g++

all : main
	
$(main): $(src)	
	@$(CPP) $(FLAGS) $(src) -o main
	@tput setaf 2; echo "MAIN IS READY"

clean :
	@rm -f main
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean

re: fclean all 