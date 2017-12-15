// numero3 outra forma.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
float calculando(float,int);

//CRIANDO E CALCULANDO UM POLINÔMIO DE ACORDO COM O SEU GRAU

int main() {
    int i, n, x, v[11];
    double r;

//Entrando com o valor do expoente
    do{
        cout<<"Among with the value of exponent"<<endl;
        cin>>n;        
    }while(n>10);
    
//Entrando com os valores dos coeficientes
    for(i = 0; i <= n;i++){
        cout<<"Among the coefficient of degree "<<i<<endl;
        cin>>v[i];
    }


	do{
//Entrando com o valor de X
            cout<<"Among the value of X"<<endl;
            cin>>x;

//Aplicando a equação e escrevendo o resultado
			
			r=0;
            for(i = 0; i <= n;i++)
                r = r + (v[i]*calculando(x,i));
            cout<<"The result of this equation is "<<r<<endl;
			cout<<endl;
			}while(x!=0);

    
    
    
    return 0;
}
float calculando(float x,int expoente){
    float vetor[10], resultado = 1;
	int i=0;

//Calculando a potencia e armazenando no vetor
    while(expoente > 0){
        resultado*=x;
        expoente--;
		vetor[i]=resultado;
		i++;
    }
    return resultado;

}