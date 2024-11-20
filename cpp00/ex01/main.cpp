
#include "PhoneBook.hpp"
#include <cstdio>

int main(void)
{
    std::string args;
    PhoneBook book;

    std::cout << "PhoneBook opened" << std::endl;
    while (1)
    {
        std::cout << "Please enter ADD, SEARCH or EXIT: ";
        std::getline(std::cin, args);
        if (args == "ADD")
            book.addContact();
        else if (args == "SEARCH")
            book.searchContact();
        else if (args == "EXIT" || std::cin.eof())
            break;
    }
    std::cout << "PhoneBook closed" << std::endl;
    return (0);
}