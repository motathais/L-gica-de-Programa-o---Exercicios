#include<iostream>
#include<cstdlib>

/*
1�) Criar um programa que permita a entrada de um n�mero inteiro e retorne o seu dobro, atrav�s de uma
fun��o.
*/

using namespace std;

int dobro(int x);

int main()
{
 int v;
 system("CLS");
 cout << "Digite o valor:";
 cin>> v;
 cout << "Dobro = " << dobro(v) << endl;
 system("PAUSE");
 return 0;
}
int dobro (int x)
{
 return(x*2);
}
