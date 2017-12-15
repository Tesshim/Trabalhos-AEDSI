// numero 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void modifica(int[], int , int );

//ESCREVENDO UM VETOR EM FORMA DE MATRIZ

int main()
{

int a[10], lines, columns,i;
   // Entrando com os valores no vetor
	for( i=0; i<10;i++) {
				cout<<"Write the "<<i+1<<"° element of the vector" <<endl;
			cin>>a[i];
						}
	// Entrando com o numero de linhas e colunas
	cout<<"Enter the number of lines "<<endl;
cin >> lines;
	cout<<"Enter the number of columns"<<endl;
cin >> columns;
    // Aplicando a midificação
modifica(a,lines,columns);

}

void modifica(int v[],int l,int c ){
	int j,i,s=0;
	//Testando se os valores são validos
		if ( l*c!=10)
			cout<<"Value of rows and columns invalid"<<endl;
		else {
	//Primeiro for faz pular de linha quando o numero de colunas acaba
			for (i=0;i<l;i++){
						cout<<endl;
	// Lendo as colunas
						for (j=0;j<c;j++){
							cout<<v[s]<<" ";
								s++;
										  }
							  }
		
		}
								}
				
