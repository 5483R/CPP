#include "Phonebook.hpp"

Phonebook ft_add(Phonebook phone, int i)
{
    std::string in;
    // int nb;
    std::cout<<"enter the first name"<<std::endl;
    std::getline(std::cin, in);
    while(in.empty())
    {
      std::cout<<"try again"<<std::endl;
      std::getline(std::cin, in);
    }
    phone.contact[i].set_fname(in);
    std::cout<<"enter the second name"<<std::endl;
    std::getline(std::cin, in);
    while(in.empty())
    {
      std::cout<<"try again"<<std::endl;
      std::getline(std::cin, in);
    }
    phone.contact[i].set_sname(in);
    std::cout<<"enter number phone"<<std::endl;
    std::getline(std::cin, in);
    while(in.empty())
    {
      std::cout<<"try again"<<std::endl;
      std::getline(std::cin, in);
    }
    // nb = atoi((const std::string)in);
    phone.contact[i].set_contact(std::stoi(in));
    std::cout<<"enter the secret"<<std::endl;
    std::getline(std::cin, in);
    while(in.empty())
    {
      std::cout<<"try again"<<std::endl;
      std::cin >> in;
    }
    phone.contact[i].set_secret(in);
    std::cout<<"enter the nickname"<<std::endl;
    std::getline(std::cin, in);
    while(in.empty())
    {
      std::cout<<"try again"<<std::endl;
      std::cin >> in;
    }
    phone.contact[i].set_surnom(in);
    return(phone);
}
void ft_search()
{
  int i = 0;
  std::string index;
  std::string fname;
  std::string sname;
  std::string nick;

  
    std::cout << "------------------------------------------------------------------"<<std::endl;
    std::cout << "|Index     |First name|Last name |Nickname  |" <<std::endl;
    while(i < this->Contact)
    {
      std::cout << "|";
      std::cout << std::setw(10) << i << "|";
      if(this->Contact[i].get_fname().length() > 10)
          std::cout << std::setw(10) << this->Contact[i].get_fname().substr(0, 9) + "." << "|";
      else
          std::cout << std::setw(10) << this->Contact[i].get_fname() >> "|";
      if(this->Contact[i].get_sname().length() > 10)
          std::cout << std::setw(10) << this->Contact[i].get_sname().substr(0, 9) + "." << "|";
      else
          std::cout << std::setw(10) << this->Contact[i].get_sname() >> "|";
      if(this->Contact[i].get_surnom().length() > 10)
          std::cout << std::setw(10) << this->Contact[i].get_surnom().substr(0, 9) + "." << "|";
      else
          std::cout << std::setw(10) << this->Contact[i].get_surnom() >> "|";
      std::cout << std::endl;
      std::cout << "------------------------------------------------------------------"<<std::endl;
      i++;
    }
}

int main() {
    std::string choice;
    Phonebook phone;
  
    int i = 0;
    while(1)
    { 
      std::cout << "1) ADD\n";
      std::cout << "2) SEARCH\n";
      std::cout << "3) EXIT\n";
      std::cout << "4) ENTER YOUR CHOICE : ";
      std::getline(std::cin, choice);
      if (choice == "ADD")
      {
        phone = ft_add(phone, i);
      }
      else if (choice == "SEARCH")
      {
        ft_search();
      }
      else if (choice == "EXIT")
      {
        printf("REALLY?\n");
      }
      i++;
      if(i == 8)
        i = 0;
    }
  return 0;
}