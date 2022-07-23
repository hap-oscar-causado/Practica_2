/*Problema 12
Escribe un programa que permita al usuario ingresar una matriz cuadrada,
imprime la matriz y verifica si la matriz es un cuadrado mágico.
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
    int size_ma, suma_f, suma_c, suma_d = 0;
    cout<<"Ingresa el tamaño del cuadrado: ";
    cin>>size_ma;

    int arr_suma_f[size_ma], arr_suma_c[size_ma], arr_suma_d[2], arr_suma[(size_ma*2)+2];
    int matriz[size_ma][size_ma];

    cout<<endl;
    for (int i = 0; i<size_ma;i++){
        for (int v=0;v<size_ma;v++){
            cout<<"Ingresa el valor de la casilla "<<i+1<<","<<v+1<<": ";
            cin>>matriz[i][v];
        }
    }
    cout<<endl;

    for (int i= 0; i < size_ma; i++){
        suma_f = 0;
        suma_c = 0;
        for (int v = 0; v < size_ma; v++){
            suma_c = suma_c + matriz[v][i];
            suma_f = suma_f + matriz[i][v];
        }

        arr_suma_f[i] = suma_f;
        arr_suma_c[i] = suma_c;
        suma_d = suma_d + matriz[i][i];
        cout<<"  | ";
        for (int c = 0; c < size_ma; c++){
            cout <<matriz[i][c]<<" | ";
        }
        cout<<"  "<<arr_suma_f[i]<<endl;

    }
    arr_suma_d[0] = suma_d;
    suma_d = 0;
    cout<<endl;
    for (int i = 0; i < size_ma; i++){
        suma_d = suma_d + matriz[i][size_ma-(i+1)];
    }
    arr_suma_d[1] = suma_d;

    cout<<arr_suma_d[0]<<"  ";
    for (int i = 0; i < size_ma;i++){
        cout<<arr_suma_c[i]<<"  ";
    }
    cout<<arr_suma_d[0]<<"  ";
    cout<<endl;

    for (int i = 0; i < size_ma;i++){
        arr_suma[i] = arr_suma_f[i];
    }
    int acc=0;
    for (int i = size_ma; i < size_ma*2;i++){
        arr_suma[i] = arr_suma_c[acc];
        acc++;
    }
    arr_suma[(size_ma*2)] = arr_suma_d[0];
    arr_suma[(size_ma*2)+1] = arr_suma_d[1];

    magic_ft(arr_suma,size_ma);

    return 0;
}
