#include<stdio.h>
#include<string.h>
#include<locale.h>

struct dadosCliente{
	char nome[50];
	char telefone[9];
};

struct dataCompra{
	char data[10];
};

struct endereco{
	char rua[200];
	char bairro[200];
	int numCasa;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	struct dadosCliente dados[15];
	
	struct dataCompra data[15];
	
	struct endereco lougradouro[15];
	
	for(int i=0;i<2;i++){
		printf("Nome: ");
		gets(dados[i].nome);
		
		printf("Telefone-(19 99999-9999): ");
		gets(dados[i].telefone);
		
		printf("Data da compra (dd/mm/yyyy): ");
		gets(data[i].data);
		
		printf("Lougradouro \n");
		
		printf("Rua: ");
		gets(lougradouro[i].rua);
		
		printf("Bairro: ");
		gets(lougradouro[i].bairro);
		
		printf("Numero da casa: ");
		scanf("%d ", &lougradouro[i].numCasa);
		fflush(stdin);
	}
	 	fflush(stdin);
	for(int i=0; i<2; i++){
		printf("%s telefone: %s \ndata da compra: %s \nLougradouro: Rua:%s \nBairro: %s \nNumero: %d \n", dados[i].nome, dados[i].telefone, data[i].data, lougradouro[i].rua, lougradouro[i].bairro, lougradouro[i].numCasa);
	}
}

