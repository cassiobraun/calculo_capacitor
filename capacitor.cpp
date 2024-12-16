#include "capacitor.h"

        capacitor::capacitor(double val ) : componente(val) {
        unidade = "F";
          capacitancia = val;
    }

        double capacitor::getCapacitancia(){
                return capacitancia;
        }

        bool capacitor::setCapacitancia(double val){
                        if(val>0){
                            capacitancia=val;
                            return true;
                        }else{
                            return false;
                        }

        }

capacitor capacitor::operator + (capacitor &outroC) {
    capacitor Cserie;

    double result = 1 / ((1 / this->getCapacitancia()) + (1 / outroC.getCapacitancia()));

    Cserie.setCapacitancia(result);

    return Cserie;
}

capacitor capacitor::operator || (capacitor &outroC) {
    capacitor Cparalelo;

    double result = this->getCapacitancia() + outroC.getCapacitancia();

    Cparalelo.setCapacitancia(result);

    return Cparalelo;
}
