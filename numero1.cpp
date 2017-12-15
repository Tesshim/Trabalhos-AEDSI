// numero1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void nova(int [][10], int, int );

//ESCREVENDO O N-ÉSIMO DA SEQUENCIA DE FIBONACCI

int main()
{
	int a[10][10],i,j;
	i=0;
	j=0;

//Adicionando valores na matriz

	cout<<"Enter values"<<endl;
	
	for(i=0;i<10;i++)
		for (j=0;j<10;j++)
				a[i][j]=6;
	            //cin>> a[i][j];


//Matriz 
cout<<endl;
cout << "Matrix elements before being modified" << endl;
		for(i=0;i<10;i++)
		{
			cout<<endl;
			for (j=0;j<10;j++)
					cout << a[i][j] <<" ";
		}
// Aplicação da função
	nova (a,10,10);

	cout << "Elements of the matrix showing the N-th term Fibonacci," << endl;
		for(i=0;i<10;i++){
			cout<<endl;
			for (j=0;j<10;j++)
					cout << a[i][j] <<" ";
		}


}

void nova(int v[][10], int linhas, int colunas){
int k,a1,a2,fibo,m,j,i;


for(int i=0; i<10;i++)
		for(int j=0;j<10;j++)
		{
				m=v[i][j];
				if (m<=0)
					cout<<"Invalid value"<<endl;
				else {
				// Zerando fibo e a2 para não dar erro
						fibo=0;
						a1=1;
						a2=0;
							for (k=1;k<=m;k++)
								{
									fibo=(a1+a2);
									a1=a2;
									a2=fibo;
									v[i][j]=fibo;
								}

						}
				}
}