#include <iostream>

#include "funtions.h"
using namespace std;

void imp_num(){
    cout<<"    ";
    for(int i = 1; i<=20;i++){
        if (i<=9){
            cout<<i<<"    ";
        }
        else {
            cout<<i<<"   ";
        }
    }
    cout<<endl;
}

void ImpMatrizSillas(char asiento[][20]){
    imp_num();
    char filas[] = "ABCDEFGHIJKLMNO";
    for (int i = 0; i<=14; i++){
        cout<<filas[i]<<" ";
        for (int var = 1; var<= 20;var++){
            cout<<"| "<<asiento[i][var]<<" |";
        }
            cout<<endl;
    }
    cout<<endl;
}

void ImpMainMenu(){
    cout<<"**********Presionar**********\n"<<
          "*                           *\n"<<
          "* 1 Para elegir asiento     *\n"<<
          "* 2 Para cancelar seleccion *\n"<<
          "* 3 Para salir              *\n"<<
          "*                           *\n"<<
          "*****************************"<<endl;
    cout<<"===> ";
}

void ImpSelection(int n){
    if (n == 1){
        cout<<"Elegir fila (A - O): ";
    }
    else if (n == 2){
        cout<<"Elegir numero de silla (1 - 20): ";
    }
}

int n_filas(char fila){
    int fila_int;
    char filas[] = "ABCDEFGHIJKLMNO";

    for(int i = 0; i<=15; i++){
        if (fila == filas[i]){
            fila_int = i;
        }
    }
    return fila_int;
}
