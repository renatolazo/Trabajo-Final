#include <iostream>
#ifndef LIBJUVENILES_H
#define LIBJUVENILES_H
#include "Libro.h"

using namespace std;

class LibJuveniles : public Libro
{
private:
    string titulo3;
    string personajes;
public:
    LibJuveniles(int, int, string, string, string);
    void getSobre();
    void getTitulo3();
};

#endif // LIBJUVENILES_H
