#include "componente.h"

componente::componente(double val,std::string unid,double v,double i)
{
    valor=val;
    unidade=unid;
    tensao=v;
    corrente=i;
}

double componente::v(void)
{
    return tensao;
}

double componente::i(void)
{
   return corrente;
}
double componente::getValor()
{
    return valor;
}
void componente::setValor( double val)
{
    valor=val;
}

std::string componente::unid()
{
    return unidade;
}
