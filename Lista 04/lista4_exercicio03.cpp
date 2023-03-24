#include <iostream>
#include <PILHA.H>

using namespace std;

/*3.ª) Codifique um programa em C++ que transforme um número decimal em um número 
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
z = x % 8; //resto da divisão
w = x / 8; //inteiro da divisão
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
