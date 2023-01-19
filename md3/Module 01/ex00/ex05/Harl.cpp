#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;;
}
void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;;
}
void Harl::complain(std::string level)
{
    int i;
    void (Harl::*ptr[4])(void);

    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;

    std::string arg[4];
    arg[0] = "DEBUG";
    arg[1] = "INFO";
    arg[2] = "WARNING";
    arg[3] = "ERROR";
    for (i = 0; i < 4; i++)
    {
        if (arg[i] == level)
        {
            (this->*ptr[i])();
            break;
        }
    }
    if(i >= 4)
            std::cout << "complain doesn't exist !" << std::endl;
    


}