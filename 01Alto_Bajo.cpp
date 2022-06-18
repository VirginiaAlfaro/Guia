//Escriba un programa que contenga IF-ELSE y que reciba un numero entero, para que
//despliegue la palabra ALTO si el valor de la variable es mayor a 100 y BAJO si el valor
//es menor a 100.

#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Ingrese un numero: ";
    cin>>num1;
    if(num1>100)
    {
        cout<<"ALTO";
    }
    else
    {
        cout<<"BAJO";
    }
    return 0;
}
