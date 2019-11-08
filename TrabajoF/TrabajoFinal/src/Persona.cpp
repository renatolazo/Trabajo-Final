#include <iostream>
#include "Persona.h"

using namespace std;

Persona::Persona(int _edad, string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer()
{
    cout << nombre << " esta leyendo el libro" << endl;
}

void Persona::obtener()
{
    cout << "La persona de edad " << edad << " obtuvo el libro" << endl;
}

int Persona::ObtenerEdad()
{
    return edad;
}
