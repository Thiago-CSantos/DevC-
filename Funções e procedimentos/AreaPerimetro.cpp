#include <stdio.h>
#include <locale.h>
#include <string.h>

 float pi = 3.14;

 float *AreaPerimetro(float raio2){
	float area,perimetro, retorno[2];
	
	retorno[0] = (area = (raio2 * raio2) * pi);
	retorno[1] = (perimetro = (raio2 *2) * pi);
	return retorno;
	
}


int main(){
	float raio, area, perimetro, *teste;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual o raio do circulo");
	scanf("%f", &raio);
	
	teste = AreaPerimetro(raio);
	area = teste[0];
	perimetro = teste[1];
	 
	
	printf("Area: %f\nPerimetro: %f", area, perimetro);
}
