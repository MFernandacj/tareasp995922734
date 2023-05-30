#include "Descuentos.h"
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Puestos.h"
#include "Porcentajes.h"

using namespace std;

void Descuentos::menuDescuentos()
{

    fstream file;
	int total=0;

	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Calculo Descuentos ---------------------------------------------"<<endl;
    file.open("Puestos.txt",ios::in);
    if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> idPuesto >> nombrePuesto >> encargadoPuesto >> tituloPuesto >> salarioPuesto;
		{
			total++;
			cout<<"\n\n\t\t\t Id Puesto           : "<<idPuesto<<endl;
			cout<<"\t\t\t Nombre Puesto           : "<<nombrePuesto<<endl;
			cout<<"\t\t\t Encargado del Puesto    : "<<encargadoPuesto<<endl;
			cout<<"\t\t\t Profesion del Encargado : "<<tituloPuesto<<endl;
			cout<<"\t\t\t Saario del Puesto       : "<<salarioPuesto<<endl;
        file >> idPuesto >> nombrePuesto >> encargadoPuesto >> tituloPuesto >> salarioPuesto;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}

	file.close();


	file.open("Porcentajes.txt",ios::in);
    file >> porcentajeIgss >> porcentajeIsr >> porcentajeSeguro >> salarioDiario >> valorHoraNormal >> valorHoraExtra >> bonificacion;
		{
			double valorporcentajeIgss = porcentajeIgss;
			total++;
    file >> porcentajeIgss >> porcentajeIsr >> porcentajeSeguro >> salarioDiario >> valorHoraNormal >> valorHoraExtra >> bonificacion;
		}

	file.close();

	totalIgss = salarioPuesto * valorporcentajeIgss;
	cout<<"\n\t\t\tEl IGSS es : " << totalIgss << endl;

	totalIsr = salarioPuesto * porcentajeIsr;
	cout<<"\n\t\t\tEl ISR es : " << totalIsr << endl;

	totalSeguro = salarioPuesto * porcentajeSeguro;
	cout<<"\n\t\t\tEl Seguro es : " << totalSeguro << endl;

	totalDescuentos = salarioPuesto-(totalIgss + totalIsr + totalSeguro);
	cout<<"\n\t\t\tEl total de sueldo menos descuentos es : " << totalDescuentos << endl;
	}


	file.open("Sueldo.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idPuesto <<std::left<<std::setw(15)<< nombrePuesto <<std::left<<std::setw(15)<< encargadoPuesto <<std::left<<std::setw(15)<< salarioPuesto <<std::setw(15)<< tituloPuesto <<std::left<<std::setw(15)<< totalIgss <<std::left<<std::setw(15)<< totalIsr << std::left<<std::setw(15)<< totalSeguro <<std::setw(15)<< totalDescuentos << "\n";
	file.close();
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
}

void Descuentos::menuHorasExtra()
{
    system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Calculo Horas Extra ---------------------------------------------"<<endl;
	cout<<"\n\t\t\tIngresa Horas Trabajadas: ";
	cin>> horasTrabajadas;


	totalHoras = horasTrabajadas * valorHoraExtra;
	cout<<"\n\t\t\tHoras trabajadas: " << horasTrabajadas <<endl;
    cout <<"\n\t\t\tTotal: "<< totalHoras<< endl;

	file.open("Sueldo.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idPuesto <<std::left<<std::setw(15)<< nombrePuesto <<std::left<<std::setw(15)<< encargadoPuesto <<std::left<<std::setw(15)<< tituloPuesto << std::left<<std::setw(15)<< salarioPuesto<<std::left<<std::setw(15)<< horasTrabajadas<<std::left<<std::setw(15)<< totalHoras<< "\n";
	file.close();
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
}

void Descuentos::menuTotalPago()
{
    system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Calculo Sueldo Total ---------------------------------------------"<<endl;

    totalSueldo = totalDescuentos + totalHoras + bonificacion;


	cout <<"\n\t\t\t Total a pagarle es: " << totalSueldo <<endl;


	file.open("Sueldo.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idPuesto <<std::left<<std::setw(15)<< nombrePuesto <<std::left<<std::setw(15)<< encargadoPuesto <<std::left<<std::setw(15)<< tituloPuesto <<std::left<<std::setw(15)<< totalSueldo << "\n";
	file.close();
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
}
