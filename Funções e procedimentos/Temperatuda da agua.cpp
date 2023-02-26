#include <stdio.h>
#include <string.h>
#include <locale.h>


void tempAgua(){
	
	float temp;
	
	printf("Qual a temperatuda da agua, em graus Celsius? ");
	scanf("%f", &temp);
	
	if(temp<0){
		printf("Agua solida");
		return;
	}
	
	else{
		if(temp>0 and temp<=46){
			printf("Liquido");
			return;
		}
		else{
			printf("Gasoso");
			return;
		}
	}
}

int main(){
	
	int num1, num2;
	float med=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	tempAgua();
	
	
	
	
}
