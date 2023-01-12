src = *.cpp
Fixed = Fixed
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++

all : Fixed
	
$(Fixed): $(src)	
	@$(CPP) $(FLAGS) $(src) -o Fixed
	@tput setaf 2; echo "Fixed IS READY"

clean :
	@rm -f Fixed
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean

re: fclean all 