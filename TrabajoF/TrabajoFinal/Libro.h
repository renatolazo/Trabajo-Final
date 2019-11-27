#include <iostream>
#ifndef LIBRO_H
#define LIBRO_H

using namespace std;

class Libro
{
protected:
    int fecha;
    int NumOpc;
    string autor;
public:
    Libro(int, int, string);
    virtual void getSobre();
    virtual void getAutor();
    void getFecha();
};

#endif // LIBRO_H
