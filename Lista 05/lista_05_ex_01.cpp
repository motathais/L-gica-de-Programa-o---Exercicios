#include <iostream>
#include <PILHA.H>

/*1.�) Armazenar �n� n�meros inteiros em uma pilha, at� que �999� seja digitado.
Retornar o n�mero de elementos da pilha que possuem valor �mpar e o n�mero de 
elementos da pilha que possuem valor par.
*/

using namespace std;

int main(){
	
	system("cls");
	struct Pilha P1;
	IniPilha(&P1);
	
	int x, cont_impar = 0, cont_par = 0;
	
	do{
	cout <<"Digite um numero: "<<endl;
	cin >>x;
	Push(&P1, x);
	
	if (x % 2 ==0){
		cont_par = cont_par + 1;
	}
	else {
		cont_impar= cont_impar + 1;
	}
    }while( x != 999);
    
    cout <<"A pilha possui "<< cont_par << " numeros pares"<<endl;
    cout <<"A pilha possui "<< cont_impar - 1 << " numeros impares"<<endl;

}


