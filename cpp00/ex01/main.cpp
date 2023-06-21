#include    "PhoneBook.hpp"

int main()
{
    std::string str;
    std::string msg = "Enter one these command(ADD, SEARCH, EXIT): ";
    PhoneBook   phoneBook;

    while (true) {
        std::cout << msg << std::endl;
        str = phoneBook.ft_getline();
        if (str.compare("ADD") == 0){
            phoneBook.addContact();
        }
        else if (str.compare("SEARCH") == 0){
            phoneBook.search();
        }
        else if (str.compare("EXIT") == 0) {
            break ;
        }
        else {
            std::cout << "Wrong command, try agian!" << std::endl;
        }
    }
    return 0;
}