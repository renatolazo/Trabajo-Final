#include <iostream>
#include "LibEpicos.h"
#include "Libro.h"

using namespace std;

LibEpicos::LibEpicos(int _fecha, int _NumOpc, string _autor, string _titulo1, string _genero) : Libro(_fecha, _NumOpc, _autor)
{
    titulo1 = _titulo1;
    genero = _genero;
}

void LibEpicos::getSobre()
{
    Libro::getSobre();
    cout << "\n   3. Genero: " << genero << endl;
}

void LibEpicos::getTitulo1()
{
    cout << titulo1 << endl;
}
