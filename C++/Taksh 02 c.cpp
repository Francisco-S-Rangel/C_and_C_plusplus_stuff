#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	int a=0,b=0,c=0,delta=0,resultado=0,resultado2=0;
	
	cout << "Vamos realizar um calculo de raiz quadrada \n";
	cout << "Entre com a Valor da variavel (a) : ";
	cin >> a;
	cout <<"Entre com o valor da variavel (b) : ";
	cin >> b;
	cout <<"Entre com o valor da variavel (c) : ";
	cin >> c;
	
	delta = (b * b)-4*(a*c);
	
	if( delta < 0) {
		
		cout << "Devido a o delta ser menor do que zero, nao existe raizes reais, portanto os resultados abaixo sao falsos \n";
	
	}else if( delta > 0) 
	{
			cout <<"Devido a o delta ser maior que zero, existe duas raizes reais \n";
		
	} else
	{
			cout <<"Devido a o delta ser igual a zero, existe uma raiz real \n ";
		
	}
	
	resultado=(-b + sqrt (delta))/(2*a);
	resultado2=(-b - sqrt (delta))/(2*a);
	
	
	
	cout <<"O resultado(s) dessa conta eh : " << resultado << "\n" <<"Esse eh o resultado da outra raiz( caso houver, se nao haver o resultado sera o mesmo acima ) : " << resultado2 << "\n";
	 
	system("pause");
	return 0;
}
