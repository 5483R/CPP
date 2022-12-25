#include "Phonebook.hpp"
3include <string>

int main() {
    std::string choice;
    std::cout << "1) ADD\n";
    std::cout << "2) SEARCH\n";
    std::cout << "3) EXIT\n";
    std::cout << "4) ENTER YOUR CHOICE : ";
    getline(choice);
    if (choice == "ADD")
    {
      printf("FIRST NAME\n");
    }
    if (choice == "SEARCH")
    {
      printf("ENTER THE NAME\n");
    }
    if (choice == "EXIT")
    {
      printf("REALLY?\n");
    }
  return 0;
}