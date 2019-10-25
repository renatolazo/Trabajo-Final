#include <iostream>
#ifndef LIBRO_H
#define LIBRO_H

using namespace std;

class Libro
{
private:
    int fecha;
    string autor;
    string genero;
    string editorial;
public:
    Libro(int, string, string, string);
    void personaje();
    void paginas();
};

#endif // LIBRO_H
