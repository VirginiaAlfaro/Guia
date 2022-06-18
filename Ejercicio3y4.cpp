/*1.-Escriba un programa que lea 10 numeros y que despliegue la suma de todos los numeros mayores a cero,
la suma de todos los numeros menores que cero, la suma de todos los numeros ya sean positivos, negativos,
o cero. El usuario debe introducir 10 numeros uno a uno y los puede ingresar en cualquier oreden. No se deben
ingresar numeros positivos y negativos de forma separada.*/

/*2.-Despligue la suma de todos los positivos y el promedio.
    La suma de todos los negativos y el promedio.
    La suma de los positivos y negativos y su promedio.*/

#include <iostream>
using namespace std;
int main()
{
    int num, suma_positivos, suma_negativos, suma_ceros, suma_todos;
    int prom1, prom2, prom3;
    for(int i=0; i<10; i++)
    {
        cout<<"Ingrese los Numeros:";
        cin>>num;
        suma_todos+=num;
        prom3= suma_todos/10;
        if(num>0)
        {
            suma_positivos+=num;
             prom1= suma_positivos/10;
        }
        else if(num<0)
        {
            suma_negativos+=num;
            prom2= suma_negativos/10;
        }
        else
        {
            suma_ceros+=num;
        }
    }
    cout<<"La suma de todos los numeros es: "<<suma_todos<<endl;
    cout<<"La suma de todos los numeros positivos es: "<<suma_positivos<<endl;
    cout<<"La suma de todos los numeros negativos es: "<<suma_negativos<<endl;
    
	cout<<"El promedio de los numeros positivos es: "<<prom1<<endl;
	cout<<"El promedio de los numeros negativos es: "<<prom2<<endl;
	cout<<"El promedio de todos los numeros es: "<<prom3<<endl;
    return 0;
    
}


