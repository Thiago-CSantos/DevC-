#include <stdio.h>
#include <string.h>

int main(){

	char frase[100];
	int i=0;
	int qtdade=0;
	
	
	printf("digite uma frase: ");
	gets(frase);
	
	while(frase[i] != '\0'){
		if(frase[i] != ' ' ){
			i++;
		}
		
		else{
			qtdade++;
			i++;
		}
	}
	
	printf("%d", qtdade);
}


