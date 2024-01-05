//obiect.h
#ifndef OBIECT_H
#define OBIECT_H

#include <string>
#include <memory>

class Obiect {
protected:
    std::string nume;

public:
    Obiect(const std::string& nume);
    virtual ~Obiect();

    virtual void afiseazaDetalii() const = 0;

    // Funcție statică pentru a obține un obiect pe baza numelui
    static std::shared_ptr<Obiect> creeazaObiect(const std::string& nume);
};

#endif // OBIECT_H
