#include "RamaCRUD_CatalogoX.995922734.h"
#include <string>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

void Catalogo::menuCatalogos()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tCRUD" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Altas" << endl;
        cout << "\t2. Bajas" << endl;
        cout << "\t3. Modificaciones" << endl;
        cout << "\t4. Consulta" << endl;
        cout << "\t0. Regresar" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            menuAltas();
            break;

        case 2:
           menuBajas();
            break;

        case 3:
            menuModificar();
            break;

        case 4:
           menuConsulta();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

 void Catalogo::menuAltas()      //Constructor de la clase Jugador, agregarJugador
{
	system("cls");      //limpia pantalla
	fstream file;       //creacion variable file de la libreria fstream
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Agregar Jugador ----------------------------"<<endl;
	//Ingreso de datos
	cout<<"\t\t\tIngresa ID del Jugador     : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del Jugador : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa tu Apodo           : ";
	cin>>apodo;
	cout<<"\t\t\tIngresa la Contraseña      : ";
	cin>>contrasena;

	//Abre archivo y luego lo ve al final de la salida
	file.open("Jugador.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apodo <<std::left<<std::setw(15)<< contrasena << "\n";
	file.close();   //Cierra el archivo
}


 void Catalogo::menuModificar()  //Creacion de la clase Jugador, modificarJugadores
{
	system("cls");
	fstream file,file1;
	string jugador_id;
	int found=0;
	cout<<"\n------------------------- \"Modificacion Detalles Jugador\" -------------------------"<<endl;
	file.open("Jugador.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese ID del jugador que quiere modificar: ";
		cin>>jugador_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> apodo >> contrasena;
		while(!file.eof())
		{
			if(jugador_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apodo <<std::left<<std::setw(15)<< contrasena << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Jugador: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del Jugador: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese Apodo del Jugador: ";
				cin>>apodo;
				cout<<"\t\t\tIngrese la contraseña del Jugador: ";
				cin>>contrasena;
                file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apodo <<std::left<<std::setw(15)<< contrasena << "\n";
				found++;
			}
			file >> id >> nombre >> apodo >> contrasena;

		}
		file1.close();
		file.close();
		remove("Jugador.txt");
		rename("Record.txt","Jugador.txt");
	}
}

 void Catalogo::menuConsulta()       //Creacion de la clase Jugador, buscarJugadores
{
	system("cls");
	fstream file;
	int found=0;
	file.open("Jugador.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Jugador buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string jugador_id;
		cout<<"\n-------------------------Datos del Jugador buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Jugador que quiere buscar: ";
		cin>>jugador_id;
		file >> id >> nombre >> apodo >> contrasena;
		while(!file.eof())
		{
			if(jugador_id==id)
			{
				cout<<"\n\n\t\t\t ID Jugador: "<<id<<endl;
				cout<<"\t\t\t Nombre Jugador: "<<nombre<<endl;
				cout<<"\t\t\t Apodo Jugador: "<<apodo<<endl;
				cout<<"\t\t\t Contraseña Jugador: "<<contrasena<<endl;
				found++;
			}
			file >> id >> nombre >> apodo >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Jugador no encontrado...";
		}
		file.close();
	}
}

 void Catalogo::menuBajas()       //Creacion constructor de la clase Jugador, borrarJugador
{
	system("cls");
	fstream file,file1;
	string jugador_id;
	int found=0;
	cout<<"\n-------------------------Detalles del Jugador a Borrar-------------------------"<<endl;
	file.open("Jugador.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Jugador que quiere borrar: ";
		cin>>jugador_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> apodo >> contrasena;
		while(!file.eof())
		{
			if(jugador_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apodo <<std::left<<std::setw(15)<< contrasena << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado del Jugador exitoso";
			}
			file >> id >> nombre >> apodo >> contrasena;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Jugador no encontrado...";
		}
		file1.close();
		file.close();
		remove("Jugador.txt");
		rename("Record.txt","Jugador.txt");
	}
}

