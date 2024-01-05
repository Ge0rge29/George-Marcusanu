//coscumparaturi.cpp
#include "CosCumparaturi.h"

CosCumparaturi::CosCumparaturi() {}

CosCumparaturi::CosCumparaturi(const CosCumparaturi& altul)
        : produse(altul.produse) {}

CosCumparaturi& CosCumparaturi::operator=(const CosCumparaturi& altul) {
    if (this != &altul) {
        produse = altul.produse;
    }
    return *this;
}

CosCumparaturi::~CosCumparaturi() {}

std::ostream& operator<<(std::ostream& os, const CosCumparaturi& cos) {
    os << "Continut Cos de Cumparaturi:\n";
    for (const Produs& produs : cos.produse) {
        os << produs << "\n";
    }
    return os;
}

void CosCumparaturi::adaugaProdus(const Produs& produs) {
    produse.push_back(produs);
}

void CosCumparaturi::afisare() const {
    std::cout << *this << std::endl;
}