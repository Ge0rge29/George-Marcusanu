//cos cumparaturi.h
#ifndef COS_CUMPARATURI_H
#define COS_CUMPARATURI_H

#include "Produs.h"
#include <vector>

class CosCumparaturi {
private:
    std::vector<Produs> produse;

public:
    CosCumparaturi();
    CosCumparaturi(const CosCumparaturi& altul);
    CosCumparaturi& operator=(const CosCumparaturi& altul);
    ~CosCumparaturi();

    friend std::ostream& operator<<(std::ostream& os, const CosCumparaturi& cos);
    void adaugaProdus(const Produs& produs);
    void afisare() const;
};

#endif // COS_CUMPARATURI_H