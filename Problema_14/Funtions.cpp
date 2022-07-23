#include <iostream>
#include "Funtions.h"

using namespace std;


void Rotar90G(int list[5][5]){
    cout<<endl;
    cout<<"     MATRIZ ROTADA 90 GRADOS "<<endl;
    cout<<endl;
    for (int i=0; i < 5; i++ ){
        int lis = 21 +i;
        cout<<"  | ";
        for (int v=0; v<5; v++){
            list[i][v] = lis;
            if (lis > 9){
                cout<<list[i][v]<<" | ";
            }
            else {
                cout<<list[i][v]<<"  | ";
            }

            lis = lis -5;
        }
        cout<<endl;
    }
    cout<<endl;
}

void Rotar180G(int list[5][5]){
    cout<<endl;
    cout<<"     MATRIZ ROTADA 180 GRADOS "<<endl;
    cout<<endl;
    int lis = 25;
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

            lis--;
        }
        cout<<endl;
    }
    cout<<endl;
}

void Rotar270G(int list[5][5]){
    cout<<endl;
    cout<<"     MATRIZ ROTADA 270 GRADOS "<<endl;
    cout<<endl;
    for (int i=0; i < 5; i++){
        int lis = 5-i;
        cout<<"  | ";
        for (int v=0; v<5; v++){
            list[i][v] = lis;
            if (lis > 9){
                cout<<list[i][v]<<" | ";
            }
            else {
                cout<<list[i][v]<<"  | ";
            }

            lis = lis+5;
        }
        cout<<endl;
    }
    cout<<endl;
}
