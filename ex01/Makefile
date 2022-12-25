src = *.cpp
megaphone = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = g++

all : megaphone
	
$(megaphone): $(src)	
	@$(CPP) $(FLAGS) $(src) -o megaphone
	@tput setaf 2; echo "MEGAPHONE IS READY"

clean :
	@rm -f megaphone
	@tput setaf 1; echo "CLEAN COMPLET"

fclean : clean

re: fclean all 