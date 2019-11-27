#include <iostream>
#ifndef CUENTA_H
#define CUENTA_H

using namespace std;

class Cuenta
{
private:
    int OpcionCuenta;
    string user;
public:
    Cuenta(int, string);
    void ObtenerUser();
    void entrar();
    int getOpcionCuenta();
};

#endif // CUENTA_H
