#include<stdio.h>
#include<string.h>
#define MAX 5
struct RegistroCliente{
	
	int codigo_cliente;
	char nome[100];
	
};
struct RegistroCliente registro[MAX];



typedef struct RegistroCompra{
	
	int numero_conta;
	float valor_compra;
	int codigo_cliente;
}RegistroCompra;

RegistroCompra compra[MAX];

void incluirCliente(){
	int i=0, x, y;
	
	while(i!=MAX){
		printf("\nCodigo do cliente %d:", i+1);
		scanf("%d", &registro[i].codigo_cliente);
		
		fflush(stdin);
		printf("\nNome completo:");
		gets(registro[i].nome);
		
		for(x=0; x<MAX; x++){
			if(registro[i].codigo_cliente == registro[x].codigo_cliente){
				printf("Codigo do cliente não podem serem iguais!!\n");
				printf("\nCodigo do cliente %d:", i+1); fflush(stdin);
				scanf("%d", &registro[i].codigo_cliente);
			}
		}
		++i;
	}

	//for(i=0; i<MAX; i++){
//		do{		
//			if(registro[i].codigo_cliente == x[i]){
//				y = 1;
//				printf("Codigo do cliente não podem serem iguais!!\n");
//				printf("\nCodigo do cliente: %d", i+1);
//				scanf("%d", &registro[i].codigo_cliente);
//			}
//			else{
//				x[i] = registro[i].codigo_cliente;
//		
//				printf("\n%d", i);
//				y=0;
//			}	
//			
//		}while(y!=0);
	//}
}

void incluirConta(){
	int i=1;
	int x=0;
	int index =0;
	
	while(i!=0){
		
		printf("Digite o codigo do cliente: ");
		scanf("%d", &compra[index].codigo_cliente);
		
		while(x<MAX){
				if(compra[index].codigo_cliente == registro[x].codigo_cliente){
					printf("Codigo do cliente não cadastrado: ");
					printf("Digite novamente o codigo do cliente: ");
					scanf("%d", &compra[index].codigo_cliente);
				}else{
					x++;
				}
		}
		
		printf("Digite o numero da compra: ");
		scanf("%d", &compra[index].numero_conta);
		
		
		printf("Digite o valor da compra: ");
		scanf("%f", &compra[index].valor_compra);
		index++;
	}

}

void removerCliente(){
	char sn;
	int index =0;
	
	printf("Deseja remover um cliente?");
	scanf(" %c", &sn);
	
	if(sn == 's'){
		printf("Digite o codigo do cliente que deseja remover: ");
		scanf("%d", &compra[index].codigo_cliente);
		
		if(compra[index].valor_compra > 0.0 ){
			printf("Exclusao nao permitida!");
		}else{
			registro[index].codigo_cliente = 0;
			index++;
		}
		
	}
	else if(sn == 'n'){
		printf("Ecenrrado");
	}
}

int main(){
	incluirCliente();
	incluirConta();
	removerCliente();
}
