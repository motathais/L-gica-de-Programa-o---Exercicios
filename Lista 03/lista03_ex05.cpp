#include<iostream>
#include<cstdlib>

/*
5ª) Criar um programa que mostre qual o maior valor entre dois números, utilizando uma função do tipo void 
(que não retorna valores).
*/

using namespace std;

void maior(int v1, int v2);

int main(){
	
	int v1, v2;
	
	cout << "Informe o valor 1:"<<endl;
	cin >> v1;
	
	cout<< "Informe o valor 2:"<<endl;
	cin >> v2;
	
	while(v1 == v2){
		cout << "Os valores sao iguais! Informe novamente"<< endl;
		
		cout << "Informe o valor 1:"<<endl;
		cin >> v1;
	
		cout<< "Informe o valor 2:"<<endl;
		cin >> v2;
	}
	
	maior(v1, v2);
	
	return 0;
}

void maior(int num1, int num2){
	
	int maior;
	
	if(num1> num2){
		maior = num1;
	}
	else{
		maior = num2;
	}	
	
	cout <<"O maior valor e: " << maior <<endl;
}



