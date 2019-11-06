#include <iostream>
#include <math.h>
#include <stdio.h>
/*#include "Cuenta.h"
#include "Libro.h"*/

using namespace std;

//Base de Datos de "Mi Biblioteca"
//En este programa se intenta crear un software que permita a una persona buscar un libro, la
//persona podra usar filtros para poder encontrar mas rapido el libro deseado, ademas el usuario tendra
//la posibilidad de tener en una biblioteca virtual los libros que haya adquirido anteriormente

/*int main()
{
    int n;
    int opcion;
    do
    {
        cout << "\n   1. Ingresar" << endl;
        cout << "\n   2. Acerca de" << endl;
        cout << "\n   3. Salir" << endl;
        cout << "\n\n   Introduzca opcion (1-3): " << endl;
        cin >> opcion;
        //Inicio del anidamiento
        switch ( opcion )
        {
            case 1: int x;
                    cout << "\n   1. Laura" << endl;
                    cout << "\n   2. Raul" << endl;
                    cout << "\n   3. Miguel" << endl;
                    cout << "\n\n    Introduzca una opcion (1-3)" << endl;
                    switch ( x )
                    {
                        case 1: cout << "\n   1. Mis Libros 1" << endl;
                                cout << "\n   2. Libros" << endl;
                                break;
                        case 2: cout << "\n   1. Mis Libros 2" << endl;
                                cout << "\n   2. Libros" << endl;
                                break;
                        case 3: cout << "\n   1. Mis Libros 3" << endl;
                                cout << "\n   2. Libros" << endl;
                                break;
                    }
                    break;
            case 2: int y;
                    cout << "\n   1. Autores" << endl;
                    cout << "\n   2. Obras" << endl;
                    cout << "\n   3. Librerias" << endl;
                    cout << "\n\n    Introduzca una opcion (1-3)" << endl;
                    switch ( y )
                    {
                        case 1: cout << "Charles Dickens, Edgar Alan Poe, Stephen King" << endl;
                                break;
                        case 2: cout << "Game of Thrones, Harry Potter, Los Juegos del Hambre" << endl;
                                break;
                        case 3: cout << "Livraria Ler Devagar, Atlantis Books, Barter Books" << endl;
                                break;
                    }
                    break;
        }
         //Fin del anidamiento
    }while ( opcion != 3 );
    return 0;
}*/

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

class Libro
{
private:
    int fecha;
    string autor;
    string genero;
    string editorial;
public:
    Libro(int, string, string, string);
    void personaje();
    void paginas();
};

class Persona
{
private:
    int edad;
    string nombre;
public:
    Persona(int , string);
    int ObtenerEdad();
    void leer();
    void obtener();
};

class Libreria
{
private:
    string calle;
    string ciudad;
public:
    Libreria(string, string);
    void sitio();
    void lugar();
};

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

Persona::Persona(int _edad, string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer()
{
    cout << nombre << " esta leyendo el libro" << endl;
}

void Persona::obtener()
{
    cout << "La persona de edad " << edad << " obtuvo el libro" << endl;
}

int Persona::ObtenerEdad()
{
    return edad;
}

Libreria::Libreria(string _calle, string _ciudad)
{
    calle = _calle;
    ciudad = _ciudad;
}

void Libreria::sitio()
{
    cout << "El libro se encuentra en la calle " << calle << endl;
}

void Libreria::lugar()
{
    cout << "El libro se encuentra en la ciudad " << ciudad << endl;
}

int main()
{
    int p1_int;
    string p1_str;
    cout << "escriba su edad: ";
    cin >> p1_int;
    cout << "escriba su nombre: ";
    cin >> p1_str;
    Cuenta c1 = Cuenta("Raul", "123");
    Cuenta c2("Jose", "123");
    Libreria li1 = Libreria("calle1", "ciudad1");
    Libreria li2("calle2", "ciudad2");
    Persona p1 = Persona(p1_int, p1_str);
    Persona p2(15, "Sophia");
    Libro l1 = Libro(2001, "Renato", "Accion", "CSIC");
    Libro l2(1999, "Maria", "Comedia", "CSIC");
    c1.entrar();
    li1.sitio();
    li2.lugar();
    if (p1.ObtenerEdad() <= 17){
        cout << "Usted es menor de edad" << endl;
        p1.leer();
        p1.obtener();
    }
    else{
        cout << "Usted es mayor de edad" << endl;
        p1.leer();
        p1.obtener();
    }
    p1.leer();
    p2.obtener();
    l1.personaje();
    l2.paginas();
    /*if(Libro(_fecha)<1800 and Libro(_fecha)>2019)
        cout << "Fecha incorrecta" << endl;*/
    return 0;
}
