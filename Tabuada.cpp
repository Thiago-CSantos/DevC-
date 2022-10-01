#include <stdio.h>
#include <string.h>
#include <locale.h>

int tabuada(int numero){
	
	for(int i=1;i<11;i++){
		printf("%d x %d = %d \n", numero, i, numero*i);
	}
	
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	float med=0;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	tabuada(num1);
	
	
}
