#include <iostream>
#include "Cuenta.h"

using namespace std;

Cuenta::Cuenta(int _OpcionCuenta, string _user)
{
    OpcionCuenta = _OpcionCuenta;
    user = _user;
}

void Cuenta::entrar()
{
    cout << "\n   Bienvenid@ " << user << " ,Que accion desea ejecutar?" << endl;
}

void Cuenta::ObtenerUser()
{
    cout << "\n   " << OpcionCuenta << ". " << user << endl;
}

int Cuenta::getOpcionCuenta()
{
    return OpcionCuenta;
}
