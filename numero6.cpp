// numero6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void intersecao(int [] ,int [] ,int );
void lervetores(int [] ,int [] ,int );

//FAZENO A INTERSECÇÃO DE DOIS VETORES

int main()
{
int a[10],b[10];

lervetores(a,b,10);
intersecao(a,b,10);

}


void lervetores(int va[], int vb[] ,int t){
int i,j;

// Lendo o vetor a
	for (i=0;i<t;i++){
		cout<<"Between the "<<i+1<<" element of the vector A"<<endl;
		cin>>va[i];

//Verificando se existe numeros repetidos
			for (j=0;j<i;j++){ 
				if (va[j]==va[i])
				{
//j recebe tamanho +1 apenas para sair do laço
					j=t+1;  
//Voltar no k para ser digitado novamente
					i--; 
					cout<<"Value already entered, enter another value"<<endl;

				}
			}
	}

//Lendo o vetor B
	for (i=0;i<t;i++){
		cout<<"Between the "<<i+1<<" element of the vector B"<<endl;
		cin>>vb[i];
//Verificando se existe numeros repetidos 
		for (j=0;j<i;j++){
			if (vb[j]==vb[i])
			{
				j=t+1; 
				i--; 
				cout<<"Value already entered, enter another value"<<endl;
				}
			}

	}
}


void intersecao(int a[],int b[],int  t){
int i, j, c[50],z;
z=0;
for(i=0;i<t;i++)
//Verifica se tem algum termo igual entre o vetor A e B
	for(j=0;j<t;j++){  
		if (a[i]==b[j]){
//Se tiver algum valor igual ele é jogado no vetor C
			c[z]=a[i];
			z++;
		}
	}
	cout<<endl<<endl<<endl;

cout<<"  Vector A  "<<endl<<endl<<endl;
		for(i=0;i<t;i++)
			cout<<a[i]<<" ";
		cout<<endl<<endl<<endl;
cout<<"  Vector B  "<<endl<<endl<<endl;
		for(i=0;i<t;i++)
			cout<<b[i]<<" ";
		cout<<endl<<endl<<endl;
cout<<"  Intersection  "<<endl<<endl<<endl;
//Escrevendo a interseção dos vetores
	for(i=0;i<z;i++)
		cout<<c[i]<<" ";
	cout<<endl;
}