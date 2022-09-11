#include <stdio.h>
#include <string.h>
#include <locale.h> //necessário para usar setlocale


int main(){
		
		setlocale(LC_ALL,"Portuguese");
		
	char meses[12][100], maiorMes[100], menorMes[100];
	float temperatura=0, mediaAnual=0, recebe=0, maiorTemp, menorTemp=100, tempMes[100];
	int i=0;

	for(i=0;i<12;i++){
		fflush(stdin);
		printf("Qual o mes? ");
		gets(meses[i]);
		
		printf("Qual a temperatura do mes escolhido: ");
		scanf("%f", &temperatura);
		tempMes[i] = temperatura;
		
		recebe = recebe + temperatura;
		
		if(temperatura >= maiorTemp ){
			
			maiorTemp = temperatura;
			strcpy(maiorMes, meses[i]);
		}
		
		if(temperatura <= menorTemp){
			menorTemp = temperatura;
			strcpy(menorMes, meses[i]);
		}
		
	}
	
	mediaAnual = recebe/12;
	printf("A temperatura média anual é de: %f", mediaAnual);	
	printf("\n");
	
	printf("\n Maior temperatura ocorreu no mes = %s: %.2f ºC", maiorMes, maiorTemp);
	printf("\n");
	printf("\n Menor temperatura ocorreu no mes = %s: %.2f ºC", menorMes, menorTemp);
	
	printf("\n");
	for(i=0;i<12;i++){
		
		printf("\n%s = %f", meses[i], tempMes[i]);
		
	}
	
}
