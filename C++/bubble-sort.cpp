#include <iostream>

using namespace std;

void bubble(int vetor[],int n){
	int k = n;
	int aux=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			if(vetor[j] > vetor[j+1]){
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1] = aux;
			}
		}
		k--;
	}

}
int main(){
	int vetor[9]={9,3,2,98,54,2,476,32,346};
	int n=10;
	bubble(vetor,n);

	cout << "\n\n\n"<<endl;
	
	
	for(int i=0;i<10;i++){
			cout << vetor[i] << " " ;
	}
	
	cout << "\n\n\n"<<endl;
	
	
	return 0;
}
