#include <iostream>
#include <PILHA.H>

using namespace std;

/*3.�) Codifique um programa em C++ que transforme um n�mero decimal em um n�mero 
octal.
*/

int main()
{

system("cls");
struct Pilha P1;
IniPilha(&P1);
int x,z,w;
cout << "Digite um numero inteiro decimal:" << endl;
cin >> x;
z = x % 8; //resto da divis�o
w = x / 8; //inteiro da divis�o
Push(&P1,z); //empilha o resto
while (w != 0)
{
x = w;
z = x % 8;
w = x / 8;
Push(&P1, z);
}
while (! pilhavazia(&P1))
{
x = Pop(&P1);
cout << x ;
}
system("PAUSE");
}
