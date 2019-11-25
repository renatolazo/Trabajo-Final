#include <iostream>
#ifndef LIBRERIA_H
#define LIBRERIA_H

using namespace std;

class Libreria
{
private:
    string NombreLibreria;
    string pais;
public:
    Libreria(string, string);
    void obtenerLibreria();
    void ubicacion();
};

#endif // LIBRERIA_H
