#include <iostream>
#include <cstdlib>

/*
Dados dois n�meros naturais A e B, calcular o MDC entre A e B atrav�s do processo e 
exemplo: 
� Para A=80 e B=112:
1. Dividir o n�mero maior pelo menor: 
112 dividido por 80 -> quociente 1 e resto 32;
2. N�o dando resto zero, dividir o divisor pelo resto da divis�o anterior:
80 dividido por 32 -> quociente 2 e resto 16;
3. Prosseguir com as divis�es at� obter resto zero.
32 dividido por 16 ->quociente 2 e resto 0.
Portanto, o MDC(80,112) = 16.
*/

#include <iostream>
#include <stdlib.h>
 
using namespace std; 
 
int main() 
{ 
    int a, b, maior, menor, quoc, resto = 1, div;
    cin >> a;
    cin >> b;
    if(a > b){
    	maior = a;
    	menor = b;
	} else {
		maior = b;
    	menor = a;
	}

	while(resto != 0){
		quoc = maior / menor;
    	resto = maior % menor;
    	maior = menor;
    	menor = resto;
	}

    cout << "MDC(" << a << "," << b << ") = " << maior << ".\n";
    return 0;
}


