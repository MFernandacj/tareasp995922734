#include <iostream>

using namespace std;

int seleccion;
float num1, num2;


int main(){
cout<<"Ingrese el primer numero: "<<endl;
cin>>num1;
cout<<"ingrese el segundo numero: "<<endl;
cin>>num2;

cout<<"Que operacion deseas realizar"<<endl;
cout<<"1. Suma"<<endl;
cout<<"2. resta"<<endl;
cout<<"3. multiplicacion"<<endl;
cout<<"4. division"<<endl;
cin>>seleccion;

switch(seleccion){
case 1: cout<< "la suma total es: "<< num1+num2 <<endl;
break;
case 2: cout<< "la resta total es: "<< num1-num2 <<endl;
break;
case 3: cout<< "la multiplicacion total es: "<< num1*num2 <<endl;
break;
case 4: cout<< "la division total es: "<< num1/num2 <<endl;
break;
}

return 0;
}
