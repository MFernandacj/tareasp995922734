#ifndef RAMACRUD_CATALOGOX_995922734_H
#define RAMACRUD_CATALOGOX_995922734_H
#include <iostream>
#include <cstdlib>


using namespace std;
class Catalogo
{
    public:
    void menuCatalogos ();
    void menuAltas();
    void menuBajas();
    void menuModificar();
    void menuConsulta();

protected:

    private:    //Atributos privados y protegidos
        string id;
        string nombre;
        string apodo;
        string contrasena;

};


#endif // RAMACRUD_CATALOGOX_995922734_H
