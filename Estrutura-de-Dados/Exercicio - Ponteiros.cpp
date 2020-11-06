#include <stdio.h>
#include <string.h>

main (){
	char umNome[30], outroNome[50];
	int tam;
	
	//Lê um nome.
	printf("Digite um nome:");
	gets(umNome);
	
	//Copia-o para o outro vetor.
	strcpy(outroNome, umNome);
	
	//informa o tamanho do nome digitado.
	tam = (int) strlen(outroNome);
	printf("O nome digitado possui %d caracteres. \n, tam");
	
	//lê outro nome e adiciona ";" ao final de ambos.
	printf("Digite outro nome:");
	gets(umNome);
	strcat(umNome, ";");
	strcat(outroNome, ";");
	
	//Compara os nomes e imprime em ordem alfabética.
	printf("Em ordem alfabética:\n");
	if (strcmp(umNome, outroNome) < 0){
		printf("%n\n%s\n", umNome, outroNome);
	}else{
		printf("%s\n%s\n", outroNome, umNome);
	}
}
	
