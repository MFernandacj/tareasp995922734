#ifndef DESCUENTOS_H
#define DESCUENTOS_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Menus.h"
#include "Bitacora.h"

using namespace std;

class Descuentos
{
    public:
        void menuDescuentos();
        void menuHorasExtra();
        void menuTotalPago();
        void menuTrabajador();
    protected:

    private:
        string nombrePuesto, encargadoPuesto, tituloPuesto;
        double salarioPuesto,idPuesto, porcentajeIgss, porcentajeIsr, porcentajeSeguro, totalIgss, totalIsr, totalSeguro;
         double totalDescuentos, totalHoras, totalSueldo;
         double horasTrabajadas, valorHoraExtra;
         double bonificacion;
         double salarioDiario, valorHoraNormal;
         double valorporcentajeIgss;




};

#endif // DESCUENTOS_H
