struct aluno
{
	int matricula;
	char nome[30];
	//float n1, n2, n3;
};

typedef struct elemento* pilha;


pilha* criaPilha();

void liberarPilha(pilha* pi);

int tamanhoPilha(pilha* pi);

int pilhaCheia(pilha* pi);

int pilhaVazia(pilha* pi);

int inserePilha(pilha* pi, struct aluno al);

int removePilha(pilha* pi);

int consultaTopoDaPilha(pilha* pi, struct aluno* al);

void imprimiPilha(pilha* pi);



