#include <stdio.h>
#include <string.h>

int main(){
	
	int RA=1, i=0, ra=1, nota=0, ii=0;
	
	char G[10]={'a', 'b', 'a', 'c', 'a', 'd', 'a', 'e', 'a', 'b'};
	char R[10];
	
	
	while(RA!=0){
		
		printf("Digite seu RA: ");
		scanf("%d", &RA);
		
		if(RA == 0){
			break;
		}
		
		for(ii=0; ii<10;ii++){
		
			printf("Digite a resposta da %d: ", ii+1);
			scanf(" %c", &R[ii]);
		
			if(R[ii] == G[ii]){
			
			nota++;
//			contador = contador +1; 
			
			}
		
			
		
		}
		
		printf("O aluno %d, sua nota foi de %d \n", RA, nota);
		i++;
	}
	
	
	
}
