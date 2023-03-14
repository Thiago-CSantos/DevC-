/*modelagem de dados
  alocação dinâmica de memória
  */
  
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

struct Conta{
	float valorConta;
	int numeroConta;
};
struct Cliente{
	char nomeCliente[100];
	int codigoCliente;
	struct Conta conta;
};

int main(){
	//Programa para exemplificar 
	//o uso de structs dentro de structs
	
	struct Cliente* cliente; //tamanho indefinido de 
	                         //clientes
	int tamanho, i;
	char enter;
	
	setlocale(LC_ALL,"");
	
	printf("Informe a quantidade de clientes:");
	scanf("%d", &tamanho);
	
	//definir o tamanho do vetor alocado 
	//dinamicamente
	cliente = (struct Cliente *)malloc(tamanho*sizeof(struct Cliente));
	
	for(i =0; i<tamanho; i++){
		
		scanf("%c", &enter);
		
		printf("\nNome:");
		gets(cliente[i].nomeCliente);
	
		printf("Codigo:"); //vocês fazem
		scanf("%d", &cliente[i].codigoCliente);
	
		printf("Numero da conta:");
		scanf("%d", &cliente[i].conta.numeroConta);
	
		printf("Valor da conta:");
		scanf("%f", &cliente[i].conta.valorConta);
	}
		printf("\nOs dados lidos são:");
	
	for(i=0;i<tamanho;i++){
	
		printf("\n%s",cliente[i].nomeCliente);
		printf("\n%d",cliente[i].codigoCliente);
		printf("\n%d",cliente[i].conta.numeroConta);
		printf("\n%.2f",cliente[i].conta.valorConta);
	}
	
	
}

