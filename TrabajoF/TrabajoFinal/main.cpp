#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Cuenta.h"
#include "Libro.h"
#include "Persona.h"
#include "Libreria.h"
#include "LibEpicos.h"
#include "LibInformativos.h"
#include "LibJuveniles.h"

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
    LibEpicos e1(1996, 1, "George R. R. Martin", "Juego De Tronos", "Fantasia");
    LibEpicos e2(1937, 2, "J. R. R. Tolkien", "El Hobbit", "Epico");
    LibEpicos e3(1954, 3, "J. R. R. Tolkien", "El Senor De Los Anillos", "Fantasia");
    LibEpicos e4(2005, 4, "Brandon Sanderson", "Elantris", "Fantasia");
    LibEpicos e5(2007, 5, "Terry Goodkind", "La Espada De La Verdad", "Fantasia Epica");
    LibInformativos i1(1999, 1, "Antonio Rodriguez", "Probabilidad Y Estadistica", "Informativo");
    LibInformativos i2(2005, 2, "Fernando Zapata", "Fisica", "Informativo");
    LibInformativos i3(1995, 3, "Fiorella Lopez", "Calculo Diferencial", "Informativo");
    LibInformativos i4(2010, 4, "Hugo Contreras", "Programacion Basica", "Informativo");
    LibInformativos i5(2008, 5, "Gabriela Gomez", "Introduccion Al Derecho", "Informativo");
    LibJuveniles j1(2012, 1, "John Green", "Bajo La Misma Estrella", "Hazel Grace Lancaster, Augustus Waters");
    LibJuveniles j2(2012, 2, "Leigh Bardugo", "Sobra Y Hueso", "Alina Starkov, Malyen Oretsev");
    LibJuveniles j3(2008, 3, "John Green", "Ciudades De Papel", "Margo Roth Spiegelman, Quentin Jacobsen, Benners Starling, Lacey Pemberton, Jase, Radar");
    LibJuveniles j4(2005, 4, "Markus Zusak", "La Ladrona De Libros", "Liesel Meminger, Rudy Steiner, Hans Hubermann, Max Vandenburg, Rosa Hubermann");
    LibJuveniles j5(2010, 5, "David Levithan", "Will Grayson, Will Grayson", "Tiny Cooper, Will Grayson 2, Jane Turner, Will Grayson 1, Maura");
    Libreria lib1("Libreria Lello", "Portugal");
    Libreria lib2("El Ateneo Gran Splendid", "Argentina");
    Libreria lib3("Libreria del Virrey", "Peru");
    Libreria lib4("Polare Maastricht", "Paises Bajos");
    Libreria lib5("Librairie des Colonnes", "Marruecos");
    Libreria lib6("Shakespeare and Co.", "Francia");
    Libreria lib7("Cook and Book", "Belgica");
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
                                cout << "\n   1. Mis Libros " << c1.getOpcionCuenta() << endl;
                                cout << "\n   2. Libros" << endl;
                                cout << "\n\n    Introduzca una opcion (1-2)" << endl;
                                cin >> x;
                                switch ( x )
                                {
                                    case 1: int a;
                                            cout << "\n   1. ";
                                            e2.getTitulo1();
                                            cout << "\n   2. ";
                                            i5.getTitulo2();
                                            cout << "\n   3. ";
                                            j3.getTitulo3();
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> a;
                                            switch ( a )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 2: int b;
                                            cout << "\n   1. Libros Epicos" << endl;
                                            cout << "\n   2. Libros Informativos" << endl;
                                            cout << "\n   3. Libros Juveniles" << endl;
                                            cout << "\n\n    Introduzca una opcion (1-3)" << endl;
                                            cin >> b;
                                            switch ( b )
                                            {
                                                case 1: int b1;
                                                        cout << "\n   1. ";
                                                        e1.getTitulo1();
                                                        cout << "\n   2. ";
                                                        e2.getTitulo1();
                                                        cout << "\n   3. ";
                                                        e3.getTitulo1();
                                                        cout << "\n   4. ";
                                                        e4.getTitulo1();
                                                        cout << "\n   5. ";
                                                        e5.getTitulo1();
                                                        cout << "\n\n    Introduzca una opcion (1-5)" << endl;
                                                        cin >> b1;
                                                        switch ( b1 )
                                                        {
                                                            case 1: int b1_1;
                                                                    e1.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b1_1;
                                                                    switch( b1_1 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 2: int b1_2;
                                                                    e2.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b1_2;
                                                                    switch( b1_2 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 3: int b1_3;
                                                                    e3.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b1_3;
                                                                    switch( b1_3 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 4: int b1_4;
                                                                    e4.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b1_4;
                                                                    switch( b1_4 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 5: int b1_5;
                                                                    e5.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b1_5;
                                                                    switch( b1_5 )
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
                                                case 2: int b2;
                                                        cout << "\n   1. ";
                                                        i1.getTitulo2();
                                                        cout << "\n   2. ";
                                                        i2.getTitulo2();
                                                        cout << "\n   3. ";
                                                        i3.getTitulo2();
                                                        cout << "\n   4. ";
                                                        i4.getTitulo2();
                                                        cout << "\n   5. ";
                                                        i5.getTitulo2();
                                                        cout << "\n\n    Introduzca una opcion (1-5)" << endl;
                                                        cin >> b2;
                                                        switch ( b2 )
                                                        {
                                                            case 1: int b2_1;
                                                                    i1.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b2_1;
                                                                    switch( b2_1 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 2: int b2_2;
                                                                    i2.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b2_2;
                                                                    switch( b2_2 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 3: int b2_3;
                                                                    i3.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b2_3;
                                                                    switch( b2_3 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 4: int b2_4;
                                                                    i4.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b2_4;
                                                                    switch( b2_4 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 5: int b2_5;
                                                                    i5.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b2_5;
                                                                    switch( b2_5 )
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
                                                case 3: int b3;
                                                        cout << "\n   1. ";
                                                        j1.getTitulo3();
                                                        cout << "\n   2. ";
                                                        j2.getTitulo3();
                                                        cout << "\n   3. ";
                                                        j3.getTitulo3();
                                                        cout << "\n   4. ";
                                                        j4.getTitulo3();
                                                        cout << "\n   5. ";
                                                        j5.getTitulo3();
                                                        cout << "\n\n    Introduzca una opcion (1-5)" << endl;
                                                        cin >> b3;
                                                        switch ( b3 )
                                                        {
                                                            case 1: int b3_1;
                                                                    j1.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b3_1;
                                                                    switch( b3_1 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 2: int b3_2;
                                                                    j2.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b3_2;
                                                                    switch( b3_2 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 3: int b3_3;
                                                                    j3.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b3_3;
                                                                    switch( b3_3 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 4: int b3_4;
                                                                    j4.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b3_4;
                                                                    switch( b3_4 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 5: int b3_5;
                                                                    j5.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> b3_5;
                                                                    switch( b3_5 )
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
                                system("cls");
                                break;
                        case 2: int y;
                                c2.entrar();
                                cout << "\n   1. Mis Libros " << c2.getOpcionCuenta() << endl;
                                cout << "\n   2. Libros" << endl;
                                cout << "\n\n    Introduzca una opcion (1-2)" << endl;
                                cin >> y;
                                switch ( y )
                                {
                                    case 1: int aa;
                                            cout << "\n   1. ";
                                            e5.getTitulo1();
                                            cout << "\n   2. ";
                                            i2.getTitulo2();
                                            cout << "\n   3. ";
                                            j4.getTitulo3();
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
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
                                            cout << "\n   1. Libros Epicos" << endl;
                                            cout << "\n   2. Libros Informativos" << endl;
                                            cout << "\n   3. Libros Juveniles" << endl;
                                            cout << "\n\n    Introduzca una opcion (1-3)" << endl;
                                            cin >> bb;
                                            switch ( bb )
                                            {
                                                case 1: int bb1;
                                                        cout << "\n   1. ";
                                                        e1.getTitulo1();
                                                        cout << "\n   2. ";
                                                        e2.getTitulo1();
                                                        cout << "\n   3. ";
                                                        e3.getTitulo1();
                                                        cout << "\n   4. ";
                                                        e4.getTitulo1();
                                                        cout << "\n   5. ";
                                                        e5.getTitulo1();
                                                        cout << "\n\n    Introduzca una opcion (1-5)" << endl;
                                                        cin >> bb1;
                                                        switch ( bb1 )
                                                        {
                                                            case 1: int bb1_1;
                                                                    e1.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb1_1;
                                                                    switch( bb1_1 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 2: int bb1_2;
                                                                    e2.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb1_2;
                                                                    switch( bb1_2 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 3: int bb1_3;
                                                                    e3.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb1_3;
                                                                    switch( bb1_3 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 4: int bb1_4;
                                                                    e4.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb1_4;
                                                                    switch( bb1_4 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 5: int bb1_5;
                                                                    e5.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb1_5;
                                                                    switch( bb1_5 )
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
                                                case 2: int bb2;
                                                        cout << "\n   1. ";
                                                        i1.getTitulo2();
                                                        cout << "\n   2. ";
                                                        i2.getTitulo2();
                                                        cout << "\n   3. ";
                                                        i3.getTitulo2();
                                                        cout << "\n   4. ";
                                                        i4.getTitulo2();
                                                        cout << "\n   5. ";
                                                        i5.getTitulo2();
                                                        cout << "\n\n    Introduzca una opcion (1-5)" << endl;
                                                        cin >> bb2;
                                                        switch ( bb2 )
                                                        {
                                                            case 1: int bb2_1;
                                                                    i1.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb2_1;
                                                                    switch( bb2_1 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 2: int bb2_2;
                                                                    i2.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb2_2;
                                                                    switch( bb2_2 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 3: int bb2_3;
                                                                    i3.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb2_3;
                                                                    switch( bb2_3 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 4: int bb2_4;
                                                                    i4.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb2_4;
                                                                    switch( bb2_4 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 5: int bb2_5;
                                                                    i5.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb2_5;
                                                                    switch( bb2_5 )
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
                                                case 3: int bb3;
                                                        cout << "\n   1. ";
                                                        j1.getTitulo3();
                                                        cout << "\n   2. ";
                                                        j2.getTitulo3();
                                                        cout << "\n   3. ";
                                                        j3.getTitulo3();
                                                        cout << "\n   4. ";
                                                        j4.getTitulo3();
                                                        cout << "\n   5. ";
                                                        j5.getTitulo3();
                                                        cout << "\n\n    Introduzca una opcion (1-5)" << endl;
                                                        cin >> bb3;
                                                        switch ( bb3 )
                                                        {
                                                            case 1: int bb3_1;
                                                                    j1.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb3_1;
                                                                    switch( bb3_1 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 2: int bb3_2;
                                                                    j2.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb3_2;
                                                                    switch( bb3_2 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 3: int bb3_3;
                                                                    j3.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb3_3;
                                                                    switch( bb3_3 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 4: int bb3_4;
                                                                    j4.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb3_4;
                                                                    switch( bb3_4 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 5: int bb3_5;
                                                                    j5.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bb3_5;
                                                                    switch( bb3_5 )
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
                                system("cls");
                                break;
                        case 3: int z;
                                c3.entrar();
                                cout << "\n   1. Mis Libros " << c3.getOpcionCuenta() << endl;
                                cout << "\n   2. Libros" << endl;
                                cout << "\n\n    Introduzca una opcion (1-2)" << endl;
                                cin >> z;
                                switch ( z )
                                {
                                    case 1: int aaa;
                                            cout << "\n   1. ";
                                            e1.getTitulo1();
                                            cout << "\n   2. ";
                                            i3.getTitulo2();
                                            cout << "\n   3. ";
                                            j5.getTitulo3();
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
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
                                            cout << "\n   1. Libros Epicos" << endl;
                                            cout << "\n   2. Libros Informativos" << endl;
                                            cout << "\n   3. Libros Juveniles" << endl;
                                            cout << "\n\n    Introduzca una opcion (1-3)" << endl;
                                            cin >> bbb;
                                            switch ( bbb )
                                            {
                                                case 1: int bbb1;
                                                        cout << "\n   1. ";
                                                        e1.getTitulo1();
                                                        cout << "\n   2. ";
                                                        e2.getTitulo1();
                                                        cout << "\n   3. ";
                                                        e3.getTitulo1();
                                                        cout << "\n   4. ";
                                                        e4.getTitulo1();
                                                        cout << "\n   5. ";
                                                        e5.getTitulo1();
                                                        cout << "\n\n    Introduzca una opcion (1-5)" << endl;
                                                        cin >> bbb1;
                                                        switch ( bbb1 )
                                                        {
                                                            case 1: int bbb1_1;
                                                                    e1.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb1_1;
                                                                    switch( bbb1_1 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 2: int bbb1_2;
                                                                    e2.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb1_2;
                                                                    switch( bbb1_2 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 3: int bbb1_3;
                                                                    e3.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb1_3;
                                                                    switch( bbb1_3 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 4: int bbb1_4;
                                                                    e4.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb1_4;
                                                                    switch( bbb1_4 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 5: int bbb1_5;
                                                                    e5.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb1_5;
                                                                    switch( bbb1_5 )
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
                                                case 2: int bbb2;
                                                        cout << "\n   1. ";
                                                        i1.getTitulo2();
                                                        cout << "\n   2. ";
                                                        i2.getTitulo2();
                                                        cout << "\n   3. ";
                                                        i3.getTitulo2();
                                                        cout << "\n   4. ";
                                                        i4.getTitulo2();
                                                        cout << "\n   5. ";
                                                        i5.getTitulo2();
                                                        cout << "\n\n    Introduzca una opcion (1-5)" << endl;
                                                        cin >> bbb2;
                                                        switch ( bbb2 )
                                                        {
                                                            case 1: int bbb2_1;
                                                                    i1.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb2_1;
                                                                    switch( bbb2_1 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 2: int bbb2_2;
                                                                    i2.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb2_2;
                                                                    switch( bbb2_2 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 3: int bbb2_3;
                                                                    i3.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb2_3;
                                                                    switch( bbb2_3 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 4: int bbb2_4;
                                                                    i4.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb2_4;
                                                                    switch( bbb2_4 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 5: int bbb2_5;
                                                                    i5.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb2_5;
                                                                    switch( bbb2_5 )
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
                                                case 3: int bbb3;
                                                        cout << "\n   1. ";
                                                        j1.getTitulo3();
                                                        cout << "\n   2. ";
                                                        j2.getTitulo3();
                                                        cout << "\n   3. ";
                                                        j3.getTitulo3();
                                                        cout << "\n   4. ";
                                                        j4.getTitulo3();
                                                        cout << "\n   5. ";
                                                        j5.getTitulo3();
                                                        cout << "\n\n    Introduzca una opcion (1-5)" << endl;
                                                        cin >> bbb3;
                                                        switch ( bbb3 )
                                                        {
                                                            case 1: int bbb3_1;
                                                                    j1.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb3_1;
                                                                    switch( bbb3_1 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 2: int bbb3_2;
                                                                    j2.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb3_2;
                                                                    switch( bbb3_2 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 3: int bbb3_3;
                                                                    j3.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb3_3;
                                                                    switch( bbb3_3 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 4: int bbb3_4;
                                                                    j4.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb3_4;
                                                                    switch( bbb3_4 )
                                                                    {
                                                                        case 1: int main;
                                                                                cout << "\n   1. Volver al menu principal" << endl;
                                                                                system("cls");
                                                                                break;
                                                                    }
                                                                    system("cls");
                                                                    break;
                                                            case 5: int bbb3_5;
                                                                    j5.getSobre();
                                                                    cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                                                    cin >> bbb3_5;
                                                                    switch( bbb3_5 )
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
                                cout << "\n   1.  ";e1.getAutor();
                                cout << "\n   2.  ";e2.getAutor();
                                cout << "\n   3.  ";e4.getAutor();
                                cout << "\n   4.  ";e5.getAutor();
                                cout << "\n   5.  ";i1.getAutor();
                                cout << "\n   6.  ";i2.getAutor();
                                cout << "\n   7.  ";i3.getAutor();
                                cout << "\n   8.  ";i4.getAutor();
                                cout << "\n   9.  ";i5.getAutor();
                                cout << "\n   10. ";j1.getAutor();
                                cout << "\n   11. ";j2.getAutor();
                                cout << "\n   12. ";j4.getAutor();
                                cout << "\n   13. ";j5.getAutor();
                                cout << "\n\n    Introduzca una opcion (1-13)" << endl;
                                cin >> opca;
                                switch ( opca )
                                {
                                    case 1: int opca1;
                                            cout << "\n   El autor nacio el 20 de septiembre de 1948" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca1;
                                            switch ( opca1 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 2: int opca2;
                                            cout << "\n   El autor nacio el 3 de enero de 1892" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca2;
                                            switch ( opca2 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 3: int opca3;
                                            cout << "\n   El autor nacio el 19 de diciembre de 1975" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca3;
                                            switch ( opca3 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 4: int opca4;
                                            cout << "\n   El autor nacio el 1 de mayo de 1948" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca4;
                                            switch ( opca4 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 5: int opca5;
                                            cout << "\n   El autor nacio el 13 de abril de 1970" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca5;
                                            switch ( opca5 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 6: int opca6;
                                            cout << "\n   El autor nacio el 26 de octubre de 1968" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca6;
                                            switch ( opca6 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 7: int opca7;
                                            cout << "\n   El autor nacio el 10 de julio de 1980" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca7;
                                            switch ( opca7 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 8: int opca8;
                                            cout << "\n   El autor nacio el 6 de febrero de 1957" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca8;
                                            switch ( opca8 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 9: int opca9;
                                            cout << "\n   El autor nacio el 17 de mayo de 1964" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca9;
                                            switch ( opca9 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 10: int opca10;
                                            cout << "\n   El autor nacio el 24 de agosto de 1977" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca10;
                                            switch ( opca10 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 11: int opca11;
                                            cout << "\n   El autor nacio el 6 de abril de 1975" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca11;
                                            switch ( opca11 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 12: int opca12;
                                            cout << "\n   El autor nacio el 23 de junio de 1975" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca12;
                                            switch ( opca12 )
                                            {
                                                case 1: int main;
                                                        cout << "\n   1. Volver al menu principal" << endl;
                                                        system("cls");
                                                        break;
                                            }
                                            system("cls");
                                            break;
                                    case 13: int opca13;
                                            cout << "\n   El autor nacio el 7 de septiembre de 1972" << endl;
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
                                            cin >> opca13;
                                            switch ( opca13 )
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
                        case 2: int opcb;
                                cout << "\n   1. ";lib1.obtenerLibreria();
                                cout << "\n   2. ";lib2.obtenerLibreria();
                                cout << "\n   3. ";lib3.obtenerLibreria();
                                cout << "\n   4. ";lib4.obtenerLibreria();
                                cout << "\n   5. ";lib5.obtenerLibreria();
                                cout << "\n   6. ";lib6.obtenerLibreria();
                                cout << "\n   7. ";lib7.obtenerLibreria();
                                cout << "\n\n    Introduzca una opcion (1-7)" << endl;
                                cin >> opcb;
                                switch ( opcb )
                                {
                                    case 1: int opcb1;
                                            lib1.ubicacion();
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
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
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
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
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
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
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
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
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
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
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
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
                                            cout << "\n   Precione cualquier numero para volver al menu principal" << endl;
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
