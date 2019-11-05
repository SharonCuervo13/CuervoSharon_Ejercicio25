#include <iostream>
#include <cmath>
#include <stdlib.h>
void rellena(int a);
void imprime(int *a);

int main(){
    int n;
    std::cout <<"Escriba un número del 3 al 11"<<std::endl;
    std::cin>>n;
    
    if (n>3 && n<11){
        float m[n][n+2];
    }
    else{
        std::cout <<"Escriba un número del 3 al 11"<<std::endl;
        std::cin>>n;
    }
    return 0;
}


void rellena(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n+2; i++){
            int m[n][n+2];
        }
    }
}
