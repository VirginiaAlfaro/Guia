#include<iostream>
using namespace std;
int main(){
	int opcion;
	cout<<"Seleccione la conversion que desea realizar: \n";
	cout<<"1. Galones a Litros.\n";
	cout<<"2. Litros a Galones.\n";
	cin>> opcion;
	
	switch (opcion){
		case 1: 
		float Galones, producto1;
		cout<<"Haz seleccionado Galones a Litros, ingrese los Galones: \n";
		cin>> Galones;
		producto1= Galones * 3.785;
		cout<<"El resultado en Litros es: "<<producto1 <<"L.\n";
		break;
		
		case 2:
		float Litros, producto2;
		cout<<"Haz seleccionado  Litros a Galones, ingrese los Litros: \n";
		cin>> Litros;
		producto2= Litros / 3.785;
		cout<<"El resultado en Galones es: "<<producto2 <<"gal.\n";
		break;
		return 0;
	}
}
