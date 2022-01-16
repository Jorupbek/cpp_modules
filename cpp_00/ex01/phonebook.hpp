#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

#define MAX_CONTACTS 8
#define COL 10
#define INDEX 1

class User {
    public:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
};

class PhoneBook {
    private:
        User _users[MAX_CONTACTS];

    public:
        int setUser(int i);
        void printUser(int i);
        void getUser(int i);
        std::string shortName(std::string str);
};

#endif