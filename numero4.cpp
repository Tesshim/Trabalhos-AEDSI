// numero4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void g90(int [3][3]);
void g180(int [3][3]);
void g270(int [3][3]);
void escreve(int [3][3]);
void reset(int [3][3]);

//GIRANDO UMA MATRIZ, 9O�, 180� OU 270�

int main() {

//Criando e escrevendo a matriz original
int matriz[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    escreve(matriz);

//Um if para escolher em quantos graus o usuario vai querer girar a matriz
char op�ao;
do{ 
cout<<"Choose 1 for 90�, 2 for 180�, 3 for 270 �"<<endl;
cin>>op�ao;
if(op�ao == '1'){
   g90(matriz);
       escreve(matriz);
}
else if(op�ao == '2'){
       g180(matriz);
            escreve(matriz);
}
else if(op�ao == '3'){
        g270(matriz);
             escreve(matriz);
}
else cout<<"Option invalidates"<<endl;
cout<<"Press E to exit"<<endl;
cin>>op�ao;

//Voltando a matriz original para n�o dar problema caso o usuario n�o saia do programa para ver outro giro de matriz
reset(matriz);

//O programa s� sair� do while quando o usuario digitar a letra e
}while(op�ao != 'e');
return 0;
}

//Fun��o para girar 90�
void g90(int x[3][3]){
    int aux[3][3];

//Para girar a matriz 90� transformo as colunas em linhas na sequencia invertida dos numeros
for(int i=0;i<3;++i)
    for(int j=0;j<3;++j){
        aux[j][2-i]=x[i][j];
}

//Trocando os termos da matriz original pelos da matriz girada
for(int i=0;i<3;++i)
   for(int j=0;j<3;++j)
      x[i][j]=aux[i][j];
}

//Fun��o para girar 180�
void g180(int x[3][3]){

//Para girar 180� giramos a matriz original 2x por 90�
g90(x);
g90(x);
}

//Fun��o para girar 270�
void g270(int x[3][3]){

//Para girar 270� giramos a matriz uma vez pro 90� e depois por 180�
g90(x);
g180(x);

}

//Uma fun��o s� para escrever a matriz
void escreve(int x[3][3]){
for(int i=0;i<3;++i){
   for(int j=0;j<3;++j)
      cout<<x[i][j]<<" ";
          cout<<endl;
}
}

//Uma fun��o para voltar a matriz ao seu preenchimento original sem ser aplicado nenhum giro
void reset(int x[3][3]){
    int a = 1;

    for(int i=0;i<3;++i){
       for(int j=0;j<3;++j)
          x[i][j] = a++;
}
}