#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char frase[100];
	int tamanho=0, count=0, i=0;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	tamanho = strlen(frase);
		
		while(frase[i] != '\0'){
			
			if(frase[i++] == ' ' ){
				count++;
			}
			
			i++;
		}
	
	printf("%d ", count+1);
}
