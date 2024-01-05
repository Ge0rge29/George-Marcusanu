// ObiectElectronic.h
#ifndef OBIECTELECTRONIC_H
#define OBIECTELECTRONIC_H

#include "Obiect.h"

class ObiectElectronic : public Obiect {
private:
    std::string marca;

public:
    ObiectElectronic(const std::string& nume, const std::string& marca);
    virtual ~ObiectElectronic();

    virtual void afiseazaDetalii() const override;
};

#endif // OBIECTELECTRONIC_H
