#include <iostream>

using namespace std;

int main() {
    int x,y;
    char operacion;

    cout << "Digite un numero: ";
    cin >> x;
    cout << "Digite otro numero: ";
    cin >> y;
    cout << "Digite un caracter (+, -, *, /, %): ";
    cin >> operacion;

    if (operacion == '+')
        cout << x << " + " << y << " = " << x+y;
    else if (operacion == '-')
        cout << x << " - " << y << " = " << x-y;
    else if (operacion == '*')
        cout << x << " * " << y << " = " << x*y;
    else if (operacion == '/')
        cout << x << " / " << y << " = " << x/y;
    else if (operacion == '%')
        cout << x << " % " << y << " = " << x%y;
    else
        cout << "Operador desconocido" << endl;

  return 0;
}
