/*Problema 11
Escribe un programa que permita manejar las reservas de asientos en una sala de cine,
estos están organizados en 15 filas con 20 (asientos) cada una. El programa debe mostrar una
representación de la sala, que indique qué asientos están disponibles y cuales se encuentran reservados.
Además, debe permitir realizar reservas o cancelaciones al ingresar la fila (letras A-O) y el número del asiento (números 1-20).
  _____     ____
 /      \  | ㋡ |
|        |/ ___\|
|_________/
|_|_| |_|_| Oscar Sanchez */


#include <iostream>
#include <unistd.h>

#include "funtions.h"
using namespace std;

int main()
{

    char asiento[15][20];

    for (int i = 0; i<=15; i++){
        for (int var = 0; var<= 20;var++){
            asiento[i][var] = '-';
        }
    }
    int n;
    char fila;
    int columna;
    while (true) {
        system("cls");
        ImpMainMenu();
        cin >> n;
        cout<<endl;

        cout<<"*  Ocupados (+)\n"<<
              "*  Disponibles (-)"<<endl;
        cout<<endl;

        ImpMatrizSillas(asiento);

        if (n==1){
            ImpSelection(1);
            cin>>fila;
            ImpSelection(2);
            cin>>columna;
            asiento[n_filas(fila)][columna] = '+';

            cout<<endl;
            system("cls");
            ImpMatrizSillas(asiento);
            cout<<"El asiento ha sido elegido exitosamente!"<<endl;
            cout<<"Volviendo al menu inicial... "<<endl;
            sleep(3);
        }
        else if (n == 2){
            ImpSelection(1);
            cin>>fila;
            ImpSelection(2);
            cin>>columna;
            asiento[n_filas(fila)][columna] = '-';

            cout<<endl;
            system("cls");
            ImpMatrizSillas(asiento);
            cout<<"El asiento se ha cancelado!"<<endl;
            cout<<"Volviendo al menu inicial... "<<endl;
            sleep(3);
        }
        else if (n == 3){
            cout<<"Ha salido del programa!"<<endl;
            break;
        }

    }

    return 0;
}
