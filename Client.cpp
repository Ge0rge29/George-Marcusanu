// Client.cpp
#include "Client.h"

// Constructor
Client::Client(const std::string& nume, const std::string& adresa)
        : nume(nume), adresa(adresa) {
    // Nu trebuie să faci nimic aici pentru membrii const
}

// Copy Constructor
Client::Client(const Client& altul)
        : nume(altul.nume), adresa(altul.adresa) {
    // Nu trebuie să faci nimic aici pentru membrii const
}

// Operator de atribuire
Client& Client::operator=(Client altul) {
    // Se face swap între obiectul curent și obiectul temporar "altul"
    std::swap(nume, altul.nume);
    std::swap(adresa, altul.adresa);

    // Returnăm obiectul curent pentru a permite atribuirea în cască
    return *this;
}

// Destructor
Client::~Client() {
    // Nu este necesar să faci nimic aici pentru membrii const
}

// Operator de afișare
std::ostream& operator<<(std::ostream& os, const Client& client) {
    os << "Nume: " << client.nume << ", Adresa: " << client.adresa;
    return os;
}
