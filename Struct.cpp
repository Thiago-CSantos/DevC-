#include<stdio.h>
#include<string.h>

struct Disciplina{
	
	float nota;
	char materia[100];
};

struct Data{
	char dataNascimento[10];
};

typedef struct Alunos{
	int ra;
	char nome[80];
	struct Disciplina disc[3];
 	struct Data dataNasc;
	
}Alunos;

Alunos aluno;
void menu();
void inicializar();
void cadastrar();
void imprimir();


int main(){
	menu();
}

void menu(){
	int opcao;
	do{
		printf("\n 1. Inicializar a estrutura");
		printf("\n 2. Cadastrar aluno");
		printf("\n 3. Imprimir aluno");
		printf("\n 4. Sair");
		printf("\n Digite a opcao desejada: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1: 
				inicializar();
				break;
			case 2: 
				cadastrar();
				break;
			case 3:
				imprimir();
				break;
			case 4:
				printf("O programa sera finalizado! ");
				break;
			default:
				printf("\n opcao invalida");
		}
		
	}while(opcao != 4);
}

void inicializar(){
	aluno.ra=0;
	strcpy(aluno.nome,"NULL");
	strcpy(aluno.dataNasc.dataNascimento, "NULL");
	
	for(int i=0; i<3; i++){
		strcpy(aluno.disc[i].materia,"NULL");
		aluno.disc[i].nota=0;
	}
	
}

void cadastrar(){
	printf("digite o ra do aluno ");
	scanf("%d", &aluno.ra);
	fflush(stdin);
	
	printf("digite o nome do aluno ");
	gets(aluno.nome);
	
	fflush(stdin);
	printf("digite a data de nascimento: (dd/MM/yyyy)");
	gets(aluno.dataNasc.dataNascimento);
	
	for(int i=0; i<3; i++){
		printf("digite o nome da disciplina #%d: ", i+1);
		gets(aluno.disc[i].materia);	
	
		printf("digite a nota da disciplina (%s): ", aluno.disc[i].materia);
		scanf("%f", &aluno.disc[i].nota);
		fflush(stdin);
	}
}

void imprimir(){
	printf("\nRA: %d", aluno.ra);
	
	printf("\nnome do aluno: %s", aluno.nome);
	
	
	printf("\nData nascimento do aluno: %s", aluno.dataNasc.dataNascimento);
	
	for(int i=0; i<3; i++){
		printf("\nDisciplina (%s): nota(%.2f) ", aluno.disc[i].materia, aluno.disc[i].nota);
	}
	printf("\n \n");
}
