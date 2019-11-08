#include <iostream>
#include "Cuenta.h"

using namespace std;

Cuenta::Cuenta(string _user, string _contrasena)
{
    user = _user;
    contrasena = _contrasena;
}

void Cuenta::entrar()
{
    cout << "Bienvenido " << user << " su contrasena " << contrasena << " se ha guardado correctamente" << endl;
}

void Cuenta::ObtenerUser()
{
    cout << user << endl;
}

void Cuenta::ObtenerContr()
{
    cout << contrasena << endl;
}
