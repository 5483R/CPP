src = *.cpp
Harl = Harl
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = g++

all : Harl
	
$(Harl): $(src)	
	@$(CPP) $(FLAGS) $(src) -o Harl
	@tput setaf 2; echo "Harl IS READY"

clean :
	@rm -f Harl
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean

re: fclean all 