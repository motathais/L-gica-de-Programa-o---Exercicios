#include <iostream>
#include <cstdlib>

using namespace std;

/*
7ª) Criar um programa que retorne o fatorial de um número, usando uma função que receba um valor e 
retorne o fatorial desse valor.
Fatorial de 5 = 5 x 4 x 3 x 2 x 1 = 12
*/

int fat(int num);

int main(){
	int x;
	
	cout << "Informe o valor que deseja calcular o fatorial: " <<endl;
	cin >> x;
	
    cout << "O fatorial e: " << fat(x) << endl;
		
}

int fat(int num){
	int i, mult = 1;
	
	for (i = num; i > 0; i = i - 1){
		
		mult = mult * i;
				
	}
	return(mult);
}
