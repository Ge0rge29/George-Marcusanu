// ObiectAlimentar.h
#ifndef OBIECTALIMENTAR_H
#define OBIECTALIMENTAR_H

#include "Obiect.h"

class ObiectAlimentar : public Obiect {
private:
    std::string dataExpirare;

public:
    ObiectAlimentar(const std::string& nume, const std::string& dataExpirare);
    virtual ~ObiectAlimentar();

    virtual void afiseazaDetalii() const override;
};

#endif // OBIECTALIMENTAR_H
