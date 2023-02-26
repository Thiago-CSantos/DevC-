#include <stdio.h>
#include <string.h>
#include <locale.h>


float soma(float numero1, float numero2, float numero3){
	float som; 
	som = (numero1 + numero2 + numero3);
	return (som);
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, num3, somas;
	int i;
	
	printf("Digite 3 numeros:\n");
	printf("Digite um numeros: ");
	scanf("%f",&num1);
	printf("Digite um numeros: ");
	scanf("%f",&num2);
	printf("Digite um numeros: ");
	scanf("%f",&num3);
	
	somas = (soma(num1, num2, num3));
	
	printf("%.2f", somas);
	
	
	
	
}
