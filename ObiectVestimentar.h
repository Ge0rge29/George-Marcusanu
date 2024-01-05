// ObiectVestimentar.h
#ifndef OBIECTVESTIMENTAR_H
#define OBIECTVESTIMENTAR_H

#include "Obiect.h"

class ObiectVestimentar : public Obiect {
private:
    std::string material;

public:
    ObiectVestimentar(const std::string& nume, const std::string& material);
    virtual ~ObiectVestimentar();

    virtual void afiseazaDetalii() const override;
};

#endif // OBIECTVESTIMENTAR_H
