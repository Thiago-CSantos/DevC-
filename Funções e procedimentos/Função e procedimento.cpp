#include <stdio.h>
#include <string.h>
#include <locale.h>


void media(float media){
	if(media<6){
		 printf("Media menor que 6");
		 return;
	}
	else if(media>6){
		printf("Media maior que 6");
		return;
	}
}

int main(){
	
	int num1, num2;
	float med=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%d", &num1);
	
	printf("Digite um n�mero: ");
	scanf("%d", &num2);
	
	med = (num1 +num2)/2;
	
	media(med);
}
