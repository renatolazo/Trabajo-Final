#include <iostream>
#ifndef PERSONA_H
#define PERSONA_H

using namespace std;

class Persona
{
private:
    int edad;
    string nombre;
public:
    Persona(int , string);
    int ObtenerEdad();
    void leer();
    void obtener();
};

#endif // PERSONA_H
