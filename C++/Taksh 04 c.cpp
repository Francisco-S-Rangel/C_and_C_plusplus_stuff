#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int valor;
	
	cout << "Insira qualquer valor e entao verificaremos se eh par ou impar \n ";
	cin >> valor;
	
		if (valor % 2 == 0  ) {
		
		cout << "O valor escolhido eh par \n";
	}else if(valor % 2 ==1) {
		
		cout << "O valor escolhido eh impar \n";
	}
	
	system("pause");
	return 0;
}
