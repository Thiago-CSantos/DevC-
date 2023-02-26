#include <stdio.h>
#include <locale.h>
#include <string.h>

float ValoresMedia(){
	float num=0, p, count=0, soma;
	float media;
	printf("Quando quiser parar digite -1 \n");
	while(num >= 0){
		
		p=1;
		if(p == 1){
			printf("Digite um número: ");
			scanf("%f", &num);
			
			count++;
		}
		
		
		soma = soma + num;
		if(num<0){
			soma = soma - 1;
		}
		media = soma/count;		
	}
	return media;
}

int main(){
	float mediaa;
	setlocale(LC_ALL, "Portuguese");
	mediaa = ValoresMedia();
	
	printf("%f", mediaa);
}
