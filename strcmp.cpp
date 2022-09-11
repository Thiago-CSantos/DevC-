#include <stdio.h>
#include <string.h>

int main(){
	
	char senha[80];
	int result;
	printf("digite a senha: ");
	gets(senha);
	
	result = strcmp(senha,"laranja");
	if (result == 0)
		printf("\nsenha ok");
	else 
		printf("\nsenha invalida");
}
