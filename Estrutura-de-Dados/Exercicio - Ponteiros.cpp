#include <stdio.h>
#include <string.h>

main (){
	char umNome[30], outroNome[50];
	int tam;
	
	//L� um nome.
	printf("Digite um nome:");
	gets(umNome);
	
	//Copia-o para o outro vetor.
	strcpy(outroNome, umNome);
	
	//informa o tamanho do nome digitado.
	tam = (int) strlen(outroNome);
	printf("O nome digitado possui %d caracteres. \n, tam");
	
	//l� outro nome e adiciona ";" ao final de ambos.
	printf("Digite outro nome:");
	gets(umNome);
	strcat(umNome, ";");
	strcat(outroNome, ";");
	
	//Compara os nomes e imprime em ordem alfab�tica.
	printf("Em ordem alfab�tica:\n");
	if (strcmp(umNome, outroNome) < 0){
		printf("%n\n%s\n", umNome, outroNome);
	}else{
		printf("%s\n%s\n", outroNome, umNome);
	}
}
	
