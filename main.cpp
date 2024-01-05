#include <iostream>
#include <stdexcept>
#include <memory>
#include "Obiect.h"
#include "ObiectElectronic.h"
#include "ObiectVestimentar.h"
#include "ObiectAlimentar.h"
#include "Produs.h"
#include "CosCumparaturi.h"
#include "Client.h"
#include "Factura.h"

// Clasa de baza pentru erori
class ExceptieBaza : public std::exception {
public:
    virtual const char* what() const noexcept {
        return "Exceptie generica.";
    }
};

// Prima clasa de exceptie
class ExceptieNumeInvalid : public ExceptieBaza {
public:
    const char* what() const noexcept override {
        return "Nume invalid.";
    }
};

// A doua clasa de exceptie
class ExceptiePretInvalid : public ExceptieBaza {
public:
    const char* what() const noexcept override {
        return "Pret invalid.";
    }
};

int main() {
    try {
        // Creare obiecte smart pointers
        std::shared_ptr<Obiect> obiectElectronic = std::make_shared<ObiectElectronic>("Laptop", "Dell");
        std::shared_ptr<Obiect> obiectVestimentar = std::make_shared<ObiectVestimentar>("Tricou", "Bumbac");
        std::shared_ptr<Obiect> obiectAlimentar = std::make_shared<ObiectAlimentar>("Ciocolata", "2024-12-31");

        // Afisare detalii obiecte
        obiectElectronic->afiseazaDetalii();
        obiectVestimentar->afiseazaDetalii();
        obiectAlimentar->afiseazaDetalii();

        // Creare produse
        const Produs produs1("Laptop", 1000.0, 1);
        const Produs produs2("Smartphone", 500.0, 1);

        // Creare si gestionare cos de cumparaturi
        CosCumparaturi cos;
        cos.adaugaProdus(produs1);
        cos.adaugaProdus(produs2);

        std::cout << "\nContinut Cos de Cumparaturi:\n";
        cos.afisare();

        // Creare client si generare factura
        const Client client("John Doe", "123 Main St");
        Factura factura(client);
        factura.adaugaProdus(produs1);
        factura.adaugaProdus(produs2);

        std::cout << "\nFactura:\n";
        std::cout << factura << "\n";
    } catch (const ExceptieNumeInvalid& e) {
        std::cerr << "Exceptie Nume Invalid: " << e.what() << "\n";
    } catch (const ExceptiePretInvalid& e) {
        std::cerr << "Exceptie Pret Invalid: " << e.what() << "\n";
    } catch (const ExceptieBaza& e) {
        std::cerr << "Exceptie: " << e.what() << "\n";
    }

    return 0;
}
