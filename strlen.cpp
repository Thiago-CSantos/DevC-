#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[10];
	int tamanho;
	
	printf("digite seu nome");
	gets(nome);
	
	tamanho = strlen(nome);
	printf("\n%s tem %d caracteres \n", nome , tamanho);
}
