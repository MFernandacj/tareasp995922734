#ifndef BITACORA_H
#define BITACORA_H
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include <chrono>
using namespace std;

class Bitacora
{
    public:
        string ingresoDatosBitacora(string nombreUsuario, string numeAccion, string accionRealizada);
        void imprimirDatosBitacora();


    protected:

    private:
        string nombreUsuario, numeAccion, accionRealizada , fechaHoraAccion;
};

#endif // BITACORA_H
