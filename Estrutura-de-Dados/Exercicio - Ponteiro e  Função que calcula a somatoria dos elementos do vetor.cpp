#include <stdio.h>
using namespace std;

float soma (int numero, float *dados);

int main(){
	int tam = 5;
	float dados[tam] = {2,2,2,2,2};
	int a;
	int b;
	int c;
	int *ptr; //declara um ponteiro para um inteiro
			 // um ponteiro para uma variavel do tipo inteiro
	a = 90;
	b = 2;
	c = 3;
	ptr = &a;
	printf("Valor de ptr: %p \n", ptr);
	printf("Conteudo de ptr: %d\n", *ptr);
	printf("B: %d, C: %d", b, c);
	
	printf("\n\n Valor de s e: %.2f", soma(tam, dados));
	
}

//função que calcula a somatoria dos elementos do vetor

float soma(int numero, float *dados){
	int i;
	float s = 0;
	for (i=0; i<numero; i++)
	s+= dados[ i ];
	return s;
}
