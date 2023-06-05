#include    "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    index = 0;
}

std::string    PhoneBook::ft_getline()
{
    std::string str;
    getline(std::cin, str); //read line from input stream
    if (std::cin.eof()) // check end of file
    {
        std::cin.clear(); //if so clear the error state of the std::cin input stream.
        clearerr(stdin);
    }
    return str;
}

void PhoneBook::addContact()
{
    Contact     newContact;
    std::string tmp;

    if (index < 8){
        std::cout << "Enter the first name:" << std::endl;
        tmp = ft_getline();
        if (tmp.empty()){
            return ;
        }
        newContact.setFirstName(tmp);

        std::cout << "Enter the last name:" << std::endl;
        tmp = ft_getline();
        if (tmp.empty()){
            return ;
        }
        newContact.setLastName(tmp);
        
        std::cout << "Enter the nickname:" << std::endl;
        tmp = ft_getline();
        if (tmp.empty()){
            return ;
        }
        newContact.setNickName(tmp); 
        
        std::cout << "Enter the Phone number:" << std::endl;
        tmp = ft_getline();
        if (tmp.empty()){
            return ;
        }
        newContact.setPhoneNumber(tmp);
        
        std::cout << "Enter the darkest secret:" << std::endl;
        tmp = ft_getline();
        if (tmp.empty()){
            return ;
        }
        newContact.setDarkSecret(tmp);
        contact[index] = newContact;
        index++;
    }
    else
    {
        for (int i = 1; i < 8; i++)
        {
            contact[i - 1] = contact[i];
        }
        index--;
    }
}

void    PhoneBook::displayContact(int in)
{
    std::cout << std::right << std::setw(10) << "First Name" << ": "
    << contact[in].getFirstName() << std::endl;
    std::cout << std::right << std::setw(10) << "Last Name" << ": "
    << contact[in].getLastName() << std::endl;
    std::cout << std::right << std::setw(10) << "Nickname" << ": "
    << contact[in].getNickName() << std::endl;
    std::cout << std::right << std::setw(10) << "Phone" << ": "
    << contact[in].getPhoneNumber() << std::endl;
    std::cout << std::right << std::setw(10) << "Dark Secret" << ": "
    << contact[in].getSecret() << std::endl;
}

void    PhoneBook::search()
{
    std::string j;
    int         x;

    if (index == 0)
    {
        std::cout << "phonebook is empty." << std::endl;
        return;
    }
    std::cout << std::right << std::setw(10) << "Index" << "|"  //std::right is to right align the printed string
              << std::setw(10) << "First Name" << "|" // std::setw is to set the width at 10 charachters
              << std::setw(10) << "Last Name" << "|" 
              << std::setw(10) << "NickName" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << std::right << std::setw(10) << i << "|" 
                  << std::setw(10) << contact[i].getFirstName().substr(0, 10) << "|" 
                  << std::setw(10) << contact[i].getLastName().substr(0, 10) << "|" 
                  << std::setw(10) << contact[i].getNickName().substr(0, 10) << std::endl;
    }
    std::cout << "Enter an Index for the wanted Contact:" << std::endl;
    j = ft_getline();
    std::istringstream iss(j);
    if (!(iss >> x)) {
        std::cout << "Invalid input" << std::endl;
        return;
    }
    displayContact(x);
}

PhoneBook::~PhoneBook() {}