#include <stdio.h>
using namespace std;

int main(){
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
	
}
