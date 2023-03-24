#include<iostream>
#include <PILHA.H>

using namespace std;

/*2.ª) Codifique um programa em C++ que reverta uma série de números até que 999 seja 
digitado. Teste o seu programa com a série 1,3,5,7,9,2,4,6,8.
*/

int main()
{

system("cls");
struct Pilha P1;
IniPilha(&P1);

int x, y;

do{
	cout <<"Digite um numero: "<<endl;
	cin >>x;
	Push(&P1, x);
	
}while( x != 999);

while (!pilhavazia(&P1))
{
	x = Pop(&P1);
	cout<<x<<endl;	
}
	system("PAUSE");
}
