#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "Cabecalho.h"


using namespace std;

int main()
{
	pilha* pilha;
	aluno dados, * aDados;
	aDados = &dados;
	int aux = 0, i = 1;
	pilha = criaPilha();
	int opcao;

	while (i != 0)
	{
		

		system("cls");
		printf("\n           PILHA      ");
		printf("\n------------------------------------------------");
		printf("\n");
		printf("\n");
		printf("\n  [1] - Inserir\n   ");
		printf("\n  [2] - Remover\n ");
		printf("\n  [3] - Quantidade\n ");
		printf("\n  [4] - Verifica o ultimo elemento\n  ");
		printf("\n  [5] - Imprimir\n ");
		printf("\n	[0] = PARA SAIR\n ");
		printf("\n------------------------------------------------");
		printf("\n\n ");
		printf("\n");
		printf("\n\n\n>> "); cin >> opcao;


		switch (opcao)
		{
			case 0:

				cout << "Saindo" << endl;
				i = 0;
				break;

			case 1:
				
				cout << "Digite a matricula: " << endl; cin >> dados.matricula;
				cout << "Digite o nome: " << endl; cin >> dados.nome;
				inserePilha(pilha, dados);
				system("pause");
				break;

			case 2:

				removePilha(pilha);
				cout << "O ultimo elemento foi removido!" << endl;
				system("pause");
				break;

			case 3:
				tamanhoPilha(pilha);
				system("pause");
				break;

			case 4:

				cout <<"o ultimo elemento: "<< dados.nome<<"\nmatricula: "<<dados.matricula<<endl;
				
				system("pause");
				break;

			case 5:
				imprimiPilha(pilha);
				system("pause");
				break;




			default:
			break;
		}
	}

}























