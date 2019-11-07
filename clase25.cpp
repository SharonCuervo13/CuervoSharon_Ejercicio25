#include<iostream>


void relleno(int n,float **m);

void imprimecabezas(int n,float **m);

void imprime(int n,float **m);

int main(){
    
    std::cout<<"Escriba un numero del 3 al 11"<<std::endl;
    
    int n=0;

    std::cin>>n;

    if(n>=3 && n<=11){
        
        float **m = new float *[n];
        
        for (int i=0; i < n; ++i){
            m[i] = new float[n+2];
        }

    relleno(n,m);

    imprimecabezas(n,m);
        
    imprime(n,m);


    }

    else{
        std::cout<<"El numero no esta en el rango valido"<<std::endl;
    }

    return 0;

}



void relleno(int n,float **m){
    for (int j; j < n+2 ;j++){
        for ( int i; i <n;i++) {
            m[i][j]=i+j;
            }
    }
}

void imprimecabezas(int n, float **m){
    float sum=0;
    for (int i =0; i <n;i++){
        std::cout<<m[i][0]<<" ";
        sum+=m[i][0];
    }
    std::cout<<std::endl;
}


void imprime(int n,float **m){
    for (int j=0; j < n+2 ;j++){
        for ( int i=0; i <n;i++) {
            std::cout<<" "<<m[i][j]<<" ";
        }
        std::cout<<std::endl;

}

}
