#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a=0,b=0,c=0,aux=0;
	
	cout << "Vamos manipular variaveis \n";
	cout << "Entre com o valor da primeira variavel \n";
	cin >> a;
	cout << "Entre com a segunda variavel \n";
	cin >> b;
	cout << "Entre com a terceira variavel \n";
	cin >> c;
	
	cout << "Veja as variaveis apos manipulacao a baixo \n";
	cout << "Da menor para a maior ! \n";
	 
	 if(a==b and b==c) {
    
    cout << "Obs: Caso os tres valores que voce digitou sejam o mesmo \n" << "Nao havera manipulacao \n";
	}
	if(b>c and c>a) {
		
		aux=b;
		b=c;
		c=aux;
		
	}
    if (b>a and a>c ) {
    	
    	aux=a;
    	a=c;
    	c=b;
    	b=aux;
    }
    if(c>a and a>b ) {
    	
    	aux=b;
    	b=a;
    	a=aux;
   	} 
   	
    if(a>c and c>b) 
{
    aux=b;
   	b=c;
   	c=a;
   	a=aux;
}
	
    if (a>c and b>c) {
    	
    	aux=a;
    	a=c;
    	c=aux;
    	
	}
    
	cout << a << "\n";
	
	cout << b << "\n";
	
    cout << c << "\n";	


  
    
	
	system("pause");
	return 0;
}
