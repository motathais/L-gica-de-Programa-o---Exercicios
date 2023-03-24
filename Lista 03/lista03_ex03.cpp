#include<iostream>
#include<cstdlib>

using namespace std;

/*
Criar um programa que receba 2 valores e calcule o produto através de uma função que retorna valores.
 */

float prod(float v1, float v2);

int main(){
	float n1, n2;
	
	cout << "Informe o valor 1: ";
	cin >> n1;
	
	cout << "Informe o valor 2: ";
	cin >> n2;
	
	cout << "O produto dos dois valores e " << prod(n1,n2) << endl;
	
}

float prod(float v1, float v2){
	
	return(v1*v2);
	
}


