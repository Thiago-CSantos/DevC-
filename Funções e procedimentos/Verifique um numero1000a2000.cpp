#include <stdio.h>
#include <string.h>
#include <locale.h>

void verefique(){
	int i, minimo = 1000, maximo = 2000;
	for(i=minimo; i<=maximo;i++){
		
		if(i % 11 == 5){
			printf("%d \n", i);
		}
		
	}
	
	
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	float med=0;
	
	verefique();
	
	
	
	
}
