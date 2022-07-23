#include <iostream>
#include "Funtions.h"

using namespace std;

int factorial(int n){
    int fact=1;
    if (n>1){
        for (int i = 2; i<=n;i++){
            fact = fact*i;
        }
    }
    return fact;
}
