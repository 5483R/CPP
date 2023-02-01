src = *.cpp
first = first
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++

all : first
	
$(first): $(src)	
	@$(CPP) $(FLAGS) $(src) -o first
	@tput setaf 2; echo "first IS READY"

clean :
	@rm -f first
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean

re: fclean all 