#include "phonebook.hpp"

static void printCmd(void) {
    std::cout << "Commands:\n"
     << "ADD"
     << " - Add new contact\n"
     << "HELP"
     << " - Show commands\n"
     << "SEARCH"
     << " - Search contacts\n"
     << "EXIT"
     << " - Close the program\n"
    << std::endl;
}

static void add(PhoneBook &book, int &i) {
    int j;

    j = i % MAX_CONTACTS;
    j = book.setUser(j);
    i = i < MAX_CONTACTS ? j : MAX_CONTACTS + j;
    std::cout << "Done\n" << std::endl;
}

static void printHeader(void) {
    std::cout <<
    "│     index│first name│ last name│  nickname│\n";
}

static void search(PhoneBook book, int i) {
    std::string str;
    int index;
    int id;

    printHeader();
    i = i > MAX_CONTACTS ? MAX_CONTACTS : i;
    index = 0;
    while (index < i)
        book.printUser(index++);
    std::cout << "Enter index: ";
    std::cin >> str;
    id = atoi(str.c_str()) - INDEX;
    if (id >= 0 && id < i)
        book.getUser(id);
    else
        std::cout << "Error\n" << std::endl;
}

int main(void) {
    PhoneBook book;
    std::string cmd;
    int i;

    i = 0;
    printCmd();
    while (std::cin >> cmd)
    {
        if (cmd == "ADD")
            add(book, i);
        else if (cmd == "SEARCH")
            search(book, i);
        else if (cmd == "HELP")
            printCmd();
        else if (cmd == "EXIT")
            return 0;
    };
    return 0;
}