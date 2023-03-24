#include <iostream>
#include <cstdlib>

//Faça um programa que apresente o total da soma obtido dos cem primeiros números inteiros. (1+2+3+4+......+100) 

using namespace std;

int main(){
	
	int soma = 0, i;
	
	for(i=0; i <= 100; ++ i ){
		
		soma = soma + i;
		
	}
	
	cout << soma << endl;
	
	
	system ("PAUSE");
	return 0;
}
