#include <iostream>
#include "LibEpicos.h"
#include "Libro.h"

using namespace std;

LibEpicos::LibEpicos(int _fecha, string _autor, string _genero, string _editorial, string _titulo) : Libro(_fecha,_autor,_genero,_editorial)
{
    titulo = _titulo;
}

void LibEpicos::sobre()
{
    cout << "las historias de los heroes de la era medieval" << endl;
}
