#include <iostream>
#include <Pilha.H>

/*5.�) Codifique um programa em C++ que leia uma palavra e a imprima de forma invertida.
Por exemplo: exerc�cio, dever� ser impresso: oic�crexe. */

using namespace std;

int main()
{
struct Pilha P1;
IniPilha(&P1);

int t,i;
char x;
char palavra[15];
 
cout << "Digite uma palavra:";
cin >> palavra;
t=strlen(palavra);

for (i=0;i<t;i++){
		Push(&P1,palavra[i]);
	}
	
while (!pilhavazia(&P1))
	{
		x=Pop(&P1);
		cout << x;
	}
	return 0;
}



