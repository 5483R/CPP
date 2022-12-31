#include "Phonebook.hpp"

Phonebook ft_add(Phonebook phone, int i)
{
    std::string in;
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
    phone.contact[i].set_contact(in);
    std::cout<<"enter the secret"<<std::endl;
    std::getline(std::cin, in);
    while(in.empty())
    {
      std::cout<<"try again"<<std::endl;
      std::getline(std::cin, in);
    }
    phone.contact[i].set_secret(in);
    std::cout<<"enter the nickname"<<std::endl;
    std::getline(std::cin, in);
    while(in.empty())
    {
      std::cout<<"try again"<<std::endl;
      std::getline(std::cin, in);
    }
    phone.contact[i].set_surnom(in);
    return(phone);
}
void ft_search(Phonebook Phone, int a)
{
    int i = 0;
    std::string index;
    int x = 0;
  
    std::cout << "---------------------------------------------"<<std::endl;
    std::cout << "|Index     |First name|Last name |Nickname  |" <<std::endl;
    while(i <= a && !Phone.contact[i].get_fname().empty())
    {
      std::cout << "|";
      std::cout << i << std::setw(10) << "|";
      if(Phone.contact[i].get_fname().length() > 10)
          std::cout  << Phone.contact[i].get_fname().substr(0, 9) + "." << "|";
      else
          std::cout << Phone.contact[i].get_fname() << std::setw(11 - Phone.contact[i].get_fname().length()) << "|";
      if(Phone.contact[i].get_sname().length() > 10)
          std::cout << Phone.contact[i].get_sname().substr(0, 9) + "." << "|";
      else
          std::cout << Phone.contact[i].get_sname() << std::setw(11 - Phone.contact[i].get_sname().length()) << "|";
      if(Phone.contact[i].get_surnom().length() > 10)
          std::cout << Phone.contact[i].get_surnom().substr(0, 9) + "." << "|";
      else
          std::cout << Phone.contact[i].get_surnom() << std::setw(11 - Phone.contact[i].get_surnom().length()) << "|";
      std::cout << std::endl;
      i++;
    }
    std::cout << "---------------------------------------------"<<std::endl;
    std::cout << "choice the index of the contact" << std::endl;
    std::getline(std::cin ,index);
    while(1)
    {
      if(index.length() == 1)
      {
        x = std::stoi(index);
        break;
      }
      else
      {
        std::cout<<"try again"<<std::endl;
        std::getline(std::cin ,index);
      }
    }
    std::cout << Phone.contact[x].get_fname()<<std::endl;
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
        ft_search(phone, i);
      }
      else if (choice == "EXIT")
      {
        std::cout << "DIR HA WHA" << std::endl;
      }
      i++;
      if(i == 8)
        i = 0;
    }
  return 0;
}