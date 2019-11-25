#include <iostream>
#include "Libreria.h"

using namespace std;

Libreria::Libreria(string _NombreLibreria, string _pais)
{
    NombreLibreria = _NombreLibreria;
    pais = _pais;
}

void Libreria::obtenerLibreria()
{
    cout << NombreLibreria << endl;
}

void Libreria::ubicacion()
{
    cout << "\n   Esta libreria se encuentra en " << pais << endl;
}
