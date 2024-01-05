// ObiectVestimentar.cpp
#include "ObiectVestimentar.h"
#include <iostream>

ObiectVestimentar::ObiectVestimentar(const std::string& nume, const std::string& material)
        : Obiect(nume), material(material) {}

ObiectVestimentar::~ObiectVestimentar() {}

void ObiectVestimentar::afiseazaDetalii() const {
    std::cout << "Nume obiect vestimentar: " << nume << ", Material: " << material << std::endl;
}
