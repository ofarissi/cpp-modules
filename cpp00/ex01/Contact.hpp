#ifndef CONTACT_HPP
#define CONTACT_HPP

#include    <iostream>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkSecret;
public:
    Contact();
    void    setFirstName(std::string first);
    void    setLastName(std::string last);
    void    setNickName(std::string nick);
    void    setPhoneNumber(std::string number);
    void    setDarkSecret(std::string secret);
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getSecret();
    ~Contact();
};


#endif