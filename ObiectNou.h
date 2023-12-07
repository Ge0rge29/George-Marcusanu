// ObiectNou.h
#ifndef OBIECTNOU_H
#define OBIECTNOU_H

#include "Obiect.h"

class ObiectNou : public Obiect {
public:
    ObiectNou(const std::string& nume);
    virtual ~ObiectNou();

    virtual void afiseazaDetalii() const override;
};

#endif // OBIECTNOU_H
