// ObiectAlimentar.cpp
#include "ObiectAlimentar.h"
#include <iostream>

ObiectAlimentar::ObiectAlimentar(const std::string& nume, const std::string& dataExpirare)
        : Obiect(nume), dataExpirare(dataExpirare) {}

ObiectAlimentar::~ObiectAlimentar() {}

void ObiectAlimentar::afiseazaDetalii() const {
    std::cout << "Nume obiect alimentar: " << nume << ", Data expirare: " << dataExpirare << std::endl;
}
