#include <iostream>
#include <cstdlib>

//Faça um programa que leia 5 valores e informe o valor do maior.

using namespace std;

int main(){
	 
	int valor[5], maior, i;
	
	for(i = 0; i< 5; i ++){
		
		cout << "Informe um valor: " <<endl;
		cin >> valor[i];
		
		if(i == 0){
			
			maior = valor[i];
			
		}
		else if( valor [i] > maior){
			
			maior = valor[i];
			
		}	
 	}
		cout << "O maior valor e: " << maior <<endl; 
	
	system("PAUSE");
	return 0;
	
}
