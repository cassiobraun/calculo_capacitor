
/*
- Construir operadores + (associação serie) e || (associação paralela) para classe capacitor.
- Construir metodo classe componente para ajustar valor com multiplicador (M, k, u, n, p), acrescentando os atributos necessários.*/

#include <iostream>
#include "capacitor.h"

using namespace std;

int main() {
    capacitor c1(100e-6);
    capacitor c2(50e-6);
    char multiplicador;


    // Associação em série
    capacitor serie = c1 + c2;

    double resultado= serie.getCapacitancia();

    serie.ValorMultiplicador(resultado, multiplicador);

    cout << "Capacitância em série: " << resultado<<multiplicador<< c1.unidade << endl;

    // Associação em paralelo
    capacitor paralelo = c1 || c2;

    double resultado2 = paralelo.getCapacitancia();

    paralelo.ValorMultiplicador(resultado2, multiplicador);

    cout << "Capacitância em paralelo: " << resultado2 <<multiplicador<<c2.unidade<< endl;

    return 0;
}
