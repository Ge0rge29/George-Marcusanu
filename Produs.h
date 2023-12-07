#ifndef PRODUS_H
#define PRODUS_H

#include <iostream>
#include <string>

class Produs {
private:
    std::string nume;
    double pret;
    int cantitate;

public:
    Produs(const std::string& nume, double pret, int cantitate);
    Produs(const Produs& altul);
    Produs& operator=(const Produs& altul);
    ~Produs();

    friend std::ostream& operator<<(std::ostream& os, const Produs& produs);
    void afisare() const;
    double getPret() const;
};

#endif // PRODUS_H
