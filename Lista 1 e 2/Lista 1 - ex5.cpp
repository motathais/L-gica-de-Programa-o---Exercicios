#include <iostream>
#include <cstdlib>

//Fa�a um programa que leia 15 valores e informe o valor da diferen�a entre a m�dia e o maior valor.

using namespace std;


int main(){
	
	int vet[15], i, soma = 0, maior, media, diferenca;
	
	
	for (i=0; i <15; i ++){
		
		cout << "Informe um valor: " << endl;
		cin >> vet[i];
		
		if (i == 0){
			
			maior = vet[i];
		}
		else{
			
			if(vet[i] > maior){
				maior = vet[i];
			}
		}
			
				soma = soma + vet[i];
		}
		
	
		media = soma /i;
		diferenca = maior - media;
		
		cout << "O maior e: " << maior <<endl;
		cout << "A soma e: " << soma <<endl;
		cout << "A diferenca entre o meior e a media e: " << diferenca <<endl;
		
	system("PAUSE");
	return 0;
}
