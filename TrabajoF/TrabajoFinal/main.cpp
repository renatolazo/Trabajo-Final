#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Cuenta.h"
#include "Libro.h"
#include "Persona.h"
#include "Libreria.h"
#include "LibEpicos.h"
#include "LibInformativos.h"

using namespace std;

//Base de Datos de "Mi Biblioteca"
//En este programa se intenta crear un software que permita a una persona buscar un libro, la
//persona podra usar filtros para poder encontrar mas rapido el libro deseado, ademas el usuario tendra
//la posibilidad de tener en una biblioteca virtual los libros que haya adquirido anteriormente







int main()
{
    Cuenta c1(1, "Laura");
    Cuenta c2(2, "Raul");
    Cuenta c3(3, "Miguel");
    Libreria lib1("Libreria Lello", "Portugal");
    Libreria lib2("El Ateneo Gran Splendid", "Argentina");
    Libreria lib3("Libreria del Virrey", "Peru");
    Libreria lib4("Polare Maastricht", "Paises Bajos");
    Libreria lib5("Librairie des Colonnes", "Marruecos");
    Libreria lib6("Shakespeare and Co.", "Francia");
    Libreria lib7("Cook and Book", "Belgica");
    int opcion;
    do
    {   cout << "\n   1. Ingresar" << endl;
        cout << "\n   2. Acerca de" << endl;
        cout << "\n   3. Salir" << endl;
        cout << "\n\n   Introduzca opcion (1-3): " << endl;
        cin >> opcion;
        //Inicio del anidamiento
        switch ( opcion )
        {
            case 1: int opc1;
                    c1.ObtenerUser();
                    c2.ObtenerUser();
                    c3.ObtenerUser();
                    cout << "\n\n    Introduzca una opcion (1-3)" << endl;
                    cin >> opc1;
                    switch ( opc1 )
                    {
                        case 1: int x;
                                c1.entrar();
                                cout << "\n   1. Mis Libros 1" << endl;
                                cout << "\n   2. Libros" << endl;
                                cout << "\n\n    Introduzca una opcion (1-2)" << endl;
                                cin >> x;
                                switch ( x )
                                {
                                    case 1: int a;
                                            cout << "\n   HarryPotter, After, ElDestello" << endl;
                                            cout << "\n   1. Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> a;
                                            switch ( a )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            break;
                                    case 2: int b;
                                            cout << "\n   Celopan, Quidditch, Ebano, ElRioBajaSucio, HarryPotter,";
                                            cout << " ElDespertarDeLasMusas, LaAbuela, ElDestello, CazadoresDeSombras,";
                                            cout << " CazadoresDeSombras2, CazadoresDeSombras3, ElCorredorDelLaberinto,";
                                            cout << " LaMisionDeRox, After, ElLazarilloDeTormes, ElChicoDelUkelele";
                                            cout << "\n   1. Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> b;
                                            system("cls");
                                            switch ( b )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                }
                                system("cls");
                                break;
                        case 2: int y;
                                c2.entrar();
                                cout << "\n   1. Mis Libros 2" << endl;
                                cout << "\n   2. Libros" << endl;
                                cout << "\n\n    Introduzca una opcion (1-2)" << endl;
                                cin >> y;
                                switch ( y )
                                {
                                    case 1: int aa;
                                            cout << "\n   Celopan, LaMisionDeRox, LaAbuela" << endl;
                                            cout << "\n   1. Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> aa;
                                            switch ( aa )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 2: int bb;
                                            cout << "\n   Celopan, Quidditch, Ebano, ElRioBajaSucio, HarryPotter,";
                                            cout << " ElDespertarDeLasMusas, LaAbuela, ElDestello, CazadoresDeSombras,";
                                            cout << " CazadoresDeSombras2, CazadoresDeSombras3, ElCorredorDelLaberinto,";
                                            cout << " LaMisionDeRox, After, ElLazarilloDeTormes, ElChicoDelUkelele";
                                            cout << "\n   1. Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> bb;
                                            switch ( bb )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                }
                                system("cls");
                                break;
                        case 3: int z;
                                c3.entrar();
                                cout << "\n   1. Mis Libros 3" << endl;
                                cout << "\n   2. Libros" << endl;
                                cout << "\n\n    Introduzca una opcion (1-2)" << endl;
                                cin >> z;
                                switch ( z )
                                {
                                    case 1: int aaa;
                                            cout << "\n   CazadoresDeSombras, CazadoresDeSombras2, CazadoresDeSombras3" << endl;
                                            cout << "\n   1. Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> aaa;
                                            switch ( aaa )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 2: int bbb;
                                            cout << "\n   Celopan, Quidditch, Ebano, ElRioBajaSucio, HarryPotter,";
                                            cout << " ElDespertarDeLasMusas, LaAbuela, ElDestello, CazadoresDeSombras,";
                                            cout << " CazadoresDeSombras2, CazadoresDeSombras3, ElCorredorDelLaberinto,";
                                            cout << " LaMisionDeRox, After, ElLazarilloDeTormes, ElChicoDelUkelele";
                                            cout << "\n   1. Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> bbb;
                                            switch ( bbb )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                }
                                system("cls");
                                break;
                    }
                    system("cls");
                    break;
            case 2: int opc2;
                    cout << "\n   1. Autores" << endl;
                    cout << "\n   2. Librerias" << endl;
                    cout << "\n\n    Introduzca una opcion (1-3)" << endl;
                    cin >> opc2;
                    switch ( opc2 )
                    {
                        case 1: int opca;
                                cout << "\n   Charles Dickens, Edgar Alan Poe, Stephen King" << endl;
                                cout << "\n   1. Precione cualquier numero para volver al menu principal" << endl;
                                cin >> opca;
                                switch ( opca )
                                {
                                    case 1: int main;
                                            cout << "\n   1. Volver al menu principal" << endl;
                                            system("cls");
                                            break;
                                }
                                system("cls");
                                break;
                        case 2: int opcb;
                                cout << "\n   1. ";lib1.obtenerLibreria();
                                cout << "\n   2. ";lib2.obtenerLibreria();
                                cout << "\n   3. ";lib3.obtenerLibreria();
                                cout << "\n   4. ";lib4.obtenerLibreria();
                                cout << "\n   5. ";lib5.obtenerLibreria();
                                cout << "\n   6. ";lib6.obtenerLibreria();
                                cout << "\n   7. ";lib7.obtenerLibreria();
                                cout << "\n   8. Precione cualquier numero para volver al menu principal" << endl;
                                cin >> opcb;
                                switch ( opcb )
                                {
                                    case 1: int opcb1;
                                            lib1.ubicacion();
                                            cin >> opcb1;
                                            switch ( opcb1 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 2: int opcb2;
                                            lib2.ubicacion();
                                            cin >> opcb2;
                                            switch ( opcb2 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 3: int opcb3;
                                            lib3.ubicacion();
                                            cin >> opcb3;
                                            switch ( opcb3 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 4: int opcb4;
                                            lib4.ubicacion();
                                            cin >> opcb4;
                                            switch ( opcb4 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 5: int opcb5;
                                            lib5.ubicacion();
                                            cin >> opcb5;
                                            switch ( opcb5 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 6: int opcb6;
                                            lib6.ubicacion();
                                            cin >> opcb6;
                                            switch ( opcb6 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 7: int opcb7;
                                            lib7.ubicacion();
                                            cin >> opcb7;
                                            switch ( opcb7 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                }
                                system("cls");
                                break;
                    }
                    system("cls");
                    break;
        }
         //Fin del anidamiento
    }while ( opcion != 3 );
}

/*int main()
{
    menu();
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
    LibEpicos libE1(1950, "Julio Verne", "Epico", "Editorial1", "LaVueltaAlMundo");
    LibInformativos libI1(1960, "JamesNCQ", "Informativo", "Editorial2", "Trigonometria");
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
    libI1.sobre();
    libE1.sobre();*/
    /*if(Libro(_fecha)<1800 and Libro(_fecha)>2019)
        cout << "Fecha incorrecta" << endl;*/
    /*return 0;
}*/
