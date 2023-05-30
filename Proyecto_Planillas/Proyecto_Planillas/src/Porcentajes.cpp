#include "Porcentajes.h"
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Puestos.h"


using namespace std;
void Porcentajes::menuporcentajes()
{
    double porcentajeIgss = 0.0483;
    double porcentajeIsr = 0.05;
    double porcentajeSeguro = 0.02;
    double bonificacion = 250;
    double salarioDiario;
    double valorHoraNormal;
    double valorHoraExtra;

    fstream file;
    int total=0;
    cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------- Calculos ---------------------------------------------"<<endl;
    file.open("Puestos.txt",ios::in);
    file >> idPuesto >> nombrePuesto >> encargadoPuesto >> tituloPuesto >> salarioPuesto;
		{
			total++;
			cout<<"\n\n\t\t\t Id Puesto           : "<<idPuesto<<endl;
			cout<<"\t\t\t Nombre Puesto           : "<<nombrePuesto<<endl;
			cout<<"\t\t\t Encargado del Puesto    : "<<encargadoPuesto<<endl;
			cout<<"\t\t\t Profesion del Encargado : "<<tituloPuesto<<endl;
			cout<<"\t\t\t Salario del Puesto       : "<<salarioPuesto<<endl;
        file >> idPuesto >> nombrePuesto >> encargadoPuesto >> tituloPuesto >> salarioPuesto;
		}

	file.close();


	salarioDiario = salarioPuesto / 30;
	valorHoraNormal = salarioDiario / 8;
	valorHoraExtra = valorHoraNormal * 1.5;

	cout<<"\n\t\t\tPorcentaje igss: " << porcentajeIgss <<endl;
    cout <<"\n\t\t\tPorcentaje isr: "<< porcentajeIsr << endl;
    cout <<"\n\t\t\tPorcentaje seguro: "<< porcentajeSeguro << endl;
    cout <<"\n\t\t\tSalario diario es : "<< salarioDiario<< endl;
    cout <<"\n\t\t\tValor hora normal es : "<< valorHoraNormal<< endl;
    cout <<"\n\t\t\tValor hora extra es: "<< valorHoraExtra<< endl;
    cout <<"\n\t\t\tBonificacion: "<< bonificacion<< endl;

	file.open("Porcentajes.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< idPuesto <<std::left<<std::setw(15)<< nombrePuesto <<std::left<<std::setw(15)<< encargadoPuesto <<std::left<<std::setw(15)<< tituloPuesto <<std::left<<std::setw(15)<< salarioPuesto <<std::left<<std::setw(15)<< porcentajeIgss <<std::left<<std::setw(15)<< porcentajeIsr <<std::left<<std::setw(15)<< porcentajeSeguro <<std::left<<std::setw(15)<< salarioDiario <<std::left<<std::setw(15)<< valorHoraNormal << std::left<<std::setw(15)<< valorHoraExtra <<std::setw(15)<< bonificacion <<"\n";
	file.close();

	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";

}

