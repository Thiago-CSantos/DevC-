#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2;
	float total;
	char result, x; 
	printf("\n Realizar um calculo: s ou n: ");
	scanf(" %c", &result);
	
	while(result ='s') {

		printf("digite um numero:");
		scanf("%d", &n1);
	
		printf("digite a operação[+ - / *]: " );
		scanf(" %c", &x);
	
		printf("digite um numero:");
		scanf("%d", &n2);
	
		switch(x){
			case '+': total= n1+n2; break;
			case '-': total= n1-n2; break;
			case '/': total= n1/n2; break;
			case '*': total=n1*n2; break;
		}
		printf("o resultado foi: %.2f", total);
	
		printf("\n Realizar um novo calculo: s ou n");
		scanf(" %c", &result);

    } 
    
    
    
	
}
