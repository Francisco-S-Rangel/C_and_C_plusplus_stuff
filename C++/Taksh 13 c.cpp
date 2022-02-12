#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	int valor=0,cem=0,cinquenta=0,dez=0,cinco=0,um=0;
	valor;
	cout << "Calculo do menor numeros de notas possiveis de R$100,R$50,R$10,R$5 e R$1. \n";
	cout << "Entre com o valor para a divisao ! \n";
	cout << "Obs: o valor nao pode ser menor que 1 !! \n";
	cin >> valor;
	
	if (valor<=0) {
		
	cout << "Obs: o valor nao pode ser menor que 1 !! \n";
	cout << "Reinicie o prosesso \n ";
	
	system("pause");
	return valor;
	}
	
	cem = valor / 100; 
	valor = valor % 100; 
    cinquenta = valor / 50; 
	valor =  valor % 50; 
	dez = valor / 10; 
	valor = valor % 10; 
	cinco= valor / 5; 
	valor = valor % 5; 
	um = valor / 1;
	
	
	cout <<"O menor numero possivel de notas de R$100 eh : " << cem << "\n";
	cout <<"O menor numero possivel de notas de R$50 eh : " << cinquenta << "\n";
	cout <<"O menor numero possivel de notas de R$10 eh : " << dez << "\n";
	cout <<"O menor numero possivel de notas de R$5 eh : " << cinco << "\n";
	cout <<"O menor numero possivel de notas de R$1 eh : " << um << "\n";
	
	system("pause");
	return 0;
}
