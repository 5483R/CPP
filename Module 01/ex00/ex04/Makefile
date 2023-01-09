src = main.cpp
replace = replace
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = g++

all : replace
	
$(replace): $(src)	
	@$(CPP) $(FLAGS) $(src) -o replace
	@tput setaf 2; echo "REPLACE IS READY"

clean :
	@rm -f replace
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean

re: fclean all 