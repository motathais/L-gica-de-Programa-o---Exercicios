#include<iostream>
#include<cstdlib>

/*
6�) Criar um programa que receba um n�mero que corresponda a um m�s do 1� trimestre e escreva o m�s 
correspondente; caso o usu�rio digite o n�mero fora do intervalo dever� aparecer inv�lido, mas utilizando 
uma fun��o do tipo void.
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
	

