#include <iostream>
#include "LibJuveniles.h"
#include "Libro.h"

using namespace std;

LibJuveniles::LibJuveniles(int _fecha, int _NumOpc, string _autor, string _titulo3, string _personajes) : Libro(_fecha, _NumOpc, _autor)
{
    titulo3 = _titulo3;
    personajes = _personajes;
}

void LibJuveniles::getSobre()
{
    Libro::getSobre();
    cout << "\n   3. Personajes: " << personajes << endl;
}

void LibJuveniles::getTitulo3()
{
    cout << titulo3 << endl;
}
