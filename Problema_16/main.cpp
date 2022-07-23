/* Problema 16
En una malla de 2x2, realizando únicamente movimientos hacia la derecha y hacia abajo,
hay 6 posibles caminos para llegar de la esquina superior izquierda a la inferior derecha.
Escribe un programa que reciba un número n y calcula el número de caminos posibles en una cuadrícula de nxn.
  _____     ____
 /      \  | ㋡ |
|        |/ ___\|
|_________/
|_|_| |_|_| Oscar Sanchez */

#include <iostream>
#include "Funtions.h"

using namespace std;

int main()
{
    int n,wa,div;
    cout<<"Ingresa el tamaño de la malla: ";
    cin>>n;

    wa = factorial(n+n);
    div = factorial(n);
    div = div*div;

    cout<<"Para una malla de "<<n<<"x"<<n<<" puntos hay "<<wa/div<<" caminos."<<endl;


    return 0;
}
