#include <iostream>
#include <cstddef>

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
		string getNome(){
			return nome;
		}
		int getRA(){
			return ra;
		}
};
struct No{
	Aluno aluno;
	No*filhoesquerda;
	No*filhodireita;
};
class ArvoreBinariaBusca /*BST = Binary Search Tree*/ {
	private:
		No*raiz;
	public:
		ArvoreBinariaBusca(){
			raiz = NULL;
		}
		~ArvoreBinariaBusca(){
			deletarArvore(raiz);
		}
		void deletarArvore(No*Atual){
			if(Atual!=NULL){
				deletarArvore(Atual->filhoesquerda);
				deletarArvore(Atual->filhodireita);
				delete Atual;
			}
		}
		No* getraiz(){
			return raiz;
		}
		bool vazio(){
			return(raiz==NULL);
		}
		bool cheio(){
			try{
				No*temp= new No;
				delete temp;
				return false;
			}catch(bad_alloc expection){
				return true;
			}
		}
		void inserir(Aluno aluno){
			if(cheio()){
				cout<<"\nA Arvore esta cheia!\n";
				cout<<"\nNao eh ´possivel inserir esse elemento!\n";
			}else{
				No* Novo = new No;
				Novo->aluno=aluno;
				Novo->filhoesquerda=NULL;
				Novo->filhodireita=NULL;
				if(raiz==NULL){
					raiz=Novo;
				}else{
					No*temp=raiz;
					while(temp!=NULL){
						if(aluno.getRA()<temp->aluno.getRA()){
							if(temp->filhoesquerda==NULL){
								temp->filhoesquerda=Novo;
								break;
							}else{
							    temp = temp->filhoesquerda;
							}
						}else{
							if(temp->filhodireita==NULL){
								temp->filhodireita=Novo;
								break;
							}else{
								temp = temp->filhodireita;
					    }
						}
					}
				}
			}
		}
		void remover(Aluno objeto){
			busca_remover(objeto, raiz);
		}
		void busca_remover(Aluno objeto,No*&Atual){
			if(objeto.getRA() < Atual->aluno.getRA()){
				busca_remover(objeto, Atual->filhoesquerda);
			}else if(objeto.getRA() > Atual->aluno.getRA()){
					busca_remover(objeto, Atual->filhodireita);
			}else{
				deletar_no(Atual);
			}
		}
		void deletar_no(No*&Atual){
			No* temp = Atual;
			if(Atual->filhoesquerda==NULL){
				Atual = Atual->filhodireita;
				delete temp;
			} else if(Atual->filhodireita==NULL){
				Atual = Atual->filhoesquerda;
				delete temp;
			}else{
				Aluno AlunoSucessor;
				getSucessor(AlunoSucessor, Atual);
				Atual->aluno = AlunoSucessor;
				busca_remover(AlunoSucessor, Atual->filhodireita);
			}

		}
		void getSucessor(Aluno& Sucessor, No* temp){
			temp=temp->filhodireita;
			while(temp->filhoesquerda!=NULL){
				temp=temp->filhoesquerda;
			}
			Sucessor = temp->aluno;
		}
		void buscar(Aluno& objeto,bool& busca){
			busca = false;
			No* Atual=raiz;
			while(Atual != NULL){
				if(objeto.getRA()<Atual->aluno.getRA()){
					Atual = Atual->filhoesquerda;
				} else if(objeto.getRA()>Atual->aluno.getRA()){
					Atual = Atual->filhodireita;
				} else{
					busca=true;
					objeto = Atual->aluno;
					break;
				}
			}
		}
		void imprimir_preordem(No*Atual){
			if(Atual!= NULL){
				cout << Atual->aluno.getNome() << " : ";
				cout << Atual->aluno.getRA() << "\n";
				imprimir_preordem(Atual->filhoesquerda);
				imprimir_preordem(Atual->filhodireita);
			}
		}
		void imprimir_ordem(No*Atual){
			if(Atual!= NULL){
				imprimir_ordem(Atual->filhoesquerda);
				
				cout << Atual->aluno.getNome() << " : ";
				cout << Atual->aluno.getRA() << "\n";
				
				imprimir_ordem(Atual->filhodireita);
			}
		}
		void imprimir_posordem(No*Atual){
			imprimir_posordem(Atual->filhoesquerda);
			imprimir_posordem(Atual->filhodireita);
			
			cout << Atual->aluno.getNome() << " : ";
			cout << Atual->aluno.getRA() << "\n";
		}
};
int main(){
	ArvoreBinariaBusca alunos;
	int opcao,ra,imp;
	string nome;
	bool busca = false;
	
	cout << "Arvore Binaria\n\n\n";
	do{
		cout << "Digite 0 para parar o algoritmo!\n";
		cout << "Digite 1 para inserir um elemento!\n";
		cout << "Digite 2 para remover um elemento!\n";
		cout << "Digite 3 para realizar a busca de um elemento!\n";
		cout << "Digite 4 para imprimir a arvore!\n";
		cin >> opcao;
	
	if(opcao==1){
		cout<<"Digite o nome do aluno:\n";
		cin >> nome;
		cout<<"Digite o RA do aluno:\n";
		cin >> ra;
		Aluno aluno(ra,nome);
		if(alunos.cheio()){
			cout << "A Arvore esta cheia!\n";
			cout << "Nao foi possivel inserir esse elemento!\n";
		}else{
			alunos.inserir(aluno);
		}	
	}else if(opcao==2){
		cout << "Digite o RA do aluno a ser removido:\n";
		cin >> ra;
		Aluno aluno(ra," ");
		alunos.remover(aluno);
	}else if(opcao==3){
		cout << "Digite o RA do aluno a ser buscado:\n ";
		cin>> ra;
		Aluno aluno(ra," ");
		alunos.buscar(aluno,busca);
		if(busca){
			cout<<"Elemento encontrado!\n";
			cout<<"Nome: "<<aluno.getNome()<< endl;
			cout<<"RA: " <<aluno.getRA() << endl;
		}else{
			cout<<"Elemento nao encontrado!\n";
		}	
	}else if(opcao==4){
		cout<<"Digite 1 para fazer a impressao em pre ordem!\n";
		cout<<"Digite 2 para fazer a impressao em ordem!\n";
		cout<<"Digite 3 para fazer a impressao em pos ordem!\n";
		cin>>imp;
		if(imp==1){
			alunos.imprimir_preordem(alunos.getraiz());
		}else if(imp==2){
			alunos.imprimir_ordem(alunos.getraiz());
		}else if(imp==3){
			alunos.imprimir_posordem(alunos.getraiz());
		}
		
	}
	
	}while(opcao>0&&opcao<5);
	
	return 0;
}
