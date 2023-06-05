#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include	"Contact.hpp"
#include	<iomanip>
#include	<sstream>
#include	<cstdio>


class   PhoneBook{
private:
        Contact contact[8];
        int     index;
public:
        PhoneBook();
        void addContact();
		void	search();
        void    displayContact(int index);
        std::string    ft_getline();
        ~PhoneBook();
};


#endif