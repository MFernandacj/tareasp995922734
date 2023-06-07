#include "Procesos.h"

Menus regresarMenuC;
Bitacora enviarDatosC;
string Procesos::estadisticasEquipo(string nombreUsuario)

{
    int goles=0, faltas = 0, tarjetaAmarilla = 0, tarjetaRoja = 0;
    goles = rand() % 10;
    faltas = rand() % 6;
    tarjetaAmarilla = rand() % 25;
    tarjetaRoja = rand() % 21;

    string userName = nombreUsuario;
    enviarDatosC.ingresoDatosBitacora(userName,"7310","SRC");
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
		cout<<"\n\t\t\tIngrese Id del Equipo que quiere buscar: ";
		cin>>departam_id;
		file >> idDepartamento >> nombreDepartamento >> nombreEncargado >> telefonoDepartamento;
		while(!file.eof())
		{
			if(departam_id==idDepartamento)
			{
				cout<<"\t\t\t Id del Equipo          :"<<idDepartamento<<endl;
                cout<<"\t\t\t Nombre del Equipo      :"<<nombreDepartamento<<endl;
                cout<<"\t\t\t Marcador del Equipo    :"<<nombreEncargado<<endl;
                cout<<"\t\t\t Pais del Equipo        :"<<telefonoDepartamento<<endl;

				found++;
			}
			file >> idDepartamento >> nombreDepartamento >> nombreEncargado >> telefonoDepartamento;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Equipo No Encontrado...";
		}
                cout<<"\n-------------------------------------------------------------"<<endl;
                cout<<"\n-------------------------Estadisticas------------------------"<<endl;
                cout<<"\n-------------------------------------------------------------"<<endl;
                cout<<"\t\t\t Goles del Equipo                  :"<<goles<<endl;
                cout<<"\t\t\t Faltas del Equipo                 :"<<faltas<<endl;
                cout<<"\t\t\t Tarjetas Amarillas del Equipo     :"<<tarjetaAmarilla<<endl;
                cout<<"\t\t\t Tarjetas Rojas del Equipo         :"<<tarjetaRoja<<endl;

		file.open("Procesos.txt", ios::app | ios::out);
	    file <<std::left<<std::setw(15)<< idDepartamento <<std::left<<std::setw(15)<< nombreDepartamento <<std::left<<std::setw(15)<< nombreEncargado <<std::left<<std::setw(15)<< telefonoDepartamento <<std::left<<std::setw(15)<< goles <<std::left<<std::setw(15)<< faltas <<std::left<<std::setw(15)<< tarjetaAmarilla <<std::left<<std::setw(15)<< tarjetaRoja <<std::left<<std::setw(15)<<"\n";
	    file.close();
		file.close();
        getch();
	}
}

