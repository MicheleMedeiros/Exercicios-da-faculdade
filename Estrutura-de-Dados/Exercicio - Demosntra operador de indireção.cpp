//Demosntra operador de indireçãõ

#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int *pn = &n;
	int **ppn = &pn;

	cout << "Valor de n: \ n" << endl;
	cout << "Valor direto:" << n << endl;
	cout << "Valor indireto:" << *pn << endl;
	cout << "Valor duplamente indireto" << ** ppn << endl;
	cout << "endereço de n:" << pn << endl;
	cout << "endereço de n via indireto:" << *ppn << endl;

}
