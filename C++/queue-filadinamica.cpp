#include <iostream>
#include <cstddef>
//NULL//
#include <new>


using namespace std;

typedef int TipoItem;
/* O typedef é muito util pois nesse caso estamos trabalhando com 
uma fila em int, no entanto caso seja desejada uma mudança no tipo de fila
ou pilha, basta-se mudar o tipo de typedef.*/
struct No{

	TipoItem valor;
	No* prox;
};
// Fila Dinâmica = Dynamic queue
class filadinamica{
	private:
	int tamanho=0;
	No*primeiro;
	No*ultimo;
		
	public:
	filadinamica()
	{
		primeiro=NULL;
		ultimo=NULL;
		tamanho=0;
	}
	~filadinamica()
	{
		No*temp;
		while(primeiro!=NULL){
			temp = primeiro;
			primeiro=primeiro->prox;
			delete temp;
		}
		ultimo = NULL;
		tamanho=0;
	}
	bool cheia()
	{
		No* temp;
		try{
			temp = new No;
			delete temp;
			return false;
		}catch(bad_alloc exception){
			return true;
		}
	}
	bool vazia()
	{
		return(primeiro==NULL);
	}
	void inserir(TipoItem item){
		tamanho++;
		if(cheia()){
			cout << "\nA Fila esta cheia!/nNao eh possivel inserir esse elemento!/n";
		}else{
			No* novo = new No;
			novo->valor=item;
			novo->prox = NULL;
			if (primeiro==NULL){
				primeiro = novo;
			}else{
				ultimo->prox = novo;
			}
			ultimo = novo;
		}
	}
	TipoItem remover(){
		tamanho--;
		TipoItem item;
		if(vazia()){
			cout <<"\nA fila esta vazia!\nNao existe elemento a se remover!" << endl;
			return 0;
		}else{
			No* temp =primeiro;
			item= primeiro->valor;
			if(primeiro==NULL){
				ultimo = NULL;
			}
			primeiro = primeiro->prox;
			delete temp;
		}
		return item;
	}
	void imprimir(){
		No* temp = primeiro;
		cout <<"\nFila= [ ";
		while(temp!=NULL){
			cout << temp->valor << " ";
			temp =temp->prox;
		}
		cout << " ]"<< endl;
	}
	int tamanhofila(){
		return tamanho;
	}
};
int main(){
	filadinamica fila_1;
	int opcao;
	TipoItem item;
	
	cout << "\n\n    FILA    \n\n";
	do{
		cout << "Digite 0 para parar o programa!" << endl;
		cout << "Digite 1 para inserir um elemento na fila!" << endl;
		cout << "Digite 2 para remover um elemento na fila!" << endl;
		cout << "Digite 3 para imprimir a fila!" << endl;
		cout << "Digite 4 para ver o tamanho da fila!" << endl;
		cin >> opcao;
		if(opcao ==1){
			cout << "\nElemento: ";
			cin >> item;
			fila_1.inserir(item);
		}else if(opcao ==2){
			cout << "\nO elemento " << fila_1.remover() << " foi removido!\n";
		}else if(opcao ==3){
			fila_1.imprimir();
		}
		else if(opcao ==4){
			cout << "\nO tamanho da Fila eh: "<< fila_1.tamanhofila() << endl;
		}
	}while(opcao>0&&opcao<=4);
	
	return 0;
}
