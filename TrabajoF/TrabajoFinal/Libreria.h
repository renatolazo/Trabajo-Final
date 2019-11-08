#include <iostream>
#ifndef LIBRERIA_H
#define LIBRERIA_H

using namespace std;

class Libreria
{
private:
    string calle;
    string ciudad;
public:
    Libreria(string, string);
    void sitio();
    void lugar();
};

#endif // LIBRERIA_H
