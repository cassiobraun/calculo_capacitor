#include <ostream>
#include <string>
#ifndef COMPONENTE_H
#define COMPONENTE_H

class componente
{
    public:

        componente(double val);

        virtual ~componente();

        double v();

        virtual double V(double i){return tensao;};

        double i(void);

        virtual double I(double v){return corrente;};

        double getVal() const {return valor;};

        std::string getU()const {return unidade;};

       bool ValorMultiplicador(double &numero, char& multiplicador);

                std::string unidade;

    protected:

        double valor;

        double tensao;
        double corrente;
        char multiplicador;

    private:
};

std::ostream& operator << (std::ostream&saida, const componente& cmp);

#endif // COMPONENTE_H