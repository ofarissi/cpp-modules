#include    "Contact.hpp"

Contact::Contact() {}

void    Contact::setFirstName(std::string first)
{
    this->firstName = first;
}

void    Contact::setLastName(std::string last)
{
    this->lastName = last;
}

void    Contact::setNickName(std::string nick)
{
    this->nickName = nick;
}

void    Contact::setPhoneNumber(std::string phone)
{
    this->phoneNumber = phone;
}

void    Contact::setDarkSecret(std::string secret)
{
    this->darkSecret = secret;
}

std::string Contact::getFirstName()
{
    return this->firstName;
}

std::string Contact::getLastName()
{
    return this->lastName;
}

std::string Contact::getNickName()
{
    return this->nickName;
}

std::string Contact::getPhoneNumber()
{
    return this->phoneNumber;
}

std::string Contact::getSecret()
{
    return this->darkSecret;
}

Contact::~Contact() {}