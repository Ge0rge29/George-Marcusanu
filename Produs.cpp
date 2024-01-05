//produs.cpp
#include "Produs.h"

Produs::Produs(const std::string& nume, double pret, int cantitate)
        : nume(nume), pret(pret), cantitate(cantitate) {}

Produs::Produs(const Produs& altul)
        : nume(altul.nume), pret(altul.pret), cantitate(altul.cantitate) {}

Produs& Produs::operator=(const Produs& altul) {
    if (this != &altul) {
        nume = altul.nume;
        pret = altul.pret;
        cantitate = altul.cantitate;
    }
    return *this;
}

Produs::~Produs() {}

std::ostream& operator<<(std::ostream& os, const Produs& produs) {
    os << "Produs: " << produs.nume << " | Pret: " << produs.pret << " | Cantitate: " << produs.cantitate;
    return os;
}

void Produs::afisare() const {
    std::cout << *this << std::endl;
}

double Produs::getPret() const {
    return pret;
}