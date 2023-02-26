#include <stdio.h>
#include <locale.h>
#include <string.h>

void numerosParesImpares(){
	int num, count=0;
	int countI=0;
	
	while(num!=0){
		printf("Digite um número inteiro e positivo");
		scanf("%d", &num);
		
		
		if(num %2 == 0){
			count = count +1;
			
			if(num == 0){
				count = count-1;
			}
			
		}
		else{
			countI = countI + 1;
		}
		
	}
	
	printf("Pares: %d", count);
	printf("\nImpares: %d", countI);
	
}

int main(){
	numerosParesImpares();
}
