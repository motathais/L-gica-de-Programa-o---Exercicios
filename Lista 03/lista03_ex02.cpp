#include<iostream>
#include<cstdlib>

/*
2ª) Criar um programa que receba 4 notas e calcule a média aritmética, através de uma função;
*/

using namespace std;

float media(float valores[4]);

int main(){
	
	float nota[4];
	int i;
	
	for (i = 0; i < 4; i++ ){
		cout << "Digite a nota " << i + 1 <<endl;
		cin >> nota[i];
	}
	
	cout << "A media e: "<< media(nota);
	
}

float media(float valores[4]){
	int i; 
	float soma = 0;
	for(i = 0; i < 4; i++){
		
	soma = soma + valores[i];
	
	}

	return (soma/4);
}
