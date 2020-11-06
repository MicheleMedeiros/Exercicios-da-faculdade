#include <iostream>
#include <conio.h>

//using namespace std;j

int main(){
	char c;
	
	//Aparece a tecla que voce apertou
	printf("Pressione uma tecla:");
	c = getche();
	
	printf("\nLeitura feita con getche() \n\n");
	
	// Nao aparece a tecla que voce apertou
	printf("Pressione novamente uma tecla: ");
	c = getch();
	
	printf("\nLeitura feita con getche()");
	getch();
	
}

