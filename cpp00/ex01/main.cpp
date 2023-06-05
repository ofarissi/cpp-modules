#include    "PhoneBook.hpp"

int main()
{
    std::string str;
    PhoneBook   phoneBook;

    while (true){
        std::cout << "Enter one these command(ADD, SEARCH, EXIT): " << std::endl;
        str = phoneBook.ft_getline();
        if (str == "ADD"){
            phoneBook.addContact();
        }
        else if (str == "SEARCH"){
            phoneBook.search();
        }
        else if (str == "EXIT") {
            break ;
        }
        else {
            std::cout << "Wrong command, try agian!" << std::endl;
        }
    }
    return 0;
}