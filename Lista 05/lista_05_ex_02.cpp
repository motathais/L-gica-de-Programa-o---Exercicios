#include <iostream>
#include <Pilha.H>

/*
2.ª) Criar um programa em C++ que apresente as operações básicas da estrutura de 
dados Pilha, da seguinte maneira:
 Menu de opções
1. Inserir um número inteiro na Pilha
2. Remover um elemento da Pilha
3. Mostrar o elemento do topo da Pilha
4. Mostrar os elementos da Pilha
5. Sair
Obs.: Utilizar a instrução Switch para criar o menu
*/

using namespace std;

void menu(int n);

int main()
{
	
	int x;
	
	cout <<"Selecione uma opcao: \n"; 
	cout << "1 - Inserir um numero inteiro na Pilha \n";
	cout << "2 - Remover um elemento da Pilha \n";
	cout << "3 - Mostrar o elemento do topo da Pilha \n";
	cout << "4 - Mostrar os elementos da Pilha \n";
	cout << "5 - Sair \n";
	cout << "\n";
	
	cin >> x;
	
	menu(x);
	
	return 0;
	
}
	
	
void menu(int n)
{
		
	system("cls");
	struct Pilha P1;
	IniPilha(&P1);
		
	int a;
		
		inicio_menu:
			
		switch (n){
			
			case(1):
				cout <<"Digite um numero: \n";
				cin >> a;
				Push(&P1, a);
				cout << "O elemento " << a << " foi inserido com sucesso!\n";
				cout <<"\n";
			
				cout <<"Selecione uma nova opcao: \n"; 
				cout << "1 - Inserir um numero inteiro na Pilha \n";
				cout << "2 - Remover um elemento da Pilha \n";
				cout << "3 - Mostrar o elemento do topo da Pilha \n";
				cout << "4 - Mostrar os elementos da Pilha \n";
				cout << "5 - Sair \n";
				cout << "\n";
			
				cin >> n;
				goto inicio_menu;
									
			case(2):
				cout << "Opcao escolhida: 2 - Remover um elemento da Pilha \n";
				a = Pop(&P1);
				cout << "O elemento " << a << " foi removido\n";
				cout <<"\n";
			
				cout <<"Selecione uma nova opcao: \n"; 
				cout << "1 - Inserir um numero inteiro na Pilha \n";
				cout << "2 - Remover um elemento da Pilha \n";
				cout << "3 - Mostrar o elemento do topo da Pilha \n";
				cout << "4 - Mostrar os elementos da Pilha \n";
				cout << "5 - Sair \n";
				cout << "\n";
	
				cin >> n;
				goto inicio_menu;
			
			case(3):
				cout << "Opcao escolhida: 3 - Mostrar o elemento do topo da Pilha\n";
			
				a = Top(&P1);
				cout << "O elemento do topo da Pilha e: " << a <<"\n";
				cout << "\n";
			
				cout <<"Selecione uma nova opcao: \n"; 
				cout << "1 - Inserir um numero inteiro na Pilha \n";
				cout << "2 - Remover um elemento da Pilha \n";
				cout << "3 - Mostrar o elemento do topo da Pilha \n";
				cout << "4 - Mostrar os elementos da Pilha \n";
				cout << "5 - Sair \n";
				cout << "\n";
				
				cin >> n;
				goto inicio_menu;
				
			case(4):
				cout << "Opcao escolhida: 4 - Mostrar os elementos da Pilha\n";
				
				while (!pilhavazia(&P1))
				{	
					a = Pop(&P1);
					cout<<a<<"\n";	
				}
				
				cout <<"A pilha foi esvaziada"<<endl;
				
				cout <<"Selecione uma nova opcao: \n"; 
				cout << "1 - Inserir um numero inteiro na Pilha \n";
				cout << "2 - Remover um elemento da Pilha \n";
				cout << "3 - Mostrar o elemento do topo da Pilha \n";
				cout << "4 - Mostrar os elementos da Pilha \n";
				cout << "5 - Sair \n";
				cout << "\n";
				
				cin >>n;
				goto inicio_menu;
				
			case(5):
				cout << "O programa foi encerrado!";
			break;	
			
			default:
				cout << "Opcao Invalida!"<<endl;
				
				cout <<"Selecione uma nova opcao: \n"; 
				cout << "1 - Inserir um numero inteiro na Pilha \n";
				cout << "2 - Remover um elemento da Pilha \n";
				cout << "3 - Mostrar o elemento do topo da Pilha \n";
				cout << "4 - Mostrar os elementos da Pilha \n";
				cout << "5 - Sair \n";
				cout << "\n";
				
				cin >>n;
				goto inicio_menu;
				
		}		
}
	
