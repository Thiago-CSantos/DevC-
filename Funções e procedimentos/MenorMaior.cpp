#include <stdio.h>
#include <string.h>
#include <locale.h>


void valores(){
	int i, num=0, maior=0, menor=1000;
	
	for(i=0;i<15;i++){
		printf("Digite um valor: ");
		scanf("%d", &num);
		
		if(num > maior){
			maior= num;
		}
		else{
			if(num < menor){
				menor=num;
			}
		}
	}
	printf("maior = %d", maior);
	printf("\n");
	printf("menor = %d", menor);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	valores();
	
	
	
	
	
}
