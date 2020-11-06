#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void EsperaEnter(){ //definicao da funcao "EsperaEnter"

	int tecla;
	printf("Presione ENTER\n");
	do{
		tecla = getch();
		
		if (tecla !=13){ //se nao for ENTER
			Beep(5000,500); //Beep (frequencia em Hz, duracao em ms)
	}
	
	}
	while(tecla !=13); //13 e ' o codigo ASCII do ENTER
}

int main() {
		EsperaEnter(); //Chamada da funcao definida antes
		//..........
		EsperaEnter(); //Chamada da funcao definida antes
		//..........
		EsperaEnter(); //Chamada da funcao definida antes
		//..........
		
		return 0;
}

