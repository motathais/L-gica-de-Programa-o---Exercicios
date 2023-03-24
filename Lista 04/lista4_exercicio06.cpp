#include <iostream>
#include <stdlib.h>
#include <Pilha.H>

/*
6.ª) Uma string é considerada palíndroma se ela pode ser lida da esquerda para a direita ou
da direita para a esquerda com o mesmo significado. Neste caso, não podemos considerar
acentuações, letras maiúsculas ou minúsculas, os espaços e os caracteres especiais. A
seguir estão alguns exemplos:
Radar
Subi no Onibus
Go dog
Faça um programa em C++ para verificar se uma expressão é ou não palíndroma.
*/

using namespace std;

void trata_palavras();

int main(){
	
struct Pilha P1;
IniPilha(&P1);
	
int t,i, r, conta_iguais = 0;;
char x;
char palavra1[20];
char copia_palavra1[20];
char palavra2[20];
 
cout << "Digite uma expressao: ";
fgets(palavra1, 20, stdin);

//printf(palavra1);

t=strlen(palavra1);

cout << t <<endl;

for (i=0; i < t; i++){
	if(palavra1[i] != '!' && palavra1[i] != '?' && palavra1[i] != ' ' && palavra1[i] != '.' )
	{
		copia_palavra1[i] = palavra1[i];
	}
}

r = strlen(copia_palavra1);
printf(copia_palavra1);
	

for (i=0;i<r;i++)
	{
		Push(&P1,copia_palavra1[i]);
	}

for (i=0;i<r;i++)
	{
		x=Pop(&P1);
		palavra2[i] = x;	
	}
	
for (i=0;i<r;i++)
	{
		
		if(copia_palavra1[i] == palavra2[i])
		{
			conta_iguais = conta_iguais + 1;
		}
	}
	
if (conta_iguais == strlen(copia_palavra1)){
	cout << "A expressao eh palindroma!";
}	
else {
	cout << "A expressao NAO eh palindroma!";
}

	return 0;
	
}

void trata_palavras(char palavra[])
{
	int i, k, x = 0;
	
	//Removendo acentos
	char comAcento[] = "ÄÅÁÂÀÃäáâàãÉÊËÈéêëèÍÎÏÌíîïìÖÓÔÒÕöóôòõÜÚÛüúûùÇç";
	char semAcento[] = "AAAAAAaaaaaEEEEeeeeIIIIiiiiOOOOOoooooUUUuuuuCc";
	
	for (k = 0; k < strlen(palavra); k++) {
		for (i = 0; i < strlen(comAcento); i++) {
			if (palavra[k] == comAcento[i]) {
				palavra[k] = semAcento[i];
			}
		}
	}
	
	//Transformando em minusculo
	while (palavra[x]) {
		palavra[x] = tolower(palavra[x]);
		x++;
	}
	
	
}




