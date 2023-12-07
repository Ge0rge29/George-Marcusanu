// ProdusBaza.cpp
#include "ProdusBaza.h"

ProdusBaza::ProdusBaza(const std::string& nume, double pret) : nume(nume), pret(pret) {}

ProdusBaza::~ProdusBaza() {}

double ProdusBaza::getPret() const {
    return pret;
}
