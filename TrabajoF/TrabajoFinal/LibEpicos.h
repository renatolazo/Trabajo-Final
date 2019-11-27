#include <iostream>
#ifndef LIBEPICOS_H
#define LIBEPICOS_H
#include "Libro.h"

using namespace std;

class LibEpicos : public Libro
{
private:
    string titulo1;
    string genero;
public:
    LibEpicos(int, int, string, string, string);
    void getSobre();
    void getTitulo1();
};

#endif // LIBEPICOS_H
