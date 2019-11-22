#include <iostream>
#include "Libro.h"

using namespace std;

Libro::Libro(int _fecha, string _autor, string _genero, string _editorial)
{
    fecha = _fecha;
    autor = _autor;
    genero = _genero;
    editorial = _editorial;
}
void Libro::personaje()
{
    cout << "El personaje del libro es Arturo" << endl;
}
void Libro::paginas()
{
    cout << "El libro contiene " << 500 << " paginas" << endl;
}
void Libro::sobre()
{
    cout << "El libro trata sobre " << endl;
}
