#include <iostream>
#ifndef LIBINFORMATIVOS_H
#define LIBINFORMATIVOS_H
#include "Libro.h"

using namespace std;

class LibInformativos : public Libro
{
private:
    string titulo2;
    string materia;
public:
    LibInformativos(int, int, string, string, string);
    void getSobre();
    void getTitulo2();
};

#endif // LIBINFORMATIVOS_H
