#include<iostream>
#include <PILHA.H>

using namespace std;

/*2.�) Codifique um programa em C++ que reverta uma s�rie de n�meros at� que 999 seja 
digitado. Teste o seu programa com a s�rie 1,3,5,7,9,2,4,6,8.
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
