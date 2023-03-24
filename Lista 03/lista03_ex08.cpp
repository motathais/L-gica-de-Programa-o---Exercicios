#include <iostream>
#include <cstdlib>

using namespace std;

/*
Criar um programa que verifique se um número é primo ou não, através de uma função. Número primo é divisível somente por 1 e por ele mesmo.
*/

void ehPrimo(int primo);
int main(){
	int num;
	
	cout <<"Informe o numero que deseja saber se e primo ou nao: " << endl;
	cin >> num;
	
	ehPrimo(num);
	
	return 0;
}


void ehPrimo(int primo)
{
	int i, j, div = 0;
	
	for(i = 1; i <= primo; i ++){
	
		if (primo % i == 0){
			div = div + 1;
		}		
	}
	
	if(div == 2){
			cout << "O numero e primo!";
		}
		else{
			cout << "O numero nao e primo!";
		}
}
  
  

