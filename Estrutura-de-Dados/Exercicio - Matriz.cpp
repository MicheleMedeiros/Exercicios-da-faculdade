#include <iostream>
#include <string>
#include <cstdlib>
#include <locale> //biblioteca acentuada

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

#define MaxL 3
#define MaxC 3

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Português");
	
	int Matriz[MaxL] [MaxC];
	int Maior=0;
	int cont=0;
	int Mcont=0;
	cout<<"Informe os números:"<<endl;
	
	for(int i=0; i<MaxL; i++){
		for(int j=0; j<MaxC; j++){
			cin>>Matriz[i][j];
	
		}
	}
	
	cout<<endl;
	cout<<endl;
	
		for(int i=0; i<MaxL; i++){
			cout<<endl;
			for(int j=0; j<MaxC; j++){
				cout<<Matriz[i][j];
					cont = cont+1;
					if(Matriz[i][j] > Maior){
						Maior = Matriz[i][j];
						Mcont = cont;
					}
		}
	}
	cout<<endl;
	cout<< "O maior número é: " <<Maior <<endl;
	cout<< "O maior número está na posição: : " <<Mcont <<endl;
	return 0;
}
