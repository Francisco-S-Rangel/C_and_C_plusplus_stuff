#include <iostream>

using namespace std;

int main(int argc, char** argv) {
int x=0,y=0,z=0;

cout << "Vamos descobrir se as medidas formam um triangulo e classificalo \n";
cout << "Digite o primeiro lado : ";
cin >> x;
cout << "Digite o segundo lado : ";
cin >> y;
cout << "Digite o terceiro lado : ";
cin >> z;

if (x==0 || y==0 || z==0) {
	
	cout <<"Devido a um lado nao existir, o mesmo nao e um triangulo";
}

if (x==y and y==z) {
	
	cout << "Eh um triangulo equilatero \n";
	
}else if (x==y || x==z || y==z ) {
	
	cout << "Eh um triangulo isosceles \n" ;
} else if (x!=y || x!=z || y!=z ) {
	
	cout << "Eh um triangulo escalo \n" ;
}

system ("pause");
	return 0;
}
