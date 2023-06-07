#include "EmpleadosPlanilla.h"

Bitacora enviarDatosE;
Menus regresarMenuE;
string EmpleadosPlanilla::menuEmpleadosPlanilla(string nombreUsuario)
{
    string userName = nombreUsuario;
    system("cls");
    EmpleadosPlanilla menu;
    int choice;
    bool repetir = true;
    char x;
	do
    {
	system("cls");

	cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t|                  !Hola " << userName << "!                  |" <<endl;
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\n\t\t\t-----------------------------------\n";
	cout<<"\t\t\t |   Bienvenido al Menu de Empleados  |"<<endl;
	cout<<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar Datos de Jugador "<<endl;
	cout<<"\t\t\t 2. Buscar Jugador"<<endl;
	cout<<"\t\t\t 3. Modificar Datos de Jugador"<<endl;
	cout<<"\t\t\t 4. Eliminar Jugador"<<endl;
	cout<<"\t\t\t 5. Imprimir Datos de Jugador"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        system("cls");
        do
    	{
    		menu.insertarEmpleado(userName);
    		cout<<"\n\t\t\t Agregar Otro Jugador (Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');

		break;
	case 2:
	    system("cls");
		menu.buscarEmpleado(userName);

		break;
	case 3:
	    system("cls");
		menu.modificarEmpleado(userName);

		break;
	case 4:
	    system("cls");
		menu.borrarEmpleado(userName);

		break;
    case 5:
		system("cls");
		menu.imprimirEmpleados(userName);

		break;
	case 6:
	    system("cls");
		regresarMenuE.menuCatalogos(userName);
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(repetir);
}

void EmpleadosPlanilla::insertarEmpleado(string nombreUsuario)
{
    string userName = nombreUsuario;
    enviarDatosE.ingresoDatosBitacora(userName,"7100","ING");
	fstream file;
	cout<<"\n-------------------------------------------------Ingreso de Jugadores -------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Jugador          : ";
	cin>>idEmpleado;
	cout<<"\t\t\tIngresa Nombre del Jugador       : ";
	cin>>nombreEmpleado;
	cout<<"\t\t\tIngresa Apellido del Jugador     : ";
	cin>>apellidoEmpleado;
	cout<<"\t\t\tIngresa la posicion del Jugador          : ";
	cin>>posicionJugador;

	file.open("JugadorPlanilla.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idEmpleado <<std::left<<std::setw(15)<< nombreEmpleado <<std::left<<std::setw(15)<< apellidoEmpleado <<std::left<<std::setw(15)<< posicionJugador << "\n";
	file.close();

}

void EmpleadosPlanilla::buscarEmpleado(string nombreUsuario)
{
    string userName = nombreUsuario;
    enviarDatosE.ingresoDatosBitacora(userName,"7110","BUS");
    fstream file;
	int found=0;
	file.open("JugadorPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Jugador Buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del Jugador Buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Jugador que quiere buscar: ";
		cin>>participant_id;
		file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> posicionJugador;
		while(!file.eof())
		{
			if(participant_id==idEmpleado)
			{
				cout<<"\n\n\t\t\t Id Jugador      : "<<idEmpleado<<endl;
                cout<<"\n\n\t\t\t Nombre Jugador    : "<<nombreEmpleado<<endl;
                cout<<"\t\t\t Apellido Jugador     : "<<apellidoEmpleado<<endl;
                cout<<"\t\t\t Posicion Jugador           : "<<posicionJugador<<endl;

				found++;
			}
			file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> posicionJugador;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Jugador no encontrada...";
		}
		file.close();
	}

}

void EmpleadosPlanilla::modificarEmpleado(string nombreUsuario)
{
string userName = nombreUsuario;
enviarDatosE.ingresoDatosBitacora(userName,"7120","MOD");
    fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion Jugador-------------------------"<<endl;
	file.open("JugadorPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Jugador que quiere modificar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> posicionJugador;
		while(!file.eof())
		{
			if(participant_id!=idEmpleado)
			{
			 file1 <<std::left<<std::setw(15)<< idEmpleado <<std::left<<std::setw(15)<< nombreEmpleado <<std::left<<std::setw(15)<< apellidoEmpleado <<std::left<<std::setw(15)<< posicionJugador << "\n";
			}
			else
			{
				cout<<"\t\t\tIngresa Id del Jugador          : ";
                cin>>idEmpleado;
                cout<<"\t\t\tIngresa Nombre del Jugador       : ";
                cin>>nombreEmpleado;
                cout<<"\t\t\tIngresa Apellido del Jugador     : ";
                cin>>apellidoEmpleado;
                cout<<"\t\t\tIngresa Posicion del Jugador           : ";
                cin>>posicionJugador;

				file1 <<std::left<<std::setw(15)<< idEmpleado <<std::left<<std::setw(15)<< nombreEmpleado <<std::left<<std::setw(15)<< apellidoEmpleado <<std::left<<std::setw(15)<< posicionJugador << "\n";
				found++;
			}
			file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> posicionJugador;

		}
		file1.close();
		file.close();
		remove("JugadorPlanilla.txt");
		rename("Record.txt","JugadorPlanilla.txt");
	}

}

void EmpleadosPlanilla::borrarEmpleado(string nombreUsuario)
{
string userName = nombreUsuario;
enviarDatosE.ingresoDatosBitacora(userName,"7130","DEL");
    fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Baja (Borrado) del Jugador-------------------------"<<endl;
	file.open("JugadorPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del jugador que quiere borrar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> posicionJugador;
		while(!file.eof())
		{
			if(participant_id!= idEmpleado)
			{
				file1 <<std::left<<std::setw(15)<< idEmpleado <<std::left<<std::setw(15)<< nombreEmpleado <<std::left<<std::setw(15)<< apellidoEmpleado <<std::left<<std::setw(15)<< posicionJugador << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> posicionJugador;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id Jugador no encontrado...";
		}
		file1.close();
		file.close();
		remove("JugadorPlanilla.txt");
		rename("Record.txt","JugadorPlanilla.txt");
	}

}

void EmpleadosPlanilla::imprimirEmpleados(string nombreUsuario)
{
string userName = nombreUsuario;
enviarDatosE.ingresoDatosBitacora(userName,"7140","IMP");

   fstream file;
	int total=0;
	cout<<"\n-------------------------Imprimir Informe de Jugadores -------------------------"<<endl;
	file.open("JugadorPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> posicionJugador ;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Jugador          : "<<idEmpleado<<endl;
			cout<<"\t\t\t Nombre Jugador     : "<<nombreEmpleado<<endl;
			cout<<"\t\t\t Apellido Jugador    : "<<apellidoEmpleado<<endl;
			cout<<"\t\t\t Posicion Jugador        : "<<posicionJugador<<endl;

        file >> idEmpleado >> nombreEmpleado >> apellidoEmpleado >> posicionJugador ;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();

}


