//obiect.cpp
#include "Obiect.h"
#include "ObiectElectronic.h"
#include "ObiectVestimentar.h"
#include "ObiectAlimentar.h"

Obiect::Obiect(const std::string& nume) : nume(nume) {}

Obiect::~Obiect() {}

std::shared_ptr<Obiect> Obiect::creeazaObiect(const std::string& nume) {
    if (nume == "Electronic") {
        return std::make_shared<ObiectElectronic>("Laptop", "Dell");
    } else if (nume == "Vestimentar") {
        return std::make_shared<ObiectVestimentar>("Tricou", "Bumbac");
    } else if (nume == "Alimentar") {
        return std::make_shared<ObiectAlimentar>("Ciocolata", "2024-12-31");
    } else {
        return nullptr; // În cazul în care numele nu corespunde niciunui tip de obiect
    }
}
