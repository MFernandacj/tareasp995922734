#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// Prototipos de las funciones
void menuSistemaNomina();
void menuDepartamentos();
void menuDatos ();
void menuIngresoDatos ();
void menuNominas();
void menuManual ();
void menuHistorial ();

// Funciones del submenú Departamentos
void depArea();
void depProduccion();
void depFinanciero();
void depLogistica();
void depRecursos ();

// Funciones del submenú Datos
void ingresoDatos();
void impresionNomina();
void busquedadDatos();
void modificacionDatos();
void borrarDatos ();

// Funciones del submenú Ingreso de Datos
void datosUsuario();
void datosSalario();
void datosDescuentos();

int main()
{
    menuSistemaNomina();
    return 0;
}

void menuSistemaNomina()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tSISTEMA DE NOMINA" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t1. Departamentos" << endl;
        cout << "\t2. Nominas" << endl;
        cout << "\t3. Manual" << endl;
        cout << "\t4. Historial" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            menuDepartamentos();
            break;

        case 2:
            menuNominas();
            break;

        case 3:
            menuManual();
            break;

        case 4:
            menuHistorial();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

// Definiciones de las funciones

void menuDepartamentos()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tDEPARTAMENTOS" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Area de Ventas" << endl;
        cout << "\t2. Produccion" << endl;
        cout << "\t3. Financiero" << endl;
        cout << "\t4. Logistica" << endl;
        cout << "\t5. Recursos Humanos" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            depArea();
            break;

        case 2:
            depProduccion();
            break;

        case 3:
            depFinanciero();
            break;

        case 4:
            depLogistica();
            break;

        case 5:
            depRecursos();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void menuDatos()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tDATOS" << endl;
        cout << "\t\t\t-------------------------" << endl;
        cout << "\n\t1. Ingreso de datos" << endl;
        cout << "\t2. Impresion de Nomina" << endl;
        cout << "\t3. Busquedad de Datos" << endl;
        cout << "\t4. Modificacion de Datos" << endl;
        cout << "\t5. Borrar Datos" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ingresoDatos();
            break;

        case 2:
            impresionNomina();
            break;

        case 3:
            busquedadDatos();
            break;

        case 4:
            modificacionDatos();
            break;

        case 5:
            borrarDatos();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void menuIngresoDatos ()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tINGRESO DE DATOS" << endl;
        cout << "\t\t\t-------------------------" << endl;
        cout << "\n\t1. Datos de Usuario" << endl;
        cout << "\t2. Datos de Salario" << endl;
        cout << "\t3. Descuentos Varios" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            datosUsuario();
            break;

        case 2:
            datosSalario();
            break;

        case 3:
            datosDescuentos();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
    return 0;
}



