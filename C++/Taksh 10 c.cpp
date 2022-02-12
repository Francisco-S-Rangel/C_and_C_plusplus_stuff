#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float saldo=0;
	
	cout << "Iremos calcular o valor de credito o qual voce pode ter acesso \n";
	cout << "Digite seu saldo na linha abaixo \n";
	cin >> saldo;
	
	if(saldo<=200) {
		
		
	cout << "Devido a seu saldo ser baixo voce nao tem acesso a credito \n";
	cout << "Saldo de : " << saldo << "$";
		
	}else if (saldo>200 and saldo<=400 ){
		
    cout << "O valor de credito disponivel eh : " << saldo/5 << "$";
	cout << "Saldo de : " << saldo << "$"<< "\n";
			
	} else if (saldo>400 and saldo<=600)
	{
		
	cout << "O valor de credito disponivel eh : " << saldo* 0.30 << "$"<<"\n"<< "Saldo de : " << saldo << "$";
		
		
	}else if (saldo>600){
		
	cout << "O valor de credito disponivel eh : " << saldo*0.40 << "$"<<"\n" << "Saldo de : " << saldo << "$";
		
	}
	
	
	
	return 0;
}
