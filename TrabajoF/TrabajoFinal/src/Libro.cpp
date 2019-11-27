#include <iostream>
#include "Libro.h"

using namespace std;

Libro::Libro(int _fecha, int _NumOpc, string _autor)
{
    fecha = _fecha;
    NumOpc = _NumOpc;
    autor = _autor;
}

void Libro::getSobre()
{
    cout << "\n   1. Autor: " << autor << endl;
    cout << "\n   2. Fecha: " << fecha << endl;
}

void Libro::getAutor()
{
    cout << autor << endl;
}

void Libro::getFecha()
{
    cout << fecha << endl;
}
