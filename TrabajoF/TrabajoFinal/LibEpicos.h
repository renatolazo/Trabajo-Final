#include <iostream>
#ifndef LIBEPICOS_H
#define LIBEPICOS_H
#include "Libro.h"

using namespace std;

class LibEpicos : public Libro
{
private:
    string titulo;
public:
    LibEpicos(int, string, string, string, string);
    void sobre();
};

#endif // LIBEPICOS_H
