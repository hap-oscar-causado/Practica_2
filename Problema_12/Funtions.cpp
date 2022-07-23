#include <iostream>
#include "Funtions.h"

using namespace std;

void magic_ft(int arr_suma[],int size_ma){
    for (int i=0; i<(size_ma*2)+1;i++){
        if (arr_suma[i] != arr_suma[i+1]){
            cout<<endl;
            cout<<"NO es un cuadrado magico!"<<endl;
            cout<<endl;
            return;
        }
    }
    cout<<endl;
    cout<<"Es un cuadrado magico!"<<endl;
    cout<<endl;
    return;
}
