/* Problema 14
Elabora un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima,
luego imprime la matriz rotada 90, 180 y 270 grados.
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
    int list[5][5];
    int lis = 1;
    cout<<endl;
    cout<<"     MATRIZ NORMAL "<<endl;
    cout<<endl;
    for (int i=0; i < 5; i++ ){
        cout<<"  | ";
        for (int v=0; v<5; v++){
            list[i][v] = lis;
            if (lis > 9){
                cout<<list[i][v]<<" | ";
            }
            else {
                cout<<list[i][v]<<"  | ";
            }

            lis++;
        }
        cout<<endl;
    }
    cout<<endl;

    Rotar90G(list);
    Rotar180G(list);
    Rotar270G(list);


    return 0;
}
