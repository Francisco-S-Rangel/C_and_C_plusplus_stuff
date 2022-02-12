#include <iostream>

using namespace std;

typedef int TipoItem; // tipo de variavel da pilha 
const int max_itens = 100;

class pilha{
    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha()
	{
		tamanho = 0;
		estrutura =new TipoItem[max_itens];
		
	}; // construtura 
    ~pilha()
	{
		delete [] estrutura;
	}; // destrutora 
    bool cheia()
	{
		return(tamanho == max_itens);
	}; // verificar se a pilha está cheia 
    bool vazia()
	{
		return(tamanho==0);
	}; // verifica se a pilha está vazia
    void inserir (TipoItem dado)
	{
		if(cheia()){
			cout << "A pilha esta cheia!";
			cout << "Nao eh possivel inserir esse elemento!\n";
		} else{
			estrutura[tamanho] =  dado;
			tamanho++;
		}
		
	}; // push 
    TipoItem remover()
	{
		if(vazia()){
			cout << "\nA pilha esta vazia!\n";
			cout << "\nNao eh possivel retirar nenhum elemento da mesma!\n";
			return 0;
		}else{
			tamanho --;
			return estrutura[tamanho];
		}
	}; // pop 
    void imprimir()
	{
		cout << "Pilha = [";
		cout << estrutura[0];
		for (int i=1; i <tamanho; i++){
			cout  << ", "<< estrutura[i] ;
		}
		cout << "]\n";
	}; // printf
    int tamanho_pilha()
	{
		return tamanho;
	};//lenght 
	int maior(){
	int maior=0;
    for(int i=0;i<tamanho;i++){
    	if(maior < estrutura[i]){
    		maior = estrutura[i];
		}
	}
	   return maior;
	};
	int menor(){
		int menor = 100000;
		for(int i=0;i<tamanho;i++){
			if(menor > estrutura[i]){
				menor = estrutura[i];
			}
		}
		return menor;
	}
	void verificar(int elemento){
		int aux=0;
		for(int i=0;i<tamanho;i++){
			if(elemento==estrutura[i]){
				aux++;
			}
		}
		if (aux>0){
			cout << "\nO elemento " << elemento << " existe na pilha!\n" << endl;
		}else{
			cout <<  "\nO elemento " << elemento << " nao existe na pilha!\n" << endl;
		}
	}
};
int main(){
	pilha P;
	TipoItem item;
	int opcao;
	cout << "Programa gerador de piilha(stacks): \n";
	
	do{
		cout << "Digite 0 para parar o programa!\n";
		cout << "Digite 1 para inserir elementos!\n";
		cout << "Digite 2 para remover um elemento!\n";
		cout << "Digite 3 para imprimir a pilha!\n";
		cout << "Digite 4 para ver o tamanho da pilha!\n";
		cout << "Digite 5 para ver o maior elemento da pilha!\n";
		cout << "Digite 6 para ver o menor elemnto da pilha!\n";
		cout << "Digite 7 para verificar um elemento na pilha!\n";
		cout << "Insira a opcao escolhida: ";
		cin >> opcao;
		if(opcao <=0){
			cout << "\n\n FIM !!" << endl;
			opcao=8;
		}else if(opcao==1){
			cout << "Digite o elemento a ser incerido: ";
			cin >> item ;
			P.inserir(item);
		}else if(opcao==2){
			if (P.vazia()){
				P.remover();
			}else{
		    item = P.remover();
		    cout << "\nO elemento removido foi : " << item << "\n";
		    }
		}else if(opcao==3){
			P.imprimir();
		}else if(opcao==4){
			cout << "\nO tamanho da pilha eh: " << P.tamanho_pilha() << "\n";
		}else if(opcao==5){
			cout << "\nO maior elemento eh: " << P.maior() << "\n";
		}else if(opcao==6){
			cout << "\nO menor elemento eh: " << P.menor() << endl;
		}else if(opcao==7){
			cout << "Digite o elemento a ser verificado: ";
			cin >> item;
			P.verificar(item);
		}
	}while(opcao<=7);
	
	return 0;
}
