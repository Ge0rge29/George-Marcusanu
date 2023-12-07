// ObiectNou.cpp
#include "ObiectNou.h"
#include <iostream>

ObiectNou::ObiectNou(const std::string& nume) : Obiect(nume) {}

ObiectNou::~ObiectNou() {}

void ObiectNou::afiseazaDetalii() const {
    std::cout << "Nume obiect nou: " << nume << std::endl;
}
