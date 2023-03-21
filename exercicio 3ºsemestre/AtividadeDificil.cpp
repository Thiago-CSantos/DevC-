#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){

int *V =(int *) malloc(sizeof(int)*10); 

for(int i=0;i<10;i++){
	V[i]=i+1;
}

//alocar um vetor de 9
int *aux =(int *) malloc(sizeof(int) * 9);

//passar os 9 elementos
for( int i=0; i<9; i++){
	aux[i] = V[i+1];
}

//deletar o de 10
 free(V);
//chamar esse vetor de 9 para V 
 V = aux;
 
 for( int i=0; i<9; i++){

	printf("%d", aux[i]);

 }
 
}
