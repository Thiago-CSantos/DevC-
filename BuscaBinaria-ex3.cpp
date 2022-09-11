#include <stdio.h>
#include <string.h>
#include <locale.h> //necessário para usar setlocale


int main(){
	
	int i, num[5], copia, inicio=0, meio=0, fim=5, achou=0;
	int chave;
	setlocale(LC_ALL, "Portuguese");

	for(i=0;i<5;i++){
		
		printf("Digite 20 numeros: ");
		scanf("%d", &num[i]);
		
	}
	
	for(int x=0;x<5;x++){
		
		for(int y=x;y<5;y++){
			
			if(num[x] > num[y]){
				copia = num[x];
				num[x] = num[y];
				num[y] = copia;
				
				
			}
	
		}
		
	}
	
	printf("\nOrdem crescente: ");
	for(i=0;i<5;i++){
		
		printf("%d ", num[i]);
	}
	
	printf("\nDigite o numero que deseja consultar: ");
	scanf("%d", &chave);
		
		
		
	while(inicio<=fim && achou == 0){
		meio=(inicio+fim)/2;
		
		
		if(num[meio] == chave){
			
			achou=1;
		}

		
		if(chave < num[meio]){
			fim=meio-1;

		}
			
		if(chave > num[meio]){
			inicio=meio+1;
		}
			
	}
	
	if(achou == 1){
		printf("Achou! \nNumero encontrado na posição %d", meio+1);
	}
	else{
		printf("Numero não encontrado");
	}

}
