#include "Departamento.h"

Menus regresarMenu;
Bitacora enviarDatosD;
string Departamento::DepartamentosPlanilla(string nombreUsuario)
{
    string userName = nombreUsuario;
     system("cls");
     Departamento menu2;
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
	cout<<"\t\t\t |   Bienvenido al Menu de Equipos  |"<<endl;
	cout<<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar nuevo Equipo"<<endl;
	cout<<"\t\t\t 2. Buscar Equipo"<<endl;
	cout<<"\t\t\t 3. Modificar Equipo"<<endl;
	cout<<"\t\t\t 4. Eliminar Equipo"<<endl;
	cout<<"\t\t\t 5. Imprimir Datos de los Equipo"<<endl;
	cout<<"\t\t\t 6. Regresar"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

        switch(choice)
        {
            case 1:
                menu2.NuevosDepartamentos(userName);
                cout<<"Guardado Con Exito"<<endl;
            system("cls");

            break;

            case 2:
                menu2.BuscarDepartamentos(userName);
            system("cls");

            break;

            case 3:
                menu2.ModificarDepartamentos(userName);
            system("cls");

            break;

            case 4:
                menu2.eliminarDepartamento(userName);
            system("cls");

            break;

            case 5:
                menu2.imprimirDepartamento(userName);
            system("cls");

            break;

            case 6:
	    system("cls");
		regresarMenu.menuCatalogos(userName);
		break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";

        }
        getch();
    }while(choice!=6);
}

void Departamento::NuevosDepartamentos(string nombreUsuario){
    string userName = nombreUsuario;
    enviarDatosD.ingresoDatosBitacora(userName,"7300","ING");
    fstream file;
    cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Ingreso de Equipos -------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Equipo      : ";
	cin>>idDepartamento;
	cout<<"\t\t\tIngresa Nombre del Equipo   : ";
	cin>>nombreDepartamento;
	cout<<"\t\t\tIngresa Marcador del Equipo     : ";
	cin>>nombreEncargado;
	cout<<"\t\t\tIngresa Pais del Equipo : ";
	cin>>telefonoDepartamento;
	file.open("EquiposPlanilla.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idDepartamento <<std::left<<std::setw(15)<< nombreDepartamento <<std::left<<std::setw(15)<< nombreEncargado <<std::left<<std::setw(15)<< telefonoDepartamento <<std::left<<std::setw(15)<< "\n";
	file.close();
	getch();
}

void Departamento::BuscarDepartamentos(string nombreUsuario){
    string userName = nombreUsuario;
     enviarDatosD.ingresoDatosBitacora(userName,"7310","SRC");
    fstream file;
	int found=0;
	file.open("EquiposPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Equipo Buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string departam_id;
		cout<<"\n-------------------------Datos del Equipo Buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Equipo que quiere buscar: ";
		cin>>departam_id;
		file >> idDepartamento >> nombreDepartamento >> nombreEncargado >> telefonoDepartamento;
		while(!file.eof())
		{
			if(departam_id==idDepartamento)
			{
				cout<<"Id del Equipo           :"<<idDepartamento<<endl;
                cout<<" Nombre del Equipo      :"<<nombreDepartamento<<endl;
                cout<<" Marcador del Equipo         :"<<nombreEncargado<<endl;
                cout<<" Pais del Equipo     :"<<telefonoDepartamento<<endl;
				found++;
			}
			file >> idDepartamento >> nombreDepartamento >> nombreEncargado >> telefonoDepartamento;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Equipo No Encontrado...";
		}
		file.close();
        getch();
	}
}

void Departamento::ModificarDepartamentos(string nombreUsuario){
    string userName = nombreUsuario;
enviarDatosD.ingresoDatosBitacora(userName,"7320","MOD");
    fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion Equipo-------------------------"<<endl;
	file.open("EquiposPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del Equipo que quiere modificar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> idDepartamento >> nombreDepartamento >> nombreEncargado >> telefonoDepartamento;
		while(!file.eof())
		{
			if(participant_id!=idDepartamento)
			{
			 file1 <<std::left<<std::setw(15)<< idDepartamento <<std::left<<std::setw(15)<< nombreDepartamento <<std::left<<std::setw(15)<< nombreEncargado <<std::left<<std::setw(15)<< telefonoDepartamento <<std::left<<std::setw(15)<< "\n";
			}
			else
			{
				cout<<"\t\t\tIngresa Id del Equipo        : ";
                cin>>idDepartamento;
                cout<<"\t\t\tIngresa Nombre del Equipo   : ";
                cin>>nombreDepartamento;
                cout<<"\t\t\tIngresa Marcador del Equipo       : ";
                cin>>nombreEncargado;
                cout<<"\t\t\tIngresa Pais del Equipo  : ";
                cin>>telefonoDepartamento;
				file1 <<std::left<<std::setw(15)<< idDepartamento <<std::left<<std::setw(15)<< nombreDepartamento <<std::left<<std::setw(15)<< nombreEncargado <<std::left<<std::setw(15)<< telefonoDepartamento <<std::left<<std::setw(15)<< "\n";
				found++;
			}
			file >> idDepartamento >> nombreDepartamento >> nombreEncargado >> telefonoDepartamento;

		}
		file1.close();
		file.close();
		remove("EquiposPlanilla.txt");
		rename("Record.txt","EquiposPlanilla.txt");
		getch();
	}
}

void Departamento::eliminarDepartamento(string nombreUsuario){
    string userName = nombreUsuario;
enviarDatosD.ingresoDatosBitacora(userName,"7330","DEL");
 fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Borrar Datos de Equipo-------------------------"<<endl;
	file.open("EquiposPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Equipo que quiere borrar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> idDepartamento >> nombreDepartamento >> nombreEncargado >> telefonoDepartamento;
		while(!file.eof())
		{
			if(participant_id!= idDepartamento)
			{
				file1 <<std::left<<std::setw(15)<< idDepartamento <<std::left<<std::setw(15)<< nombreDepartamento <<std::left<<std::setw(15)<< nombreEncargado <<std::left<<std::setw(15)<< telefonoDepartamento <<std::left<<std::setw(15)<< "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> idDepartamento >> nombreDepartamento >> nombreEncargado >> telefonoDepartamento;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Equipo no encontrado...";

		}
		file1.close();
		file.close();
		remove("EquiposPlanilla.txt");
		rename("Record.txt","EquiposPlanilla.txt");
		getch();
	}
}

void Departamento::imprimirDepartamento(string nombreUsuario){
    string userName = nombreUsuario;
    enviarDatosD.ingresoDatosBitacora(userName,"7340","IMP");
    system("cls");
    fstream file;
	int total=0;
	cout<<"\n-------------------------Imprimir Informe de Equipos -------------------------"<<endl;
	file.open("EquiposPlanilla.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idDepartamento >> nombreDepartamento >> nombreEncargado >> telefonoDepartamento;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Equipo                 : "<<idDepartamento<<endl;
			cout<<"\t\t\t Nombre del Equipo          : "<<nombreDepartamento<<endl;
			cout<<"\t\t\t Marcador del Equipo             : "<<nombreEncargado<<endl;
			cout<<"\t\t\t Pais del Equipo        : "<<telefonoDepartamento<<endl;
        file >> idDepartamento >> nombreDepartamento >> nombreEncargado >> telefonoDepartamento;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
	getch();
}

