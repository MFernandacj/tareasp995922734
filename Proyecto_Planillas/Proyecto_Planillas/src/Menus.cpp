#include "Menus.h"

void Menus::menuInicial()
{
    system("cls");
    int optEscoger;
  bool repetir = true;
    do
    {
    cout << "\t\t\t-------------------------------------------------\n";
    cout << "\t\t\t| Bienvenido al Sistema de Nominas de Empleados |";
    cout << "\n\t\t\t-----------------------------------------------"<<endl;

    cout << "\t\t\t1. Menu Catalogos"<<endl;
    cout << "\t\t\t2. Menu Procesos"<<endl;
    cout << "\t\t\t3. Menu Informes"<<endl;
    cout << "\t\t\t4. Salir del Sistema" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] - [4]";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
       system("cls");
       Menus submenu;
       submenu.menuCatalogos();
        break;
    }

    case 2:{
        system("cls");
        Menus submenu;
        submenu. menuProcesos();
    break;
    }
    case 3:{
        system("cls");
        break;
        }
    case 4:{
             repetir == false;
        break;
    }
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(repetir);
}

void Menus::menuCatalogos()
{
    system("cls");
    int optEscoger;
  bool repetir = true;
    do
    {
    cout << "\t\t\t-----------------------------------\n";
    cout << "\t\t\t| Bienvenido al Menu de Catalogos |";
    cout << "\n\t\t\t---------------------------------"<<endl;

    cout << "\t\t\t1. Empleados"<<endl;
    cout << "\t\t\t2. Puestos"<<endl;
    cout << "\t\t\t3. Departamentos"<<endl;
    cout << "\t\t\t4. Salir del Sistema" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] - [4]";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {
    case 1:{
       system("cls");
       EmpleadosPlanilla menu;
       menu.menuEmpleadosPlanilla();
                break;
    }

    case 2:{
        system("cls");
        Puestos menu;
        menu.menuPuestos();
    break;
    }
    case 3:{
        system("cls");
        Departamento menu;
        menu.DepartamentosPlanilla();
        break;
        }
    case 4:{
        system("cls");
        exit (0);
        break;
    }
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(repetir);
}
void Menus::menuProcesos()
{
    system("cls");
    int optEscoger;
  bool repetir = true;
    do
    {
    cout << "\t\t\t-----------------------------------\n";
    cout << "\t\t\t| Bienvenido al Menu de Procesos |";
    cout << "\n\t\t\t---------------------------------"<<endl;
    cout << "\t\t\t1. Descuentos"<<endl;
    cout << "\t\t\t2. Horas Extras"<<endl;
    cout << "\t\t\t3. Total a Pagar"<<endl;
     cout << "\t\t\t4. Porcentajes"<<endl;
    cout << "\t\t\t5. Salir del Sistema" << endl;
    cout << "\n\n\t\t\t---------------------------------------";
    cout << "\n\t\t\t| Opciones a escoger: [1] - [2] - [3] - [4]";
    cout << "\n\t\t\t---------------------------------------";

    cout << "\n\n\t\t\tIngrese la opcion que desea escoger: ";
    cin >> optEscoger;

    switch(optEscoger)
    {

    case 1:{
       system("cls");
       Descuentos menu;
       menu.menuDescuentos();
                break;
    }

    case 2:{
        system("cls");
        Descuentos menu;
        menu.menuHorasExtra();

    break;
    }
    case 3:{
        system("cls");
        Descuentos menu;
        menu.menuTotalPago();
        break;
        }
    case 4:{
        system("cls");
        Porcentajes menu;
        menu.menuporcentajes();
        break;
        }
    case 5:{
        system("cls");
        exit (0);
        break;
    }
    default:
        cout << "Opcion invalida... Intente otra vez...";

    }
    }while(repetir);
}

