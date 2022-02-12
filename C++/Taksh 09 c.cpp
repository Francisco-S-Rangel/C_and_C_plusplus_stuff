#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int segundos=0;
	
	cout << "Iremos converter os segundos que voce digitar em minutos e horas \n";
	cout << "Caso o haver sobra de segundos tambem havera uma aba para mostrar esses segundos ";
	cout << "Entre com os segundos : ";
	cin >> segundos;
	cout << "O valor convertido estara logo abaixo \n";

	if (segundos< 60) {
		
		cout << segundos << "s" <<"\n";
	} else
    if (segundos >= 60 and segundos/60 < 60 ){
	
	cout << segundos/60<< "m"<< segundos % 60 << "s" << "\n";
} 
  else if (( segundos/60 )>= 60 and segundos >= 60 ) {
	
	cout << (segundos/60)/60<<"h"<< (segundos/60)%60 << "m"<< segundos%60 << "s" << "\n";
	}
		
   system ("pause");
	return 0;
}
