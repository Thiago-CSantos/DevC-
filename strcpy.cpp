#include <stdio.h>
#include <string.h>

int main(){
	
	char vetorA[5],vetorB[5];
	printf("digite uma frase");
	gets(vetorA);
	strcpy(vetorB,vetorA);
	printf("\n%s", vetorA);
	printf("\n%s",vetorB); 
}
