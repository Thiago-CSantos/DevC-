#include <stdio.h>
#include <locale.h>
#include <string.h>

int somatoria(int num2){
	int i, soma=0;
	for(i=0; i<=num2; i++){
		soma =soma +i;
	}
	return soma;
}

int main(){
	int num, retorno;
	printf("digite um numero: ");
	scanf("%d", &num);
	
	retorno =(somatoria(num));
	
	printf("%d", retorno);
	
	
}
