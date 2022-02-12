#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a=0,b=0,c=0,d=0;
	
	cout << "Ola esse programa tem como objetivo calcular o preco total de sua compra \n";
	cout << "Escolha o codigo do produto e entao informe a quantidade escolhida \n ";
	
cout <<"Codigo do produto  Preco unitário \n";
cout <<"1"<<"-"<<"R$32,00"<<"\n";
cout <<"2"<<"-"<<"R$45,00"<<"\n";
cout <<"3"<<"-"<<"R$37,00"<<"\n";
cout <<"4"<< "-"<<"R$33,00"<<"\n";

     cout << "Insira a quantidade do produto (1) que voce pegou : ";
     cin >> a;
     cout << "Insira a quantidade do produto (2) que voce pegou : ";
 	 cin >> b;
 	 cout << "Insira a quantidade do produto (3) que voce pegou : ";
 	 cin >> c;
 	 cout << "Insira a quantidade do produto (4) que voce pegou : ";
 	 cin >> d;
 	
 	cout << "\n";
 	cout << "A quantidade comprada do produto (1) eh : " << a << "\n";
 	cout << "E o valor total do produto (1) eh : R$" <<(a*32)<<"\n";
 	cout << "A quantidade comprada do produto (2) eh : " << b << "\n";
 	cout << "E o valor total do produto (2) eh : R$" <<(b*45)<<"\n";
 	cout << "A quantidade comprada do produto (3) eh : " << c << "\n";
 	cout << "E o valor total do produto (3) eh : R$" <<(c*37)<<"\n";
 	cout << "A quantidade comprada do produto (4) eh : " << d << "\n";
 	cout << "E o valor total do produto (4) eh : R$" <<(d*33)<<"\n"<<"\n";
 	cout << "O preco total de sua compra eh : R$" << (a*32)+(b*45)+(c*37)+(d*33) <<"\n";
 	
 	

	
	
	system ("pause");
	return 0;
}
