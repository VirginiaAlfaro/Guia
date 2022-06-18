#include <iostream>
using namespace std;
int main()
{
 float peso;
   float tonelada;
   float cajas; 
    

    cout << "Escriba el peso del paquete de cereal en onzas: ";
    cin >> peso;
    
   tonelada=peso*1/35273.92;
   cajas=1*1/tonelada;
  
     cout << "El peso del paquete en toneladas metricas es: " << tonelada<<endl;
	 cout<<"El numero de cajas necesarias es: "<<cajas<<endl;	
	

   
    return 0;
}

