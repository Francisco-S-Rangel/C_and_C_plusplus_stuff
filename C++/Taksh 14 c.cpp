#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int maca=0;
	
	cout << "Esse programa tem como proposito calcular o preco total baseado na quantidade de macas \n";
	cout << "tabela de preco abaixo \n";
	cout << "Preco" << "-" << "Quantidae \n";
	cout << "R$1.30" << "-" << "menos de 12 \n";
	cout << "R$1.00" <<"-" << "12 ou mais \n";
	cout << "Entre com a quantidade que sera comprada : ";
	cin >> maca;
	
	if(maca<=11) {
		
		cout << "O preco total eh : R$" << maca * 1.30 << "\n";
		
	} else {
		
		cout <<"O preco total eh : R$" << maca * 1 << "\n";
	}
	
	system("pause");
	return 0;
}
