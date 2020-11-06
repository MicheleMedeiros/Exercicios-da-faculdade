#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void troca (int a, int b){
	
	int temp;
	temp=a;
	a=b;
	b=temp;	
}

int main (){
	
	int a=2, b=3;
	cout<<"Antes de chamar a funcao: \na="<<a<<"\nb="<<b<<endl;
	troca(a,b);
	cout<<"Antes de chamar a funcao: \na="<<a<<"\nb="<<b<<endl;
	return 0;
}

