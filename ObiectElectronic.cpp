// ObiectElectronic.cpp
#include "ObiectElectronic.h"
#include <iostream>

ObiectElectronic::ObiectElectronic(const std::string& nume, const std::string& marca)
        : Obiect(nume), marca(marca) {}

ObiectElectronic::~ObiectElectronic() {}

void ObiectElectronic::afiseazaDetalii() const {
    std::cout << "Nume obiect electronic: " << nume << ", Marca: " << marca << std::endl;
}
