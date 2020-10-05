#ifndef FECHA_H
#define FECHA_H
#include <iostream>

using namespace std;

class Fecha
{
private:
    int diaRel;

    static const int acumDias[][13];
    static int diaDelAnio(int dia, int mes, int anio);
    static void diaYMes(int diaDelAnio, int anio, int& dia, int& mes);
    static bool esBiciesto(int anio);
    static bool esFechaValida(int dia, int mes, int anio);
    static int cantDiaMes(int mes, int anio);
    static int diasAniosCompletos(int aniosCompletos);

public:
    Fecha();
    Fecha(int dia, int mes, int anio);

    Fecha& operator +=(int dias);
    Fecha operator +(int dias) const;
    int operator -(const Fecha& f2) const;
    int difEnAnios(const Fecha& f2) const;
    int diaSemana() const;
    void getDMA(int& d, int& m, int& a) const;
    void setDMA(int dia, int mes, int anio);
    friend Fecha operator +(int dias, const Fecha& f);
    bool  operator <(const Fecha& f2) const;
    bool operator >=(const Fecha& f2) const;
    friend istream& operator >>(istream& ent, Fecha& f);
};

ostream& operator <<(ostream& sal, const Fecha& f); //NO ES NECESARIO DECLARAR COMO FRIEND PORQUE NO VA A ACCEDER A NINGUN MIEMBRO PRIVADO DE LA CLASE


#endif // FECHA_H
