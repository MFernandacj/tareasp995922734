//Figuras
//Fecha: 7/02/2023 Autor: María Fernanda Cobón Juárez
//Grupo 2
#include<iostream>
using namespace std;

int main(){
	int lado;

	cout<<"Digite el tamaño del lado: ";
	cin>>lado;

	for(int i=0;i<lado;i++){
		for(int j=0;j<lado;j++){
		if(i==0||j==0||(i==lado-1)||(j==lado-1)){
			cout<<".";
		}else{
			cout<<" ";
		}
		}
		cout<<endl;
	}
}

