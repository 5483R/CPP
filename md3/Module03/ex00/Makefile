src = *.cpp
ClapTrap = ClapTrap
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = g++

all : ClapTrap
	
$(ClapTrap): $(src)	
	@$(CPP) $(FLAGS) $(src) -o ClapTrap
	@tput setaf 2; echo "ClapTrap IS READY"

clean :
	@rm -f ClapTrap
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean

re: fclean all 