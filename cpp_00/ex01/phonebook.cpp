#include "phonebook.hpp"

int PhoneBook::setUser(int i) {
    std::cout << "First name: ";
    std::cin >> _users[i].firstName;
    std::cout << "Last name: ";
    std::cin >> _users[i].lastName;
    std::cout << "Nickname: ";
    std::cin >> _users[i].nickname;
    std::cout << "Phone number: ";
    std::cin >> _users[i].phoneNumber;
    std::cout << "Darkest secret: ";
    std::cin >> _users[i].darkestSecret;
    return i + 1;
}

void PhoneBook::printUser(int i) {
    std::cout
    << "│" << std::setw(COL) << i + INDEX
    << "│" << std::setw(COL) << shortName(_users[i].firstName)
    << "│" << std::setw(COL) << shortName(_users[i].lastName)
    << "│" << std::setw(COL) << shortName(_users[i].nickname)
    << "│" << std::endl;
}

void PhoneBook::getUser(int i) {
    std::cout 
    << "First name: "  << _users[i].firstName << "\n"
    << "Last name: "  << _users[i].lastName << "\n"
    << "Nickname: "  << _users[i].nickname << "\n"
    << "Phone number: "  << _users[i].phoneNumber << "\n"
    << "Darkest secret: "  << _users[i].darkestSecret << "\n"
    << std::endl;
}

std::string PhoneBook::shortName(std::string str) {
    if (str.length() <= COL)
        return str;
    str.resize(COL - 1);
    return str += '.';
}