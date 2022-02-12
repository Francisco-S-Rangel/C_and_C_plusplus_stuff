#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int numero1= 0, numero2= 0;
	
	cout << "Esses software tem como função calcular a media de suas notas e entao responder se voce foi ou nao aprovado \n";
	cout << "Insira a nota da primeira prova ! \n";
	cin >> numero1;
	cout <<"Insira a nota da segunda prova ! \n";
	cin >> numero2;
	
	if((numero1+numero2)/2 >= 6){
		cout <<"Parabens voce foi aprovado \n";
	} else if ((numero1+numero2)/2<6) {
		
		cout <<"infelizmente sua nota foi insuficiente e voce esta reprovado \n ";
	}
	
	system("pause");
	return 0;
}
