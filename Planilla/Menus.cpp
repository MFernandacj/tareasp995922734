#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
    vector<string> usuarios;
    vector<string> claves;

    //usuarios
    usuarios.push_back("jhonatan");
    usuarios.push_back("kenph");
    usuarios.push_back("geo");
    usuarios.push_back("mafer");

    //claves
    claves.push_back("123");
    claves.push_back("456");
    claves.push_back("789");
    claves.push_back("abc");

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

