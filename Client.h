// Client.h
#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>

class Client {
private:
    std::string nume;
    std::string adresa;

public:
    Client(const std::string& nume, const std::string& adresa);
    Client(const Client& altul);
    Client& operator=(Client altul);  // Operatorul de atribuire primește un obiect prin valoare
    ~Client();

    friend std::ostream& operator<<(std::ostream& os, const Client& client);
};

#endif // CLIENT_H
