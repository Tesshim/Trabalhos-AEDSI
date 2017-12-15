// numero5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace  std;

//CALCULANDO OS LUCROS DE 2 MOTORES EM 1 ANO

int main()
{
		int   producao[12][2],preco[2][2],resultados[12][2],l,c;

//Colocando preço nos motores 
    cout <<"Between the cost and profit of the engine 1 and engine 2 "<<endl;
for (l=0;l<2;l ++ )
	for ( c=0;c<2;c++)
		{ 
		cout <<"Engine " <<l+1<<" cost/profit "<<endl;
			cin >>preco[l][c];
	}

	//Pausa e limpa a tela
	system("pause");
	 system("CLS");

//Entrando com a produção de cada mês
		cout <<"Between with the production of every month"<<endl;
	for (l=0;l<12;l++)
		for ( c=0;c<2;c++)
			{
			cout <<" month " <<l+1<<" engine "<<c+1<<" ";
				cin >>producao[l][c];
			}
		system("pause");
		system("CLS");

//Tabela de produção
    cout <<"Table of production of engines every month"<<endl;
	cout<<endl<<endl;
	cout<<"Engine1   "<<"Engine2"<<endl;
	for (l=0;l<11;l++)
	{
		cout <<endl;
			for ( c=0;c<2;c++)
				cout <<producao[l][c] <<"   ";
			}
	cout <<endl<<endl;

//Tabela de preços
        cout <<" Table of prices "<<endl;
		cout<<"Engine1 "<<"Engine2"<<endl;
		for (l=0;l<2;l++)
		{
			cout<<endl;
				for (c=0;c<2;c++)
					cout <<preco[l][c]<<" ";
		}
		cout  <<endl;

//Zerando a matriz resultados
		for (l=0;l<11;l++)
				for (c=0;c<2;c++)
						resultados[l][c]=0;

		//Jogando o custo do moor 1 na matriz
			for (l=0;l<11;l++)
				resultados [l][0]=preco[0][0] * producao[l][0];

		//Jogando o custo do motor 2 na matriz somando com o valor do motor 1 
			for (l=0;l<11;l++)
				resultados[l][0]= resultados[l][0] +( producao[l][1]*preco[1][0] );


		//Jogando o lucro do motor 1 na matriz resultados
			for (l=0;l<11;l++)
			resultados[l][1]=producao[l][0]*preco[0][1];
			
		//Jogando o lucro do motor 2 na matriz somando com o do 1
			for (l=0;l<11;l++)
			resultados[l][1]=resultados[l][1] + (producao[l][1]*preco[1][1]);
cout<<endl<<endl;
			cout<<"                 RESULTADOS!"<<endl;
cout<<endl<<endl;
			
cout<<"Engine1 Cost  |  "<<"Engine2 Profit  "<<endl;
	for (l=0;l<11;l++)
	{
		cout <<endl;
			for ( c=0;c<2;c++)
				cout <<resultados[l][c] <<"  ";
			}
cout<<endl;
	return 0;
}