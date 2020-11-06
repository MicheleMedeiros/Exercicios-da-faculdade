#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

typedef struct data {
	char dia;
	char mes;
	int ano;
	
} Data;

typedef struct aniversario{
	char nome[50];
	Data nascimento;
	
} Aniversario;

int main() {
	
	Aniversario alguem;
	
	cout << "Digite seu Nome:" << endl;
	cin.getline (alguem.nome, 50);
	 
	cout << "Digite seu Dia de Nascimento:" << endl;
	cin >> alguem.nascimento.dia;
	
	cout << "Digite seu Mes de Nascimento:" << endl;
	cin >> alguem.nascimento.mes;
	
	cout << "Digite o Ano de Nascimento:" << endl;
	cin >> alguem.nascimento.ano;
	
	
	system("cls");
	
	
	cout << alguem.nome << endl;
	cout << "nasceu em" << endl;
	cout << alguem.nascimento.dia<<"/";
	cout << alguem.nascimento.mes<<"/";
	cout << alguem.nascimento.ano<< endl;

	return 0;
	
} 
