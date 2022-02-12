#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int valor1=0, valor2=0;
	
	cout << "Os numeros que voce inserir seram colocados em ordem crescente e decrescente \n";
	cout << "Insira o primeiro valor:";
	cin >> valor1;
	cout << "Insira o segundo valor: ";
	cin >> valor2;
	
	cout << "Esses sao os valores em ordem crescente \n";
	if (valor1>valor2) {
		
		cout << valor2 << "\n" << valor1<<"\n";
	
	}else if(valor2>valor1) {
		
	cout << valor1 << "\n" << valor2<< "\n";
	
	}
	
	cout<<" Esses sao os valores em ordem decrescente \n";
	if(valor1>valor2) {
		cout << valor1 << "\n" << valor2 << "\n";
	}
	else if(valor2>valor1){
		cout << valor2 << "\n" << valor1 << "\n";
	}
	
	
	
	system("pause");
	return 0;
}

