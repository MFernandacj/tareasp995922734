#include "Menus995922734.h"
#include <string>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

void menuInicial()
{
    vector<string> usuarios;
    vector<string> claves;

    //usuarios
    usuarios.push_back("Administrador");

    //claves
    claves.push_back("1234");

    string usuario, password;

    int contador = 0;
    bool ingresa = false;



    do
    {
        system("cls");
        cout<<"\n\t--------------------------"<<endl;
        cout<<"\n\tAUTENTICACION DE USUARIOS "<<endl;
        cout<<"\n\t--------------------------"<<endl;
        cout << "\n\tUsuario: ";
        getline(cin, usuario);

        char caracter;

        cout << "\tContrasena: ";
        caracter = getch();

        password = "";

        while (caracter != 13)
        {

            if (caracter != 8)
            {
                password.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (password.length() > 0)
                {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++)
        {
            if (usuarios[i] == usuario && claves[i] == password)
            {
                ingresa = true;
                break;
            }
        }

        if (!ingresa)
        {
            cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < 3);

    if (ingresa == false)
    {
        cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
    }
    else
    {
        cout << "\n\n\tBienvenido al sistema" << endl;
        system("pause");

int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t9959 - 22 - 734 Maria Fernanda Cobon Juarez" << endl;

        cout << "\n\n\t\t\tMENU GENERAL" << endl;
        cout << "\t\t\t-------------------------------------" << endl;
        cout << "\n\t1. Catalogos" << endl;
        cout << "\t2. Informes" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            menuCatalogos();
            break;

        case 2:
             menuInformes();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void menuCatalogos()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t CRUD" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Altas" << endl;
        cout << "\t2. Bajas" << endl;
        cout << "\t3. Modificacion" << endl;
        cout << "\t2. Consulta" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 3:
             system("pause>nul");
            break;

        case 4:
             system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void menuInformes()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tINFORMES" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1.Impresion" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}
