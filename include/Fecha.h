#ifndef FECHA_H
#define FECHA_H


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

    void sumarDias(int dias);
    Fecha sumarDias(int dias) const;
    int difEnDias(const Fecha* f2) const;
    int difEnAnios(const Fecha* f2) const;
    int diaSemana() const;
    void getDMA(int& d, int& m, int& a) const;

};

#endif // FECHA_H
