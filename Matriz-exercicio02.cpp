#include <stdio.h>

int main(){
	
	int lin,col, pessoa=1;
	int somalin=0, somacol=0;
	
	 int matriz[4][3];
	 
	 for (lin=0;lin<4;lin++){
	 	printf("pessoa %d: \n", pessoa++);
	 	
	 	for(col=0;col<3;col++){
	 		printf("digite um valor: ");
	 		scanf("%d", &matriz[lin][col]);
		 }
	 	
	 }
	
	pessoa=1;
	
	for (lin=0;lin<4;lin++){
	 	
	 	printf("pessoa %d: \n", pessoa++);
	 	for(col=0;col<3;col++){
	 		printf("%5d", matriz[lin][col]);
		 }
	 	printf("\n");
	 }
	 
	 
	 printf("---------------------------------------------");
	 pessoa=1;
	 for (lin=0;lin<4;lin++){
	 	
	 	
	 	for(col=0;col<3;col++){
	 	 
	 	 somalin= somalin + matriz[lin][col];
	 	 
		 }
		 
		 printf("Pessoa soma linha %d :", pessoa++);
		 printf("%d", somalin);
		 somalin=0;
	 	printf("\n");
	 }
	 
	 printf("---------------------------------------------");
	 pessoa=1;
	 for (col=0;col<3;col++){
	 	somacol=0;
	 	
	 	for(lin=0;lin<4;lin++){
	 	 
	 	 somacol= somacol + matriz[lin][col];
	 	 
		 }
		 
		 printf("Pessoa soma coluna %d :", pessoa++);
		 printf("%d", somacol);
		 
	 	printf("\n");
	 }
	
}
