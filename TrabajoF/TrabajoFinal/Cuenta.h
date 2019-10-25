#include <iostream>
#ifndef CUENTA_H
#define CUENTA_H

using namespace std;

class Cuenta
{
private:
    string user;
    string contrasena;
public:
    Cuenta(string, string);
    void ObtenerUser();
    void ObtenerContr();
    void entrar();
};

#endif // CUENTA_H
