#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// Prototipos de las funciones
void menuSistemaNomina();
void menuDepartamentos();
void menuDatos ();
void menuSecciones ();

// Funciones del submenú Departamentos
void depArea();
void depProduccion();
void depFinanciero();
void depLogistica();
void depRecursos ();

// Funciones del submenú Datos
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
        cout << "\n\t1. Ingreso de Datos" << endl;
        cout << "\t2. Busquedad de Datos" << endl;
        cout << "\t3. Modificacion de Datos" << endl;
        cout << "\t4. Borrar Datos" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            menuDatos();
            break;

        case 2:
            menuSecciones ();
            break;

        case 3:
            menuSecciones ();
            break;

        case 4:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

// Definiciones de las funciones

void menuDatos()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tTIPOS DE DATOS" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Datos de Usuario" << endl;
        cout << "\t2. Datos de Salario" << endl;
        cout << "\t3. Descuentos Varios" << endl;
        cout << "\t4. Validacion" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("pause>nul");
            break;

        case 2:
            menuDepartamentos ();
            break;

        case 3:
            system("pause>nul");
            break;

        case 4:
           system("pause>nul");
            break;

        case 5:
           system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void menuSecciones()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tSECCIONES" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Empleados" << endl;
        cout << "\t2. Departamentos" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("pause>nul");
            break;

        case 2:
            menuDepartamentos ();
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}


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
        cout << "\t3. Finciero" << endl;
        cout << "\t4. Logistica" << endl;
        cout << "\t5. Recursos Humanos" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            depArea ();
            break;

        case 2:
            depProduccion ();
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

void depArea()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t AREA DE VENTAS" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Planilla General" << endl;
        cout << "\t2. Gerente de ventas" << endl;
        cout << "\t3. Asistente de ventas" << endl;
        cout << "\t4. Supervisor de ventas" << endl;
        cout << "\t5. Vendedor" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 3:
             system("pause>nul");
            break;

        case 4:
             system("pause>nul");
            break;

        case 5:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void depProduccion()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t AREA DE PRODUCCION" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Planilla General" << endl;
        cout << "\t2. Gerente de produccion" << endl;
        cout << "\t3. Asistente de produccion" << endl;
        cout << "\t4. Supervisor de produccion" << endl;
        cout << "\t5. Operador" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 3:
             system("pause>nul");
            break;

        case 4:
             system("pause>nul");
            break;

        case 5:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void depFinanciero()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t AREA FINANCIERA" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Planilla General" << endl;
        cout << "\t2. Gerente financiero" << endl;
        cout << "\t3. Asistente financiero" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 3:
             system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}

void depLogistica()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t AREA DE LOGISTICA" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Planilla General" << endl;
        cout << "\t2. Gerente de logistica" << endl;
        cout << "\t3. Asistente de logistica" << endl;
        cout << "\t4. Supervisor de logistica" << endl;
        cout << "\t5. Bodeguero" << endl;
        cout << "\t0. REGRESAR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 3:
             system("pause>nul");
            break;

        case 4:
             system("pause>nul");
            break;

        case 5:
            system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}


 void depRecursos()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t RECURSOS HUMANOS" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\n\t1. Planilla General" << endl;
        cout << "\t2. Gerente de recursos humanos" << endl;
        cout << "\t3. Asistente de recursos humanos" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
             system("pause>nul");
            break;

        case 2:
             system("pause>nul");
            break;

        case 3:
             system("pause>nul");
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}





