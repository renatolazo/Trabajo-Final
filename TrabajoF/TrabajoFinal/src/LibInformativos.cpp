#include <iostream>
#include "LibInformativos.h"
#include "Libro.h"

using namespace std;

LibInformativos::LibInformativos(int _fecha, int _NumOpc, string _autor, string _titulo2, string _materia) : Libro(_fecha, _NumOpc, _autor)
{
    titulo2 = _titulo2;
    materia = _materia;
}

void LibInformativos::getSobre()
{
    Libro::getSobre();
    cout << "\n   3. Materia: " << materia << endl;
}

void LibInformativos::getTitulo2()
{
    cout << titulo2 << endl;
}
