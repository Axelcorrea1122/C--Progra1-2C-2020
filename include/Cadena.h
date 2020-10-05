#ifndef CADENA_H
#define CADENA_H
#include <iostream>
#include <string.h>

using namespace std;

class Cadena
{
private:
    char* cad;
    Cadena(char* cad);

    public:
        Cadena(const char* cad);
        Cadena();
        Cadena(const Cadena& Cadena); //contructor copia
        ~Cadena(); //destructor
        Cadena& operator =(const Cadena& otra);


        Cadena operator +(const Cadena& otra) const;
        Cadena& operator +=(const Cadena& otra);

        char caracterEnPos(int pos) const;
        Cadena podar() const;
        Cadena subcadena(int ini, int fin) const;
        bool contiene(const Cadena& cadABuscar) const;
        Cadena reemplazar(const Cadena& cadABuscar, const Cadena& cadReempl) const;
        //vector<Cadena> split(char separador) const;



        friend ostream& operator<<(ostream& sal, const Cadena& cadena);
        friend istream& operator >>(istream& ent, Cadena& cadena);

    protected:

    private:
};

#endif // CADENA_H
