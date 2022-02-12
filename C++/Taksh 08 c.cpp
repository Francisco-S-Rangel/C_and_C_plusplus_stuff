#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float base=0,altura=0;
	
	cout<< "Vamos verificar se os valores formam um triangulo e calcular sua area \n";
	cout<< "Insira a base do triangulo : ";
	cin >> base;
	cout<< "Insira a altura do triangulo : ";
	cin >> altura;
	
	if (base<=0 ||altura<=0 ){
		
		cout << "Como o valor(es) do triangulo nao eh real(is) ou eh igual(is) a zero \n ";
		cout << "Entao nao existe um triangulo, portanto nao a area para calcular \n";
	}
    
    cout << "A area desse triangulo eh : " << (base*altura)/2 << "\n";
    
	
	system ("pause");
	return 0;
}
