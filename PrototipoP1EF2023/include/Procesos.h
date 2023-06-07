#ifndef PROCESOS_H
#define PROCESOS_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "Menus.h"


using namespace std;
class Procesos
{
    public:
        string estadisticasEquipo(string nombreUsuario);


    protected:

    private:
        string goles, faltas, tarjetaAmarilla, tarjetaRoja;
        string idDepartamento, nombreDepartamento, nombreEncargado, telefonoDepartamento;
};

#endif // PROCESOS_H
