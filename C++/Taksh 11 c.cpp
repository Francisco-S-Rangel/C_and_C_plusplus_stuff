#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i=0;
	float a=0,b=0,c=0;
	
	a;
	cout << "Algoritmo de conjunto de valores de variaveis \n";
	cout << "Entre com (1) para que as variaveis sejam escritas de forma crescente \n ";
	cout << "Entre com (2) para que as variaveis sejam escritas de forma decrescente \n";
	cout << "Entre com (3) para que as variaveis sejam escritas de forma que a maior fique no meio \n";
	cout << "Entre com o valor da opcao \n" << "Obs: O valor da opcao so pode ser 1,2 ou 3!!! \n";
	cin >> i;
    if ( i <= 0 || i>=4 ){
		
	cout << "O valor da opcao so pode ser 1,2 ou 3!!! \n" << "Reinicie o processo de maneira correta agora !!! \n";
	system("pause");
	return a;
	}
	
	cout << "Entre com o primeiro valor : ";
	cin >> a;
	cout << "Entre com o segundo valor : ";
	cin >> b;
	cout << "Entre com o terceiro valor : ";
	cin >> c;
	
	if(i==1 and a==b and b==c){
		
		cout<< "Valores digitados em ordem crescente \n";
		cout << a << "\n" << b << "\n" << c << "\n";
	} 
	else if (i==1 and a==b and b<c) {
	
	cout<< "Valores digitados em ordem crescente \n";
	cout << a << "\n" << b << "\n" << c << "\n";
	}
	else if (i==1 and a==c and b>c) {
	
	cout<< "Valores digitados em ordem crescente \n";
	cout << a << "\n" << c << "\n" << b << "\n";
	}
		else if(i==1 and a>b and b>c) {
		
		cout<< "Valores digitados em ordem crescente \n";
		cout << c << "\n" << b << "\n" << a << "\n";
		
	}
	 else if (i==1 and b==c and a>b) {
	
	cout<< "Valores digitados em ordem crescente \n";
	cout << c << "\n" << b << "\n" << a << "\n";
	}
	else if (i==1 and a>b and b>c ) {
		
		cout<< "Valores digitados em ordem crescente \n";
		cout << a << "\n" << c << "\n" << b << "\n";
	} 
	else if (i==1 and a>c and c>b) {
	
	cout<< "Valores digitados em ordem crescente \n";
	cout << b << "\n" << c << "\n" << a << "\n";
	}
	else if (i==1 and b>c and c>a) {
	
	cout<< "Valores digitados em ordem crescente \n";
	cout << a << "\n" << c << "\n" << b << "\n";
	}
	else if (i==1 and b>a and  a>c) {
	
	cout<< "Valores digitados em ordem crescente \n";
	cout << c << "\n" << a << "\n" << b << "\n";
	}
	else if (i==1 and c>b and b>a) {
	
	cout<< "Valores digitados em ordem crescente \n";
	cout << a << "\n" << b << "\n" << c << "\n";
	}
	else if (i==1 and c>a and a>b) {
	
	cout<< "Valores digitados em ordem crescente \n";
	cout << b << "\n" << a << "\n" << c << "\n";
	}
	
	if (i==2 and a==b and b==c) {
	
	cout << "Valores digitados em ordem decrescente \n";
		cout << b << "\n" << a << "\n" << c << "\n";
	
	}
	else if (i==2 and a==b and c>b) {
	
	cout << "Valores digitados em ordem decrescente \n";
		cout << b << "\n" << a << "\n" << c << "\n";
	
	}
	else if (i==2 and a==c and b>c) {
	
	cout << "Valores digitados em ordem decrescente \n";
		cout << b << "\n" << c << "\n" << a << "\n";
	
	}
	else if (i==2 and b==c and a>b) {
	
	cout << "Valores digitados em ordem decrescente \n";
		cout << a << "\n" << b << "\n" << c << "\n";
	
	}
	else if (i==2 and a>b and b>c) {
	
	cout << "Valores digitados em ordem decrescente \n";
		cout << a << "\n" << b << "\n" << c << "\n";
	
	}
	else if (i==2 and a>c and c>b) {
	
	cout << "Valores digitados em ordem decrescente \n";
		cout << a << "\n" << c << "\n" << b << "\n";
	
	}
	else if (i==2 and b>c and c>a) {
	
	cout << "Valores digitados em ordem decrescente \n";
		cout << b << "\n" << c << "\n" << a << "\n";
	
	}
	else if (i==2 and b>a and a>c) {
	
	cout << "Valores digitados em ordem decrescente \n";
		cout << b << "\n" << a << "\n" << c << "\n";
	
	}
	else if (i==2 and c>b and b>a) {
	
	cout << "Valores digitados em ordem decrescente \n";
		cout << c << "\n" << b << "\n" << a << "\n";
	
	}
	else if (i==2 and c>a and a>b) {
	
	cout << "Valores digitados em ordem decrescente \n";
		cout << c << "\n" << a << "\n" << b << "\n";
	
	}
	
	if (i==3 and a==b and b==c) {
	
	cout << "O maior valor estara no meio \n";
		cout << c << "\n" << a << "\n" << b << "\n";
	}
	else if (i==3 and a==b and c>b) {
		
		cout << "O maior valor estara no meio \n";
		cout << a << "\n" << c << "\n" << b << "\n";
	}
    else if (i==3 and a==c and b>c) {
		
		cout << "O maior valor estara no meio \n";
		cout << a << "\n" << b << "\n" << c << "\n";
	}
    else if (i==3 and b==c and a>c) {
		
		cout << "O maior valor estara no meio \n";
		cout << c << "\n" << a << "\n" << b << "\n";
	}
	else if (i==3 and a>b and b>c) {
		
		cout << "O maior valor estara no meio \n";
		cout << c << "\n" << a << "\n" << b << "\n";
	}
	else if (i==3 and a>c and c>b) {
		
		cout << "O maior valor estara no meio \n";
		cout << c << "\n" << a << "\n" << b << "\n";
	}
	else if (i==3 and b>c and c>a) {
		
		cout << "O maior valor estara no meio \n";
		cout << c << "\n" << b << "\n" << a << "\n";
	}
	else if (i==3 and b>a and a>c) {
		
		cout << "O maior valor estara no meio \n";
		cout << c << "\n" << b << "\n" << a << "\n";
	}
	else if (i==3 and c>b and b>a) {
		
		cout << "O maior valor estara no meio \n";
		cout << b << "\n" << c << "\n" << a << "\n";
	}
	else if (i==3 and c>a and a>b) {
		
		cout << "O maior valor estara no meio \n";
		cout << b << "\n" << c << "\n" << a << "\n";
	}

	
	system("pause");
	return 0;
}
