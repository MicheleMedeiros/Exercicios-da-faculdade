#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <locale> //acentos de portugues


typedef struct {
	int matricula;
	char nome[100];
	float nota01;
	float nota02;
} Aluno;

#define QUANTIDADE_DE_ALUNOS 2

using namespace std;

int main (int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	Aluno alunos[QUANTIDADE_DE_ALUNOS];
	
	cout << "Dados: nome(sem espacos), matricula, nota1, nota2\n" << endl;
	
	for(int i=0; (i < QUANTIDADE_DE_ALUNOS); i++){
		
		cout<< "\nInforme os dados do aluno" << i+1 << ":" <<endl;
				cin>> alunos[i].nome;
				cin>> alunos[i].matricula;
				cin>> alunos[i].nota01;
				cin>> alunos[i].nota02;
	}
	
	cout<< "\nMatricula\tNome\tMedia \n" << endl;
	
	for(int i=0; (i < QUANTIDADE_DE_ALUNOS); i++){
		
		cout<<alunos[i].matricula<<"\t\t"<<alunos[i].nome<<"\t\t"
		<<(alunos[i].nota01 + alunos[i].nota02)/2 << endl;
	}
	
	return 0;
}
