#include <iostream>

using namespace std;

class Aluno{
	private:
		int ra;
		string nome;
		
	public:
		Aluno(){
			ra=-1;
			nome=" ";
		}
		Aluno(int r,string n){
			ra=r;
			nome=n;
		}
		int getRA(){
			return ra;
		}
		string getNome(){
			return nome;
		}
};

class Hash{
	private:
	  int FuncaoHash(Aluno aluno){
       	return(aluno.getRA() % max_posicoes);
	  }
	  int max_itens;
	  int max_posicoes;
	  int quant_itens;
	  Aluno* estrutura;
	  
	public:
		Hash(int tam_vetor, int max){
		  quant_itens=0;
		  max_itens= max;
		  max_posicoes= tam_vetor;
		  estrutura = new Aluno[tam_vetor];
		}
		~Hash(){
			delete [] estrutura;
		}
		bool cheia(){
			return (quant_itens==max_itens);
		}
		bool vazia(){
			return(quant_itens==0);
		}
		int getTamanhoAtual(){
			return (quant_itens);
		}
		void inserir(Aluno aluno){
			if(cheia()){
				cout << "\nA tabela Hash esta cheia!\n";
				cout <<"\nO Elemento nao pode ser inserido!\n";
			}else{
			int local = FuncaoHash(aluno);
			while(estrutura[local].getRA()>0){
				local=(local+1)%max_posicoes;
			}
			estrutura[local]=aluno;
			quant_itens++;
		}
		}
		void deletar(Aluno aluno){
			int local = FuncaoHash(aluno);
			bool teste = false;
			while(estrutura[local].getRA() != -1){
				if(estrutura[local].getRA()==aluno.getRA()){
					cout <<"\nElemento removido!"<<endl;
				    estrutura[local]= Aluno(-2, " ");
			        quant_itens--;
			        teste=true;
			        break;
				}
				local=(local+1) % max_posicoes;
			}
			if(!teste){
				cout<<"\nElemento nao existe na Tabela!"<<endl;
				cout<<"\nNenhum elemento foi removido!\n";
			}
		
		}
		void buscar(Aluno& aluno,bool& busca){
			int local= FuncaoHash(aluno);
			busca = false;
			while(estrutura[local].getRA()!= -1){
				if(estrutura[local].getRA()==aluno.getRA()){
					busca=true;
					aluno=estrutura[local];
					break;
				}
				local=(local+1)%max_posicoes;
			}
		}
		void imprimir(){
			cout << "\n\nTabela Hash\n\n";
			
			for(int i=0;i<max_posicoes;i++){
				if(estrutura[i].getRA() > 0){
					cout << i << ": " << estrutura[i].getRA();
					cout <<"  " << estrutura[i].getNome() << endl;
			    }
			}
		}
};
int main(){
	
	int tam_vetor,max,opcao,ra;
	string nome;
	bool busca;
	
	cout << "Programa gerador de Hash sem colisao!\n\n\n" << endl;
	cout<<"Digite o tamanho da Tabela Hash: ";
	cin >> tam_vetor;
	cout<<"Digite o numero maximo de elementos: " << endl;
	cin>> max;
	cout << "O fator de carga e: " << (float)max / (float)tam_vetor << endl;
	Hash alunohash(tam_vetor, max);
	do{
		cout<< "Digite 0 para parar o programa!\n";
		cout<< "Digite 1 para inserir um elemento!\n";
		cout<< "Digite 2 para remover um elemento!\n";
		cout<< "Digite 3 para buscar um elemento!\n";
		cout<< "Digite 4 para imprimir a Hash!\n";
		cin >> opcao;
		if(opcao == 1){
			cout << "Qual e o RA do aluno: \n";
			cin >> ra;
			cout << "Qual e o nome do aluno: \n";
			cin >> nome;
			Aluno aluno(ra,nome);
			alunohash.inserir(aluno);
			
		}else if(opcao ==2){
			cout << "Qual e o RA do aluno a ser removido: \n";
			cin >> ra;
			Aluno aluno(ra, " ");
			alunohash.deletar(aluno);
			
		}else if(opcao==3){
			cout << "Qual e o RA do aluno a ser buscado: \n";
			cin >> ra;
			Aluno aluno(ra," ");
			alunohash.buscar(aluno, busca);
			if (busca){
				cout << "Aluno encontrado: \n";
				cout << " RA: "<< aluno.getRA() << " Nome: " << aluno.getNome() <<"\n"<< endl;
			}else{
				cout << "Aluno nao encontrado!\n\n";
			}
		}else if(opcao==4){
			alunohash.imprimir();
		}
	}while(opcao>0&&opcao<5);
	
	return 0;
}
