//factura.h
#ifndef FACTURA_H
#define FACTURA_H

#include <vector>
#include "Client.h"
#include "Produs.h"

class Factura {
private:
    Client client;
    std::vector<Produs> produse;

public:
    Factura(const Client& client);
    Factura(const Factura& alta);
    Factura& operator=(const Factura& alta);
    ~Factura();

    void adaugaProdus(const Produs& produs);
    double calculeazaTotal() const;

    friend std::ostream& operator<<(std::ostream& os, const Factura& factura);
};

#endif // FACTURA_H