#include <iostream>
#include <cstdlib>

// Dado um n�mero real X e um n�mero natural K, calcular a pot�ncia X elevado a Katrav�s de produtos sucessivos.x
//k = x.x.x.x. ...... x
//Obs: independente do valor de k, para x=0 ou 1 o resultado � imediato, isto �, 0 e 1

using namespace std;

int main(){
	
	int i;
	double k, x, valor = 1;
	
	cout << "Digite a base: "<< endl;
	cin >> x;
	
	cout << "Digite o expoente: "<< endl;
	cin >> k;
	
	for (i = 1; i <= k; i ++ ){
		valor = valor * x;
		
	}
	
	cout << valor << endl;
	system("PAUSE");
	return 0;
	
}
