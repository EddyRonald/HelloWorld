#ifndef COMPLEJITOS_H
#define COMPLEJITOS_H


class Complejitos
{
    public:
        Complejitos(double x,double y);
        Complejitos sum(Complejitos b);
        Complejitos multi(Complejitos b);
        bool igual(Complejitos b);
        void imprimir();


    private:
       double real,imaginario;

};

#endif // COMPLEJITOS_H
