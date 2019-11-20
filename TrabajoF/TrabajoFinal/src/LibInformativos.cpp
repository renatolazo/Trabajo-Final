#include <iostream>
#include "LibInformativos.h"
#include "Libro.h"

using namespace std;

LibInformativos::LibInformativos(int _fecha, string _autor, string _genero, string _editorial, string _titulo) : Libro(_fecha,_autor,_genero,_editorial)
{
    titulo = _titulo;
}

void LibInformativos::sobre()
{
    cout << "la implementacion de la trigonometria en la matematica" << endl;
}
