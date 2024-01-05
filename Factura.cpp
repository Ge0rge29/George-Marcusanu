//factura.cpp
#include "Factura.h"

Factura::Factura(const Client& client)
        : client(client) {}

Factura::Factura(const Factura& alta)
        : client(alta.client), produse(alta.produse) {}

Factura& Factura::operator=(const Factura& alta) {
    if (this != &alta) {
        client = alta.client;
        produse = alta.produse;
    }
    return *this;
}

Factura::~Factura() {}

void Factura::adaugaProdus(const Produs& produs) {
    produse.push_back(produs);
}

double Factura::calculeazaTotal() const {
    double total = 0.0;
    for (const Produs& produs : produse) {
        total += produs.getPret();
    }
    return total;
}

std::ostream& operator<<(std::ostream& os, const Factura& factura) {
    os << "Factura pentru " << factura.client << "\n";
    os << "Produse achizitionate:\n";
    for (const Produs& produs : factura.produse) {
        os << produs << "\n";
    }
    os << "Total: " << factura.calculeazaTotal();
    return os;
}