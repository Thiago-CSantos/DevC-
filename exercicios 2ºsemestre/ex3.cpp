#include <stdio.h>
#include <string.h>


int main(){
	char palavra[100];
	char caracter;
	int i=0;
	
	printf("Digite uma algo");
	gets(palavra);
	
	printf("DIgite um caracter:");
	scanf(" %c",&caracter);
	
	while(palavra[i]!='\0'){
	
		
		if(palavra[i]== caracter){
			palavra[i]='*';
		}
		i++;
	}
	
	printf("%s", palavra);
}
