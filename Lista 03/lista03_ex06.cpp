#include<iostream>
#include<cstdlib>

/*
6ª) Criar um programa que receba um número que corresponda a um mês do 1º trimestre e escreva o mês 
correspondente; caso o usuário digite o número fora do intervalo deverá aparecer inválido, mas utilizando 
uma função do tipo void.
*/

using namespace std;

void mes(int num_mes);

int main(){
	int valor;
	
	cout << "Informe um numero correspondente ao primeiro trimestre:"<<endl;
	cin >> valor;
	
	mes(valor);
	
	return 0;
	
}

void mes(int num_mes){
	
		if (num_mes == 1){
			cout << "Janeiro"<<endl;
		}
		else{
			if(num_mes == 2){
				cout << "Feveireiro"<<endl;
			}
			else{
				if(num_mes == 3){
					cout << "Marco"<< endl;
				}
				else{
					cout <<"Valor Invalido";
				}
				
			}
		}
	}
	

