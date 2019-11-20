#include <iostream>
#ifndef LIBINFORMATIVOS_H
#define LIBINFORMATIVOS_H
#include "Libro.h"

using namespace std;

class LibInformativos : public Libro
{
private:
    string titulo;
public:
    LibInformativos(int, string, string, string, string);
    void sobre();
};

#endif // LIBINFORMATIVOS_H
