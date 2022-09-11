#include <stdio.h>

int main(){
	
	int lin;
	int col;
	int pessoa=1;
	float notas[10][5];
	float media=0;
	
	 
	for(lin=0;lin<10;lin++){
		printf("pessoa %d  \n", pessoa++);
		for(col=0;col<5;col++){
			printf("Digite uma nota: ");
			scanf("%f", &notas[lin][col]);
		}
		
	}
		
	
	for(lin=0;lin<10;lin++){
		pessoa=0;
		printf("pessoa %d: ");
		for(col=0;col<5;col++){
			printf("notas %5.2f", notas[lin][col]);
			pessoa++;
			
		}
		printf("\n");
	}
	
	printf("---------------------------------------------------------------------------------------------------------------------");
	
	for(lin=0;lin<10;lin++){
		pessoa=0;
		printf("pessoa %d: ",pessoa++);
		for(col=0;col<5;col++){
			
				media=media+notas[lin][col];
				
		}
		
		printf("Media : %f", media/5);
				pessoa++;
		media=0;
		printf("\n");
	}
	
	
	
}
