#include <iostream>
#include <vector>
#include <string>

class Produs {

private:
    std::string nume;
    double pret;
    int cantitate;

public:
    Produs(const std::string& nume, double pret, int cantitate)
            : nume(nume), pret(pret), cantitate(cantitate) {}

    // Constructor de copiere
    Produs(const Produs& altul) : nume(altul.nume), pret(altul.pret), cantitate(altul.cantitate) {}

    // Operatorul de atribuire de copiere
    Produs& operator=(const Produs& altul) {
        if (this != &altul) {
            nume = altul.nume;
            pret = altul.pret;
            cantitate = altul.cantitate;
        }
        return *this;
    }

    // Destructor
    ~Produs() {}

    friend std::ostream& operator<<(std::ostream& os, const Produs& produs) {
        os << "Produs: " << produs.nume << " | Pret: " << produs.pret << " | Cantitate: " << produs.cantitate;
        return os;
    }

    void afisare() const {
        std::cout << *this << std::endl;
    }

    // Getter pentru preț
    double getPret() const {
        return pret;
    }

};

class CosCumparaturi {

private:
    std::vector<Produs> produse;

public:
    CosCumparaturi() {}

    // Constructor de copiere
    CosCumparaturi(const CosCumparaturi& altul) : produse(altul.produse) {}

    // Operatorul de atribuire de copiere
    CosCumparaturi& operator=(const CosCumparaturi& altul) {
        if (this != &altul) {
            produse = altul.produse;
        }
        return *this;
    }

    // Destructor
    ~CosCumparaturi() {}

    friend std::ostream& operator<<(std::ostream& os, const CosCumparaturi& cos) {
        os << "Continut Cos de Cumparaturi:\n";
        for (const Produs& produs : cos.produse) {
            os << produs << "\n";
        }
        return os;
    }

    void adaugaProdus(const Produs& produs) {
        produse.push_back(produs);
    }

    void afisare() const {
        std::cout << *this << std::endl;
    }

};

class Client {

private:
    std::string nume;
    std::string adresa;

public:
    Client(const std::string& nume, const std::string& adresa)
            : nume(nume), adresa(adresa) {}

    // Constructor de copiere
    Client(const Client& altul) : nume(altul.nume), adresa(altul.adresa) {}

    // Operatorul de atribuire de copiere
    Client& operator=(const Client& altul) {
        if (this != &altul) {
            nume = altul.nume;
            adresa = altul.adresa;
        }
        return *this;
    }

    // Destructor
    ~Client() {}

    friend std::ostream& operator<<(std::ostream& os, const Client& client) {
        os << "Nume Client: " << client.nume << " | Adresa: " << client.adresa;
        return os;
    }

};

class Factura {

private:
    Client client;
    std::vector<Produs> produse;

public:
    Factura(const Client& client)
            : client(client) {}

    // Constructor de copiere
    Factura(const Factura& alta) : client(alta.client), produse(alta.produse) {}

    // Operatorul de atribuire de copiere
    Factura& operator=(const Factura& alta) {
        if (this != &alta) {
            client = alta.client;
            produse = alta.produse;
        }
        return *this;
    }

    // Destructor
    ~Factura() {}

    void adaugaProdus(const Produs& produs) {
        produse.push_back(produs);
    }

    double calculeazaTotal() const {
        double total = 0.0;
        for (const Produs& produs : produse) {
            total += produs.getPret();
        }
        return total;
    }

    friend std::ostream& operator<<(std::ostream& os, const Factura& factura) {
        os << "Factura pentru " << factura.client << "\n";
        os << "Produse achizitionate:\n";
        for (const Produs& produs : factura.produse) {
            os << produs << "\n";
        }
        os << "Total: " << factura.calculeazaTotal();
        return os;
    }

};

int main() {
    Produs produs1("Laptop", 1000.0, 1);
    Produs produs2("Smartphone", 500.0, 1);

    CosCumparaturi cos;
    cos.adaugaProdus(produs1);
    cos.adaugaProdus(produs2);

    std::cout << "Continut Cos de Cumparaturi:\n";
    cos.afisare();

    Client client("John Doe", "123 Main St");
    Factura factura(client);
    factura.adaugaProdus(produs1);
    factura.adaugaProdus(produs2);

    std::cout << "\n";
    std::cout << "Factura:\n";
    std::cout << factura << "\n";

    return 0;
}