#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "Cabecalho.h"

using namespace std;


struct elemento
{
	struct aluno dados;
	struct elemento* prox;
};

typedef struct elemento elem;

pilha* criaPilha()
{
	pilha* pi = (pilha*)malloc(sizeof(pilha));

	if (pi != NULL)
	{
		*pi = NULL;
	}
	return pi;
}

void liberarPilha(pilha* pi)
{
	if(pi != NULL)
	{
		elem* no;
		while ((*pi) != NULL)
		{
			no = *pi;
			*pi = (*pi)->prox;
			free(no);
		}
		free(pi);
	}
}

int tamanhoPilha(pilha* pi)
{
	if (pi == NULL)
	{
		return 0;
	}
	int cont = 0;

	elem* no = *pi;

	while (no != NULL)
	{
		cont++;
		no = no->prox;
	}
	cout <<"O tamanho da pilha: "<< cont << endl;
	return cont;

}

int pilhaCheia(pilha* pi)
{
	cout << "ERROR";
	return 0;
}

int pilhaVazia(pilha* pi)
{
	if (*pi == NULL)
	{
		cout << "Pilha vazia";
		return 1;
	}
	if (pi == NULL)
	{
		cout << "Pilha vazia";
		return 1;
	}
	return 0;
}

int inserePilha(pilha* pi, struct aluno al)
{
	if (pi == NULL)
	{
		return 0;
	}
	elem* no = (elem*)malloc(sizeof(elem));
	if (no == NULL)
	{
		return 0;
	}
	no->dados = al;
	no->prox = (*pi);

	*pi = no;
	return 1; 
	
}

int removePilha(pilha* pi)
{
	if (pi == NULL)
	{
		return 0;
	}

	if ((*pi) == NULL) // *pi é o topo da pilha.
	{
		return 0;
	}

	elem* no = *pi;

	// no sempre aponta para o prox. elemento da pilha.

	*pi = no->prox;
	free(no);
	return 1;
}

int consultaTopoDaPilha(pilha* pi, struct aluno* al)
{
	if (pi == NULL)
	{
		return 0;
	}
	if ((*pi) == NULL)
	{
		return 0;
	}

	*al = (*pi)->dados;
	return 1;
}

void imprimiPilha(pilha* pi)
{
	if (pi == NULL)
	{
		
		return;
	}
		elem* no = *pi;

		while (no != NULL)
		{
			//no->dados;
			cout << "Nome: " << no->dados.matricula << "\nMatricula: " << no->dados.nome << "\n" << endl;
			
			no = no->prox;
		}
}