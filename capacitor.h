#ifndef CAPACITOR_H
#define CAPACITOR_H

#include "componente.h"

class capacitor : public componente {

public:

    capacitor(double val = 0);

    double getCapacitancia();
    bool setCapacitancia(double val);


    capacitor operator + (capacitor &outroC);
    capacitor operator || (capacitor &outroC);

protected:


private:
    double capacitancia;
};

#endif // CAPACITOR_H