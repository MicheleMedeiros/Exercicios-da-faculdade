#define max 4

int main(int argc, char** argv) {

setlocal(lc_all, "portuguese")

int vet(max)
int vet2(max)
int numero = 0
int resto = 0


cout<< informe: <<endl;
cin>> numero

/*Aqui ele vai fazer o processo de armazenamento dos numeros digitados 1° 4224*/
for (int i =3 ; i>0; i --){
	resto = (numero % 10);
	vet[i] = resto;
	numero = (numero / 10);
}

cout << endl;
cout << endl;


/*Aqui ele vai pegar o numero digitado e traz pra frente pra ver se dá o mesmo numero 2° 4224*/
for(int i=0; i<max; i++){
	cout<< vet[i] << endl;
	vet2[max -1 -i] = vet[i];
}

cout << endl;
cout << endl;

/*Aqui ele vai fazer a validação se o numero é ou não polindromo*/
for(int i -0; i<(max/2); i++){
	if(vet[i] == vet2[i]){
		cout<< "o numero é polidromo" << endl;
	}else{
		cout<< " não e polindromo" << endl;
	}
}
return 0;
}

